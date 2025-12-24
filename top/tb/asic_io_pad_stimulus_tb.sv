module asic_io_pad_stimulus_tb;
    
    // 时钟和复位
    reg sys_clk_i_pad = 0;
    reg rst_n_pad = 0;
    reg [2:0] ip_sel_pad = 3'b000;
    
    // IO pads
    wire [81:0] io_pads;
    reg [81:0] io_pad_drive = 82'h0;
    reg [81:0] io_pad_enable = 82'h0;
    
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
    
    // UART数据注入任务
    task uart_send_byte(input [7:0] data);
        integer bit_idx;
        begin
            // 起始位
            io_pad_drive[58] = 1'b0;
            io_pad_enable[58] = 1'b1;
            #8680;
            
            // 数据位 (LSB first)
            for (bit_idx = 0; bit_idx < 8; bit_idx = bit_idx + 1) begin
                io_pad_drive[58] = data[bit_idx];
                #8680;
            end
            
            // 停止位
            io_pad_drive[58] = 1'b1;
            #8680;
            
            // 释放控制
            io_pad_enable[58] = 1'b0;
            #1000;
        end
    endtask
    
    // 矩阵数据
    reg [7:0] matrix_data [0:3];
    
    initial begin
        // VCD文件输出
        $dumpfile("asic_io_pad_stimulus.vcd");
        $dumpvars(0, asic_io_pad_stimulus_tb);
        
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
        
        $display("开始IO pad外部激励注入测试");
        
        // 等待系统稳定
        #50000;
        
        // 通过UART接口注入矩阵数据
        repeat (4) begin
            static integer i = 0;
            $display("通过IO pad注入矩阵数据[%0d] = %d", i, matrix_data[i]);
            uart_send_byte(matrix_data[i]);
            #10000;
            i = i + 1;
        end
        
        // 观察GPIO输出
        #100000;
        $display("GPIO输出监控: io_pads[31:0] = 0x%08x", io_pads[31:0]);
        
        #500000;
        $display("IO pad激励注入测试完成");
        $finish;
    end
    
    // GPIO输出监控
    always @(io_pads[31:0]) begin
        if (io_pads[31:0] !== 32'h00000000) begin
            $display("时间 %0t: GPIO输出变化 = 0x%08x", $time, io_pads[31:0]);
        end
    end
    
endmodule
