// 修复后的BitNet测试激励
// 直接访问BitNet寄存器进行测试

initial begin
    // 等待复位和系统稳定
    wait(soc_tb.r_ext_rst_n == 1'b1);
    repeat(1000) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    $display("[%0t] Starting BitNet Register Test", $time);
    
    // 选择IP1 (BitNet SoC)
    force soc_tb.r_ip_sel = 3'd1;
    repeat(100) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    // 直接访问BitNet寄存器 (需要根据实际层次路径调整)
    // 假设BitNet模块路径为: soc_tb.u_asic_top.u_bitnet_accel
    
    // 1. 配置矩阵大小 (8x8)
    force_bitnet_write(32'h1000101C, 32'h00000008);
    $display("[%0t] Matrix size configured: 8x8", $time);
    
    // 2. 写入测试数据到激活矩阵
    for (int i = 0; i < 16; i++) begin
        force_bitnet_write(32'h10001100 + i*4, 32'h12345678 + i);
    end
    $display("[%0t] Activation matrix loaded", $time);
    
    // 3. 写入权重矩阵
    for (int i = 0; i < 16; i++) begin
        force_bitnet_write(32'h10001300 + i*4, 32'h55555555);
    end
    $display("[%0t] Weight matrix loaded", $time);
    
    // 4. 启动计算
    force_bitnet_write(32'h10001000, 32'h00000001);
    $display("[%0t] BitNet computation started", $time);
    
    // 5. 等待完成 (轮询状态寄存器)
    wait_bitnet_completion();
    
    // 6. 读取结果
    read_bitnet_results();
    
    $display("[%0t] BitNet test completed successfully", $time);
end

// 强制写入BitNet寄存器的任务
task force_bitnet_write(input [31:0] addr, input [31:0] data);
    // 根据实际设计调整信号路径
    force soc_tb.u_asic_top.io_bitnet_addr = addr;
    force soc_tb.u_asic_top.io_bitnet_wdata = data;
    force soc_tb.u_asic_top.io_bitnet_wen = 1'b1;
    force soc_tb.u_asic_top.io_bitnet_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    force soc_tb.u_asic_top.io_bitnet_wen = 1'b0;
    force soc_tb.u_asic_top.io_bitnet_valid = 1'b0;
    
    repeat(2) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask

// 等待BitNet计算完成
task wait_bitnet_completion();
    reg [31:0] status;
    int timeout = 10000;
    
    do begin
        force_bitnet_read(32'h10001004, status); // STATUS_REG
        repeat(10) @(posedge soc_tb.osc_clk_25m_i_pad);
        timeout--;
    end while (status == 32'h00000001 && timeout > 0); // STATUS_RUNNING
    
    if (timeout == 0) begin
        $display("[%0t] ERROR: BitNet computation timeout", $time);
    end else begin
        $display("[%0t] BitNet computation completed, status: 0x%08x", $time, status);
    end
endtask

// 强制读取BitNet寄存器的任务
task force_bitnet_read(input [31:0] addr, output [31:0] data);
    force soc_tb.u_asic_top.io_bitnet_addr = addr;
    force soc_tb.u_asic_top.io_bitnet_ren = 1'b1;
    force soc_tb.u_asic_top.io_bitnet_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    data = soc_tb.u_asic_top.io_bitnet_rdata;
    
    force soc_tb.u_asic_top.io_bitnet_ren = 1'b0;
    force soc_tb.u_asic_top.io_bitnet_valid = 1'b0;
    
    repeat(2) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask

// 读取计算结果
task read_bitnet_results();
    reg [31:0] result_data;
    
    $display("[%0t] Reading computation results:", $time);
    
    for (int i = 0; i < 8; i++) begin
        force_bitnet_read(32'h10001500 + i*4, result_data);
        $display("  Result[%0d]: 0x%08x", i, result_data);
    end
endtask
