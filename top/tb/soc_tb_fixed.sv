`include "bitnet_test_fixed.sv"

// 在原有 soc_tb.sv 的基础上，将 BitNet 测试任务替换为：

task test_bitnet_accel();
    // 等待复位完成
    wait(r_ext_rst_n == 1'b1);
    repeat(100) @(posedge osc_clk_25m_i_pad);
    
    $display("[%0t] Starting BitNet Accelerator Test", $time);
    
    // 选择IP1 (SimpleEdgeAiSoC)
    r_ip_sel = 3'd1;
    repeat(100) @(posedge osc_clk_25m_i_pad);
    
    // 执行实际的寄存器访问测试
    test_bitnet_registers();
    
    $display("[%0t] BitNet Accelerator Test Completed", $time);
endtask

// 新增BitNet寄存器测试任务
task test_bitnet_registers();
    // 1. 配置矩阵大小
    write_bitnet_reg(32'h1000101C, 32'h00000008); // 8x8矩阵
    
    // 2. 加载测试数据
    load_test_matrices();
    
    // 3. 启动计算
    write_bitnet_reg(32'h10001000, 32'h00000001); // 启动
    
    // 4. 等待完成
    wait_for_bitnet_done();
    
    // 5. 验证结果
    verify_results();
endtask
