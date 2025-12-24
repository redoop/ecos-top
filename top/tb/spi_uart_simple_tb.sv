`timescale 1ns/1ps

module spi_uart_simple_tb;
    reg clk, rst_n;
    wire [81:0] io_pad;
    reg [81:0] io_pad_i;
    wire [81:0] io_pad_o, io_pad_oe;
    
    asic_top dut (
        .ip_sel_pad0(1'b0),
        .ip_sel_pad1(1'b1), 
        .ip_sel_pad2(1'b0),
        .sys_clk_i_pad(clk),
        .sys_clk_o_pad(),
        .rst_n_pad(rst_n),
        .io_pad0(io_pad[0]), .io_pad1(io_pad[1]), .io_pad2(io_pad[2]), .io_pad3(io_pad[3]),
        .io_pad4(io_pad[4]), .io_pad5(io_pad[5]), .io_pad6(io_pad[6]), .io_pad7(io_pad[7]),
        .io_pad8(io_pad[8]), .io_pad9(io_pad[9]), .io_pad10(io_pad[10]), .io_pad11(io_pad[11]),
        .io_pad12(io_pad[12]), .io_pad13(io_pad[13]), .io_pad14(io_pad[14]), .io_pad15(io_pad[15]),
        .io_pad16(io_pad[16]), .io_pad17(io_pad[17]), .io_pad18(io_pad[18]), .io_pad19(io_pad[19]),
        .io_pad20(io_pad[20]), .io_pad21(io_pad[21]), .io_pad22(io_pad[22]), .io_pad23(io_pad[23]),
        .io_pad24(io_pad[24]), .io_pad25(io_pad[25]), .io_pad26(io_pad[26]), .io_pad27(io_pad[27]),
        .io_pad28(io_pad[28]), .io_pad29(io_pad[29]), .io_pad30(io_pad[30]), .io_pad31(io_pad[31]),
        .io_pad32(io_pad[32]), .io_pad33(io_pad[33]), .io_pad34(io_pad[34]), .io_pad35(io_pad[35]),
        .io_pad36(io_pad[36]), .io_pad37(io_pad[37]), .io_pad38(io_pad[38]), .io_pad39(io_pad[39]),
        .io_pad40(io_pad[40]), .io_pad41(io_pad[41]), .io_pad42(io_pad[42]), .io_pad43(io_pad[43]),
        .io_pad44(io_pad[44]), .io_pad45(io_pad[45]), .io_pad46(io_pad[46]), .io_pad47(io_pad[47]),
        .io_pad48(io_pad[48]), .io_pad49(io_pad[49]), .io_pad50(io_pad[50]), .io_pad51(io_pad[51]),
        .io_pad52(io_pad[52]), .io_pad53(io_pad[53]), .io_pad54(io_pad[54]), .io_pad55(io_pad[55]),
        .io_pad56(io_pad[56]), .io_pad57(io_pad[57]), .io_pad58(io_pad[58]), .io_pad59(io_pad[59]),
        .io_pad60(io_pad[60]), .io_pad61(io_pad[61]), .io_pad62(io_pad[62]), .io_pad63(io_pad[63]),
        .io_pad64(io_pad[64]), .io_pad65(io_pad[65]), .io_pad66(io_pad[66]), .io_pad67(io_pad[67]),
        .io_pad68(io_pad[68]), .io_pad69(io_pad[69]), .io_pad70(io_pad[70]), .io_pad71(io_pad[71]),
        .io_pad72(io_pad[72]), .io_pad73(io_pad[73]), .io_pad74(io_pad[74]), .io_pad75(io_pad[75]),
        .io_pad76(io_pad[76]), .io_pad77(io_pad[77]), .io_pad78(io_pad[78]), .io_pad79(io_pad[79]),
        .io_pad80(io_pad[80]), .io_pad81(io_pad[81])
    );
    
    genvar i;
    generate
        for (i = 0; i < 82; i = i + 1) begin : io_pad_gen
            assign io_pad[i] = io_pad_oe[i] ? io_pad_o[i] : io_pad_i[i];
        end
    endgenerate
    
    always #5 clk = ~clk;
    
    initial begin
        $dumpfile("spi_uart_simple.vcd");
        $dumpvars(0, spi_uart_simple_tb);
        
        clk = 0;
        rst_n = 0;
        io_pad_i = 82'h0;
        
        #100 rst_n = 1;
        #1000;
        
        $display("开始SPI和UART IO测试");
        
        // 测试UART IO (pad 58=RX, 59=TX)
        $display("测试UART IO连接");
        io_pad_i[58] = 1'b1;
        #100;
        $display("UART RX输入: %b, TX输出: %b, TX使能: %b", io_pad_i[58], io_pad_o[59], io_pad_oe[59]);
        
        // 测试SPI IO (pad 50=SCK, 51=MOSI, 52=MISO, 53=CS)
        $display("测试SPI IO连接");
        io_pad_i[50] = 1'b0; // SCK
        io_pad_i[51] = 1'b1; // MOSI
        io_pad_i[53] = 1'b0; // CS
        #100;
        $display("SPI SCK: %b->%b, MOSI: %b->%b, MISO: %b, CS: %b->%b", 
                 io_pad_i[50], io_pad_o[50], io_pad_i[51], io_pad_o[51], 
                 io_pad_o[52], io_pad_i[53], io_pad_o[53]);
        
        // 模拟SPI时序
        $display("模拟SPI传输");
        io_pad_i[53] = 1'b0; // CS active
        #100;
        repeat(8) begin
            io_pad_i[50] = 1'b0; // SCK low
            #50;
            io_pad_i[50] = 1'b1; // SCK high
            #50;
            $display("SPI时钟周期: SCK=%b, MOSI=%b, MISO=%b", io_pad[50], io_pad[51], io_pad[52]);
        end
        io_pad_i[53] = 1'b1; // CS inactive
        
        // 模拟UART传输
        $display("模拟UART传输");
        io_pad_i[58] = 1'b0; // 起始位
        #8680;
        io_pad_i[58] = 1'b1; // 数据位1
        #8680;
        io_pad_i[58] = 1'b0; // 数据位0
        #8680;
        io_pad_i[58] = 1'b1; // 停止位
        #8680;
        $display("UART传输完成: RX=%b, TX=%b", io_pad[58], io_pad[59]);
        
        #10000;
        $display("SPI和UART IO测试完成");
        $finish;
    end
endmodule
