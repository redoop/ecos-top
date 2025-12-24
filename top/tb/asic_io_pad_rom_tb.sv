module asic_io_pad_rom_tb;
    
    // 时钟和复位
    reg sys_clk_i_pad = 0;
    reg rst_n_pad = 0;
    reg [2:0] ip_sel_pad = 3'b000;
    
    // IO pads
    wire [81:0] io_pads;
    reg [81:0] io_pad_drive = 82'h0;
    reg [81:0] io_pad_enable = 82'h0;
    
    // ROM引导逻辑
    reg [31:0] rom_memory [0:15];
    reg [31:0] rom_addr;
    reg [31:0] rom_data;
    reg rom_enable = 0;
    
    // 双向IO pad控制
    genvar i;
    generate
        for (i = 0; i < 82; i = i + 1) begin : io_control
            assign io_pads[i] = io_pad_enable[i] ? io_pad_drive[i] : 1'bz;
        end
    endgenerate
    
    // DUT
    asic_top u_asic_top (
        .ip_sel_pad0(ip_sel_pad[0]),
        .ip_sel_pad1(ip_sel_pad[1]), 
        .ip_sel_pad2(ip_sel_pad[2]),
        .sys_clk_i_pad(sys_clk_i_pad),
        .rst_n_pad(rst_n_pad),
        .io_pad0(io_pads[0]), .io_pad1(io_pads[1]), .io_pad2(io_pads[2]), .io_pad3(io_pads[3]),
        .io_pad4(io_pads[4]), .io_pad5(io_pads[5]), .io_pad6(io_pads[6]), .io_pad7(io_pads[7]),
        .io_pad8(io_pads[8]), .io_pad9(io_pads[9]), .io_pad10(io_pads[10]), .io_pad11(io_pads[11]),
        .io_pad12(io_pads[12]), .io_pad13(io_pads[13]), .io_pad14(io_pads[14]), .io_pad15(io_pads[15]),
        .io_pad16(io_pads[16]), .io_pad17(io_pads[17]), .io_pad18(io_pads[18]), .io_pad19(io_pads[19]),
        .io_pad20(io_pads[20]), .io_pad21(io_pads[21]), .io_pad22(io_pads[22]), .io_pad23(io_pads[23]),
        .io_pad24(io_pads[24]), .io_pad25(io_pads[25]), .io_pad26(io_pads[26]), .io_pad27(io_pads[27]),
        .io_pad28(io_pads[28]), .io_pad29(io_pads[29]), .io_pad30(io_pads[30]), .io_pad31(io_pads[31]),
        .io_pad32(io_pads[32]), .io_pad33(io_pads[33]), .io_pad34(io_pads[34]), .io_pad35(io_pads[35]),
        .io_pad36(io_pads[36]), .io_pad37(io_pads[37]), .io_pad38(io_pads[38]), .io_pad39(io_pads[39]),
        .io_pad40(io_pads[40]), .io_pad41(io_pads[41]), .io_pad42(io_pads[42]), .io_pad43(io_pads[43]),
        .io_pad44(io_pads[44]), .io_pad45(io_pads[45]), .io_pad46(io_pads[46]), .io_pad47(io_pads[47]),
        .io_pad48(io_pads[48]), .io_pad49(io_pads[49]), .io_pad50(io_pads[50]), .io_pad51(io_pads[51]),
        .io_pad52(io_pads[52]), .io_pad53(io_pads[53]), .io_pad54(io_pads[54]), .io_pad55(io_pads[55]),
        .io_pad56(io_pads[56]), .io_pad57(io_pads[57]), .io_pad58(io_pads[58]), .io_pad59(io_pads[59]),
        .io_pad60(io_pads[60]), .io_pad61(io_pads[61]), .io_pad62(io_pads[62]), .io_pad63(io_pads[63]),
        .io_pad64(io_pads[64]), .io_pad65(io_pads[65]), .io_pad66(io_pads[66]), .io_pad67(io_pads[67]),
        .io_pad68(io_pads[68]), .io_pad69(io_pads[69]), .io_pad70(io_pads[70]), .io_pad71(io_pads[71]),
        .io_pad72(io_pads[72]), .io_pad73(io_pads[73]), .io_pad74(io_pads[74]), .io_pad75(io_pads[75]),
        .io_pad76(io_pads[76]), .io_pad77(io_pads[77]), .io_pad78(io_pads[78]), .io_pad79(io_pads[79]),
        .io_pad80(io_pads[80]), .io_pad81(io_pads[81]),
        .sys_clk_o_pad()
    );
    
    // 时钟生成
    always #5 sys_clk_i_pad = ~sys_clk_i_pad;
    
    // ROM引导逻辑 - 模拟内存访问
    always @(posedge sys_clk_i_pad) begin
        if (rom_enable && rom_addr < 64) begin
            rom_data <= rom_memory[rom_addr[5:2]];
        end
    end
    
    // UART数据注入任务
    task uart_send_byte(input [7:0] data);
        integer bit_idx;
        begin
            io_pad_drive[58] = 1'b0;
            io_pad_enable[58] = 1'b1;
            #8680;
            
            for (bit_idx = 0; bit_idx < 8; bit_idx = bit_idx + 1) begin
                io_pad_drive[58] = data[bit_idx];
                #8680;
            end
            
            io_pad_drive[58] = 1'b1;
            #8680;
            io_pad_enable[58] = 1'b0;
            #1000;
        end
    endtask
    
    // ROM初始化任务
    task init_rom_bootloader;
        begin
            // RISC-V引导程序：UART到GPIO矩阵处理
            rom_memory[0] = 32'h20000037;  // lui x0, 0x20000    ; 加载UART基地址
            rom_memory[1] = 32'h00400093;  // addi x1, x0, 4     ; UART状态寄存器地址
            rom_memory[2] = 32'h0000a023;  // sw x0, 0(x1)       ; 清除状态
            rom_memory[3] = 32'h0000a103;  // lw x2, 0(x1)       ; 读取UART状态
            rom_memory[4] = 32'h00817113;  // andi x2, x2, 8     ; 检查接收标志
            rom_memory[5] = 32'hfe010ee3;  // beqz x2, -4        ; 等待数据
            rom_memory[6] = 32'h0000a103;  // lw x2, 0(x1)       ; 读取UART数据
            rom_memory[7] = 32'h00812023;  // sw x2, 0(x0)       ; 写入GPIO
            rom_memory[8] = 32'h00400093;  // addi x1, x0, 4     ; 重置地址
            rom_memory[9] = 32'hff5ff06f;  // j -12              ; 循环
            
            $display("ROM引导程序初始化完成");
        end
    endtask
    
    // 激活ROM引导
    task activate_rom_bootloader;
        begin
            rom_enable = 1'b1;
            rom_addr = 32'h0;
            
            // 模拟处理器启动序列
            repeat (10) begin
                @(posedge sys_clk_i_pad);
                rom_addr = rom_addr + 4;
                $display("ROM[0x%02x] = 0x%08x", rom_addr-4, rom_data);
            end
            
            $display("ROM引导逻辑激活完成");
        end
    endtask
    
    // 矩阵数据
    reg [7:0] matrix_data [0:3];
    
    initial begin
        // VCD文件输出
        $dumpfile("asic_io_pad_rom.vcd");
        $dumpvars(0, asic_io_pad_rom_tb);
        
        // 初始化矩阵数据
        matrix_data[0] = 8'd1;
        matrix_data[1] = 8'd2; 
        matrix_data[2] = 8'd3;
        matrix_data[3] = 8'd4;
        
        // 复位序列
        rst_n_pad = 0;
        #100;
        rst_n_pad = 1;
        #1000;
        
        $display("开始ROM引导逻辑集成测试");
        
        // 初始化ROM
        init_rom_bootloader();
        #5000;
        
        // 激活ROM引导
        activate_rom_bootloader();
        #10000;
        
        // 通过UART接口注入矩阵数据
        repeat (4) begin
            static integer j = 0;
            $display("注入矩阵数据[%0d] = %d", j, matrix_data[j]);
            uart_send_byte(matrix_data[j]);
            #50000; // 更长等待时间让ROM处理
            j = j + 1;
        end
        
        // 观察GPIO输出
        #200000;
        $display("最终GPIO输出: io_pads[31:0] = 0x%08x", io_pads[31:0]);
        
        #500000;
        $display("ROM引导逻辑集成测试完成");
        $finish;
    end
    
    // GPIO输出监控
    always @(io_pads[31:0]) begin
        if (io_pads[31:0] !== 32'hzzzzzzzz && io_pads[31:0] !== 32'h00000000) begin
            $display("时间 %0t: GPIO输出变化 = 0x%08x", $time, io_pads[31:0]);
        end
    end
    
endmodule
