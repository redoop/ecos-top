`timescale 1ns/1ps

/**
 * Enhanced Testbench for X-state debugging in asic_top_V1210.syn.v
 * 专门用于检测和分析 X 态问题
 */

module asic_top_netlist_tb_x_debug();

    // Clock and Reset
    reg sys_clk_i;
    reg rst_n;

    // IP Selection
    reg ip_sel_pad0;
    reg ip_sel_pad1;
    reg ip_sel_pad2;

    // Clock Output
    wire sys_clk_o_pad;

    // IO Pads - 全部初始化为确定值
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

    // X-state detection variables
    integer x_count = 0;
    integer z_count = 0;
    
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
        sys_clk_i = 1'b0;
        forever #20 sys_clk_i = ~sys_clk_i;
    end

    // 强制初始化所有信号 - 这是关键！
    initial begin
        // 立即初始化所有控制信号
        rst_n = 1'b0;
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b0;
        
        // 批量初始化 IO pads
        io_pad0 = 1'b0; io_pad1 = 1'b0; io_pad2 = 1'b0; io_pad3 = 1'b0;
        io_pad4 = 1'b0; io_pad5 = 1'b0; io_pad6 = 1'b0; io_pad7 = 1'b0;
        io_pad8 = 1'b0; io_pad9 = 1'b0; io_pad10 = 1'b0; io_pad11 = 1'b0;
        io_pad12 = 1'b0; io_pad13 = 1'b0; io_pad14 = 1'b0; io_pad15 = 1'b0;
        io_pad16 = 1'b0; io_pad17 = 1'b0; io_pad18 = 1'b0; io_pad19 = 1'b0;
        io_pad20 = 1'b0; io_pad21 = 1'b0; io_pad22 = 1'b0; io_pad23 = 1'b0;
        io_pad24 = 1'b0; io_pad25 = 1'b0; io_pad26 = 1'b0; io_pad27 = 1'b0;
        io_pad28 = 1'b0; io_pad29 = 1'b0; io_pad30 = 1'b0; io_pad31 = 1'b0;
        io_pad32 = 1'b0; io_pad33 = 1'b0; io_pad34 = 1'b0; io_pad35 = 1'b0;
        io_pad36 = 1'b0; io_pad37 = 1'b0; io_pad38 = 1'b0; io_pad39 = 1'b0;
        io_pad40 = 1'b0; io_pad41 = 1'b0; io_pad42 = 1'b0; io_pad43 = 1'b0;
        io_pad44 = 1'b0; io_pad45 = 1'b0; io_pad46 = 1'b0; io_pad47 = 1'b0;
        io_pad48 = 1'b0; io_pad49 = 1'b0; io_pad50 = 1'b0; io_pad51 = 1'b0;
        io_pad52 = 1'b0; io_pad53 = 1'b0; io_pad54 = 1'b0; io_pad55 = 1'b0;
        io_pad56 = 1'b0; io_pad57 = 1'b0; io_pad58 = 1'b0; io_pad59 = 1'b0;
        io_pad60 = 1'b0; io_pad61 = 1'b0; io_pad62 = 1'b0; io_pad63 = 1'b0;
        io_pad64 = 1'b0; io_pad65 = 1'b0; io_pad66 = 1'b0; io_pad67 = 1'b0;
        io_pad68 = 1'b0; io_pad69 = 1'b0; io_pad70 = 1'b0; io_pad71 = 1'b0;
        io_pad72 = 1'b0; io_pad73 = 1'b0; io_pad74 = 1'b0; io_pad75 = 1'b0;
        io_pad76 = 1'b0; io_pad77 = 1'b0; io_pad78 = 1'b0; io_pad79 = 1'b0;
        io_pad80 = 1'b0; io_pad81 = 1'b0;
        
        $display("[%0t] *** ALL SIGNALS FORCE INITIALIZED TO AVOID X-STATE ***", $time);
    end

    // X-state monitoring
    always @(posedge sys_clk_i) begin
        // 检查关键输出信号的 X 态
        if (sys_clk_o_pad === 1'bx) begin
            x_count = x_count + 1;
            if (x_count < 10) // 限制输出数量
                $display("[%0t] WARNING: sys_clk_o_pad is X-state! Count: %0d", $time, x_count);
        end
        
        if (sys_clk_o_pad === 1'bz) begin
            z_count = z_count + 1;
            if (z_count < 10)
                $display("[%0t] WARNING: sys_clk_o_pad is Z-state! Count: %0d", $time, z_count);
        end
    end

    // Test stimulus
    initial begin
        // Setup dump with limited depth to avoid huge files
        $dumpfile("./work/asic_top_netlist_x_debug.vcd");
        $dumpvars(2, asic_top_netlist_tb_x_debug); // 限制层级深度

        $display("=== X-STATE DEBUG TESTBENCH ===");
        $display("[%0t] Netlist simulation started with X-state debugging", $time);

        // 等待初始化完成
        #50;

        // 长时间复位确保所有内部状态机复位
        $display("[%0t] Asserting reset for extended period", $time);
        rst_n = 1'b0;
        #1000;  // 延长复位时间
        
        rst_n = 1'b1;
        $display("[%0t] Reset released - monitoring for X-states", $time);

        // 等待复位后稳定
        #500;

        // 简单的功能测试
        $display("[%0t] Starting functional tests", $time);
        
        // Test 1: 默认状态
        #1000;
        $display("[%0t] Test 1: Default state (000)", $time);
        
        // Test 2: IP selection 001
        ip_sel_pad0 = 1'b1;
        #2000;
        $display("[%0t] Test 2: IP selection 001", $time);
        
        // Test 3: 回到默认状态
        ip_sel_pad0 = 1'b0;
        #2000;
        $display("[%0t] Test 3: Back to default", $time);

        // 运行足够长的时间观察稳态
        #10000;
        
        $display("[%0t] Simulation complete", $time);
        $display("X-state count: %0d, Z-state count: %0d", x_count, z_count);
        
        if (x_count == 0 && z_count == 0) begin
            $display("*** SUCCESS: No X or Z states detected! ***");
        end else begin
            $display("*** WARNING: X/Z states detected - check waveform ***");
        end
        
        $finish;
    end

    // 超时保护
    initial begin
        #100000; // 100us timeout
        $display("[%0t] TIMEOUT: Simulation exceeded maximum time", $time);
        $finish;
    end

endmodule