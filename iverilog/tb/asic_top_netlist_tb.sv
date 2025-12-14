`timescale 1ns/1ps

/**
 * Minimal Testbench for asic_top_V1210.syn.v (Netlist Simulation)
 * Simplified to avoid memory issues during compilation
 */

module asic_top_netlist_tb();

    // Clock and Reset
    reg sys_clk_i;
    reg rst_n;

    // IP Selection
    reg [2:0] ip_sel;
    wire ip_sel_pad0 = ip_sel[0];
    wire ip_sel_pad1 = ip_sel[1];
    wire ip_sel_pad2 = ip_sel[2];

    // Clock Output
    wire sys_clk_o_pad;

    // IO Pads (minimal connections)
    wire io_pad0, io_pad1, io_pad2, io_pad3, io_pad4, io_pad5, io_pad6, io_pad7;
    wire io_pad8, io_pad9, io_pad10, io_pad11, io_pad12, io_pad13, io_pad14, io_pad15;
    wire io_pad16, io_pad17, io_pad18, io_pad19, io_pad20, io_pad21, io_pad22, io_pad23;
    wire io_pad24, io_pad25, io_pad26, io_pad27, io_pad28, io_pad29, io_pad30, io_pad31;
    wire io_pad32, io_pad33, io_pad34, io_pad35, io_pad36, io_pad37, io_pad38, io_pad39;
    wire io_pad40, io_pad41, io_pad42, io_pad43, io_pad44, io_pad45, io_pad46, io_pad47;
    wire io_pad48, io_pad49, io_pad50, io_pad51, io_pad52, io_pad53, io_pad54, io_pad55;
    wire io_pad56, io_pad57, io_pad58, io_pad59, io_pad60, io_pad61, io_pad62, io_pad63;
    wire io_pad64, io_pad65, io_pad66, io_pad67, io_pad68, io_pad69, io_pad70, io_pad71;
    wire io_pad72, io_pad73, io_pad74, io_pad75, io_pad76, io_pad77, io_pad78, io_pad79;
    wire io_pad80, io_pad81;

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

    // Test stimulus
    initial begin
        // Setup dump
        $dumpfile("./work/asic_top_netlist.vcd");
        $dumpvars(0, asic_top_netlist_tb);

        // Initialize
        rst_n = 0;
        ip_sel = 3'b000;

        $display("[%0t] Netlist simulation started", $time);

        // Reset sequence
        #200;
        rst_n = 1;
        $display("[%0t] Reset released", $time);

        // Test IP selection
        #400;
        ip_sel = 3'b001;
        $display("[%0t] IP selection: 001", $time);

        #400;
        ip_sel = 3'b010;
        $display("[%0t] IP selection: 010", $time);

        #400;
        ip_sel = 3'b100;
        $display("[%0t] IP selection: 100", $time);

        // Run simulation
        #10000;
        $display("[%0t] Simulation complete", $time);
        $finish;
    end

endmodule
