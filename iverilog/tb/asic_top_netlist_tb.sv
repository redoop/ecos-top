`timescale 1ns/1ps

/**
 * Minimal Testbench for asic_top_V1210.syn.v (Netlist Simulation)
 * Simplified to avoid memory issues during compilation
 */

module asic_top_netlist_tb();

    // Clock and Reset
    reg sys_clk_i;
    reg rst_n;

    // IP Selection - 使用 reg 类型以便在 initial 块中赋值
    reg ip_sel_pad0;
    reg ip_sel_pad1;
    reg ip_sel_pad2;

    // Clock Output
    wire sys_clk_o_pad;

    // IO Pads - 使用 reg 类型并初始化为确定值，避免 X 态
    reg io_pad0, io_pad1, io_pad2, io_pad3, io_pad4, io_pad5, io_pad6, io_pad7;
    reg io_pad8, io_pad9, io_pad10, io_pad11, io_pad12, io_pad13, io_pad14, io_pad15;
    reg io_pad16, io_pad17, io_pad18, io_pad19, io_pad20, io_pad21, io_pad22, io_pad23;
    reg io_pad24, io_pad25, io_pad26, io_pad27, io_pad28, io_pad29, io_pad30, io_pad31;
    reg io_pad32, io_pad33, io_pad34, io_pad35, io_pad36, io_pad37, io_pad38, io_pad39;
    reg io_pad40, io_pad41, io_pad42, io_pad43, io_pad44, io_pad45, io_pad46, io_pad47;
    reg io_pad48, io_pad49, io_pad50, io_pad51, io_pad52, io_pad53, io_pad54, io_pad55;
    reg io_pad56, io_pad57, io_pad58, io_pad59, io_pad60, io_pad61, io_pad62, io_pad63;
    reg io_pad64, io_pad65, io_pad66, io_pad67, io_pad68, io_pad69, io_pad70, io_pad71;
    reg io_pad72, io_pad73, io_pad74, io_pad75, io_pad76, io_pad77, io_pad78, io_pad79;
    reg io_pad80, io_pad81;

    // Instantiation of DUT
    asic_top dut (
        .ip_sel_pad0(ip_sel_pad0),
        .ip_sel_pad1(ip_sel_pad1),
        .ip_sel_pad2(ip_sel_pad2),
        .sys_clk_i_pad(sys_clk_i),
        .rst_n_pad(rst_n),
        .sys_clk_o_pad(sys_clk_o_pad),
        .io_pad0(io_pad0),   .io_pad1(io_pad1),   .io_pad2(io_pad2),   .io_pad3(io_pad3),
        .io_pad4(io_pad4),   .io_pad5(io_pad5),   .io_pad6(io_pad6),   .io_pad7(io_pad7),
        .io_pad8(io_pad8),   .io_pad9(io_pad9),   .io_pad10(io_pad10), .io_pad11(io_pad11),
        .io_pad12(io_pad12), .io_pad13(io_pad13), .io_pad14(io_pad14), .io_pad15(io_pad15),
        .io_pad16(io_pad16), .io_pad17(io_pad17), .io_pad18(io_pad18), .io_pad19(io_pad19),
        .io_pad20(io_pad20), .io_pad21(io_pad21), .io_pad22(io_pad22), .io_pad23(io_pad23),
        .io_pad24(io_pad24), .io_pad25(io_pad25), .io_pad26(io_pad26), .io_pad27(io_pad27),
        .io_pad28(io_pad28), .io_pad29(io_pad29), .io_pad30(io_pad30), .io_pad31(io_pad31),
        .io_pad32(io_pad32), .io_pad33(io_pad33), .io_pad34(io_pad34), .io_pad35(io_pad35),
        .io_pad36(io_pad36), .io_pad37(io_pad37), .io_pad38(io_pad38), .io_pad39(io_pad39),
        .io_pad40(io_pad40), .io_pad41(io_pad41), .io_pad42(io_pad42), .io_pad43(io_pad43),
        .io_pad44(io_pad44), .io_pad45(io_pad45), .io_pad46(io_pad46), .io_pad47(io_pad47),
        .io_pad48(io_pad48), .io_pad49(io_pad49), .io_pad50(io_pad50), .io_pad51(io_pad51),
        .io_pad52(io_pad52), .io_pad53(io_pad53), .io_pad54(io_pad54), .io_pad55(io_pad55),
        .io_pad56(io_pad56), .io_pad57(io_pad57), .io_pad58(io_pad58), .io_pad59(io_pad59),
        .io_pad60(io_pad60), .io_pad61(io_pad61), .io_pad62(io_pad62), .io_pad63(io_pad63),
        .io_pad64(io_pad64), .io_pad65(io_pad65), .io_pad66(io_pad66), .io_pad67(io_pad67),
        .io_pad68(io_pad68), .io_pad69(io_pad69), .io_pad70(io_pad70), .io_pad71(io_pad71),
        .io_pad72(io_pad72), .io_pad73(io_pad73), .io_pad74(io_pad74), .io_pad75(io_pad75),
        .io_pad76(io_pad76), .io_pad77(io_pad77), .io_pad78(io_pad78), .io_pad79(io_pad79),
        .io_pad80(io_pad80), .io_pad81(io_pad81)
    );

    // Clock generation - 25MHz
    initial begin
        sys_clk_i = 0;
        forever #20 sys_clk_i = ~sys_clk_i;
    end

    // 初始化所有信号以避免 X 态
    initial begin
        // 初始化所有控制信号
        rst_n = 1'b0;
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b0;
        
        // 初始化所有 IO pad 为确定值（避免 X 态传播）
        {io_pad0, io_pad1, io_pad2, io_pad3, io_pad4, io_pad5, io_pad6, io_pad7} = 8'h00;
        {io_pad8, io_pad9, io_pad10, io_pad11, io_pad12, io_pad13, io_pad14, io_pad15} = 8'h00;
        {io_pad16, io_pad17, io_pad18, io_pad19, io_pad20, io_pad21, io_pad22, io_pad23} = 8'h00;
        {io_pad24, io_pad25, io_pad26, io_pad27, io_pad28, io_pad29, io_pad30, io_pad31} = 8'h00;
        {io_pad32, io_pad33, io_pad34, io_pad35, io_pad36, io_pad37, io_pad38, io_pad39} = 8'h00;
        {io_pad40, io_pad41, io_pad42, io_pad43, io_pad44, io_pad45, io_pad46, io_pad47} = 8'h00;
        {io_pad48, io_pad49, io_pad50, io_pad51, io_pad52, io_pad53, io_pad54, io_pad55} = 8'h00;
        {io_pad56, io_pad57, io_pad58, io_pad59, io_pad60, io_pad61, io_pad62, io_pad63} = 8'h00;
        {io_pad64, io_pad65, io_pad66, io_pad67, io_pad68, io_pad69, io_pad70, io_pad71} = 8'h00;
        {io_pad72, io_pad73, io_pad74, io_pad75, io_pad76, io_pad77, io_pad78, io_pad79} = 8'h00;
        {io_pad80, io_pad81} = 2'b00;
    end

    // Test stimulus
    initial begin
        // Setup dump
        $dumpfile("./work/asic_top_netlist.vcd");
        $dumpvars(0, asic_top_netlist_tb);

        $display("[%0t] Netlist simulation started", $time);
        $display("[%0t] All signals initialized to avoid X-state", $time);

        // 等待几个时钟周期让初始化稳定
        #100;

        // Reset sequence - 确保复位信号有足够的持续时间
        $display("[%0t] Asserting reset", $time);
        rst_n = 1'b0;
        #400;  // 增加复位时间
        
        rst_n = 1'b1;
        $display("[%0t] Reset released", $time);

        // 等待复位后稳定
        #200;

        // Test IP selection - 逐个测试避免同时切换多个信号
        $display("[%0t] Testing IP selection: 001", $time);
        ip_sel_pad0 = 1'b1;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b0;
        #1000;

        $display("[%0t] Testing IP selection: 010", $time);
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b1;
        ip_sel_pad2 = 1'b0;
        #1000;

        $display("[%0t] Testing IP selection: 100", $time);
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b1;
        #1000;

        $display("[%0t] Testing IP selection: 000 (back to default)", $time);
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b0;
        #1000;

        // 运行更长时间观察稳态行为
        #10000;
        $display("[%0t] Simulation complete", $time);
        $finish;
    end

endmodule
