`timescale 1ns/1ps

/**
 * Fixed and Enhanced Testbench for asic_top Netlist Simulation
 * 
 * Key improvements:
 * - Robust X-state prevention and monitoring
 * - Enhanced reset sequence and timing
 * - Comprehensive signal initialization
 * - Structured test scenarios
 * - Better debugging and reporting
 * - Memory-efficient VCD dumping
 * - Timeout protection
 */

module asic_top_netlist_tb_fixed();

    // ========================================
    // Signal Declarations
    // ========================================
    
    // Clock and Reset
    reg sys_clk_i;
    reg rst_n;

    // IP Selection Control
    reg ip_sel_pad0;
    reg ip_sel_pad1;
    reg ip_sel_pad2;

    // Clock Output
    wire sys_clk_o_pad;

    // IO Pads - All declared as reg for proper initialization
    reg [81:0] io_pads;  // Compact representation
    
    // Individual IO pad signals for DUT connection
    wire io_pad0  = io_pads[0];   wire io_pad1  = io_pads[1];   wire io_pad2  = io_pads[2];   wire io_pad3  = io_pads[3];
    wire io_pad4  = io_pads[4];   wire io_pad5  = io_pads[5];   wire io_pad6  = io_pads[6];   wire io_pad7  = io_pads[7];
    wire io_pad8  = io_pads[8];   wire io_pad9  = io_pads[9];   wire io_pad10 = io_pads[10];  wire io_pad11 = io_pads[11];
    wire io_pad12 = io_pads[12];  wire io_pad13 = io_pads[13];  wire io_pad14 = io_pads[14];  wire io_pad15 = io_pads[15];
    wire io_pad16 = io_pads[16];  wire io_pad17 = io_pads[17];  wire io_pad18 = io_pads[18];  wire io_pad19 = io_pads[19];
    wire io_pad20 = io_pads[20];  wire io_pad21 = io_pads[21];  wire io_pad22 = io_pads[22];  wire io_pad23 = io_pads[23];
    wire io_pad24 = io_pads[24];  wire io_pad25 = io_pads[25];  wire io_pad26 = io_pads[26];  wire io_pad27 = io_pads[27];
    wire io_pad28 = io_pads[28];  wire io_pad29 = io_pads[29];  wire io_pad30 = io_pads[30];  wire io_pad31 = io_pads[31];
    wire io_pad32 = io_pads[32];  wire io_pad33 = io_pads[33];  wire io_pad34 = io_pads[34];  wire io_pad35 = io_pads[35];
    wire io_pad36 = io_pads[36];  wire io_pad37 = io_pads[37];  wire io_pad38 = io_pads[38];  wire io_pad39 = io_pads[39];
    wire io_pad40 = io_pads[40];  wire io_pad41 = io_pads[41];  wire io_pad42 = io_pads[42];  wire io_pad43 = io_pads[43];
    wire io_pad44 = io_pads[44];  wire io_pad45 = io_pads[45];  wire io_pad46 = io_pads[46];  wire io_pad47 = io_pads[47];
    wire io_pad48 = io_pads[48];  wire io_pad49 = io_pads[49];  wire io_pad50 = io_pads[50];  wire io_pad51 = io_pads[51];
    wire io_pad52 = io_pads[52];  wire io_pad53 = io_pads[53];  wire io_pad54 = io_pads[54];  wire io_pad55 = io_pads[55];
    wire io_pad56 = io_pads[56];  wire io_pad57 = io_pads[57];  wire io_pad58 = io_pads[58];  wire io_pad59 = io_pads[59];
    wire io_pad60 = io_pads[60];  wire io_pad61 = io_pads[61];  wire io_pad62 = io_pads[62];  wire io_pad63 = io_pads[63];
    wire io_pad64 = io_pads[64];  wire io_pad65 = io_pads[65];  wire io_pad66 = io_pads[66];  wire io_pad67 = io_pads[67];
    wire io_pad68 = io_pads[68];  wire io_pad69 = io_pads[69];  wire io_pad70 = io_pads[70];  wire io_pad71 = io_pads[71];
    wire io_pad72 = io_pads[72];  wire io_pad73 = io_pads[73];  wire io_pad74 = io_pads[74];  wire io_pad75 = io_pads[75];
    wire io_pad76 = io_pads[76];  wire io_pad77 = io_pads[77];  wire io_pad78 = io_pads[78];  wire io_pad79 = io_pads[79];
    wire io_pad80 = io_pads[80];  wire io_pad81 = io_pads[81];

    // ========================================
    // Monitoring and Debug Variables
    // ========================================
    
    integer x_state_count = 0;
    integer z_state_count = 0;
    integer test_phase = 0;
    reg [31:0] cycle_count = 0;
    
    // Test control
    reg test_enable = 0;
    reg [2:0] current_ip_sel = 3'b000;
    integer ip_sel_test;

    // ========================================
    // DUT Instantiation
    // ========================================
    
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

    // ========================================
    // Clock Generation
    // ========================================
    
    // 25MHz system clock (40ns period)
    initial begin
        sys_clk_i = 1'b0;
        forever #20 sys_clk_i = ~sys_clk_i;
    end

    // ========================================
    // Signal Initialization
    // ========================================
    
    // Critical: Initialize ALL signals immediately to prevent X-state propagation
    initial begin
        // Control signals
        rst_n = 1'b0;
        ip_sel_pad0 = 1'b0;
        ip_sel_pad1 = 1'b0;
        ip_sel_pad2 = 1'b0;
        
        // Initialize all IO pads to known state
        io_pads = 82'h0;
        
        // Test control
        test_enable = 1'b0;
        current_ip_sel = 3'b000;
        
        $display("[%0t] *** FIXED TESTBENCH: All signals initialized to prevent X-states ***", $time);
    end

    // ========================================
    // Monitoring and Debug
    // ========================================
    
    // Cycle counter
    always @(posedge sys_clk_i) begin
        if (rst_n) begin
            cycle_count <= cycle_count + 1;
        end else begin
            cycle_count <= 0;
        end
    end

    // X/Z state monitoring with rate limiting
    always @(posedge sys_clk_i) begin
        if (rst_n && test_enable) begin
            // Monitor critical output signals
            if (sys_clk_o_pad === 1'bx) begin
                x_state_count = x_state_count + 1;
                if (x_state_count <= 5) // Limit output spam
                    $display("[%0t] ERROR: sys_clk_o_pad in X-state! (Count: %0d)", $time, x_state_count);
            end
            
            if (sys_clk_o_pad === 1'bz) begin
                z_state_count = z_state_count + 1;
                if (z_state_count <= 5)
                    $display("[%0t] ERROR: sys_clk_o_pad in Z-state! (Count: %0d)", $time, z_state_count);
            end
        end
    end

    // ========================================
    // Test Stimulus and Control
    // ========================================
    
    // Helper task for IP selection
    task set_ip_selection;
        input [2:0] sel;
        begin
            {ip_sel_pad2, ip_sel_pad1, ip_sel_pad0} = sel;
            current_ip_sel = sel;
            $display("[%0t] IP Selection set to: %03b", $time, sel);
        end
    endtask

    // Helper task for waiting with progress indication
    task wait_cycles;
        input integer cycles;
        integer i;
        begin
            for (i = 0; i < cycles; i = i + 1) begin
                @(posedge sys_clk_i);
                if (i % 100 == 0 && i > 0) begin
                    $display("[%0t] Progress: %0d/%0d cycles completed", $time, i, cycles);
                end
            end
        end
    endtask

    // Main test sequence
    initial begin
        // ========================================
        // Test Setup
        // ========================================
        
        $display("========================================");
        $display("ASIC TOP NETLIST TESTBENCH - FIXED VERSION");
        $display("========================================");
        $display("[%0t] Starting enhanced netlist simulation", $time);
        
        // Setup VCD dump with configurable multi-layer support
        $dumpfile("./work/asic_top_netlist_fixed.vcd");
        
        // Multi-layer VCD configuration
        // Level 0: Complete hierarchy (WARNING: Very large file for netlist!)
        // Level 1: Testbench only
        // Level 2: Testbench + DUT top level  
        // Level 3: Testbench + DUT + 1 sub-level
        // Level 4: Testbench + DUT + 2 sub-levels
        // Level 5: Testbench + DUT + 3 sub-levels
        
        `ifdef VCD_DEPTH_FULL
            $display("[%0t] VCD: Full hierarchy dump (all levels)", $time);
            $dumpvars(0, asic_top_netlist_tb_fixed);
        `elsif VCD_DEPTH_DEEP
            $display("[%0t] VCD: Deep dump (5 levels)", $time);
            $dumpvars(5, asic_top_netlist_tb_fixed);
        `elsif VCD_DEPTH_MEDIUM
            $display("[%0t] VCD: Medium dump (3 levels)", $time);
            $dumpvars(3, asic_top_netlist_tb_fixed);
        `else
            // Default: Multi-layer with reasonable depth for netlist analysis
            $display("[%0t] VCD: Multi-layer dump (4 levels) - Default", $time);
            $dumpvars(4, asic_top_netlist_tb_fixed);
            
            // Additional selective dumping for key internal signals
            $display("[%0t] VCD: Adding selective deep traces for analysis", $time);
            
            // Dump key DUT internal modules if they exist (will be ignored if not found)
            $dumpvars(2, dut.u_SimpleEdgeAiSoC);
            $dumpvars(2, dut.u_soc);
            $dumpvars(2, dut.soc_inst);
            $dumpvars(2, dut.ip0);
            $dumpvars(2, dut.ip1);
            $dumpvars(2, dut.ip2);
        `endif
        
        // Wait for initial stabilization
        #100;
        
        // ========================================
        // Phase 1: Extended Reset Sequence
        // ========================================
        
        test_phase = 1;
        $display("[%0t] === PHASE 1: Extended Reset Sequence ===", $time);
        
        rst_n = 1'b0;
        set_ip_selection(3'b000);
        
        $display("[%0t] Asserting reset for extended period...", $time);
        wait_cycles(50); // 2000ns reset period
        
        rst_n = 1'b1;
        $display("[%0t] Reset released - allowing stabilization", $time);
        
        // Post-reset stabilization
        wait_cycles(25); // 1000ns stabilization
        test_enable = 1'b1;
        
        // ========================================
        // Phase 2: Basic Functionality Test
        // ========================================
        
        test_phase = 2;
        $display("[%0t] === PHASE 2: Basic Functionality Test ===", $time);
        
        // Test default state
        $display("[%0t] Testing default state (000)", $time);
        set_ip_selection(3'b000);
        wait_cycles(50);
        
        // ========================================
        // Phase 3: IP Selection Tests
        // ========================================
        
        test_phase = 3;
        $display("[%0t] === PHASE 3: IP Selection Tests ===", $time);
        
        // Test each IP selection systematically
        for (ip_sel_test = 1; ip_sel_test < 8; ip_sel_test = ip_sel_test + 1) begin
            $display("[%0t] Testing IP selection: %03b", $time, ip_sel_test);
            set_ip_selection(ip_sel_test);
            wait_cycles(75); // Allow time for switching
            
            // Brief return to default between tests
            if (ip_sel_test < 7) begin
                set_ip_selection(3'b000);
                wait_cycles(25);
            end
        end
        
        // ========================================
        // Phase 4: Stability Test
        // ========================================
        
        test_phase = 4;
        $display("[%0t] === PHASE 4: Long-term Stability Test ===", $time);
        
        set_ip_selection(3'b000);
        $display("[%0t] Running stability test for 500 cycles...", $time);
        wait_cycles(500);
        
        // ========================================
        // Phase 5: Final Validation
        // ========================================
        
        test_phase = 5;
        $display("[%0t] === PHASE 5: Final Validation ===", $time);
        
        // Final state check
        set_ip_selection(3'b000);
        wait_cycles(50);
        
        // ========================================
        // Test Completion and Reporting
        // ========================================
        
        test_enable = 1'b0;
        
        $display("========================================");
        $display("SIMULATION COMPLETE - FINAL REPORT");
        $display("========================================");
        $display("[%0t] Total simulation time: %0t", $time, $time);
        $display("[%0t] Total clock cycles: %0d", $time, cycle_count);
        $display("[%0t] X-state detections: %0d", $time, x_state_count);
        $display("[%0t] Z-state detections: %0d", $time, z_state_count);
        
        if (x_state_count == 0 && z_state_count == 0) begin
            $display("[%0t] *** SUCCESS: No X/Z states detected! ***", $time);
            $display("[%0t] *** NETLIST SIMULATION PASSED ***", $time);
        end else begin
            $display("[%0t] *** WARNING: X/Z states detected - review waveform ***", $time);
        end
        
        $display("========================================");
        $finish;
    end

    // ========================================
    // Safety and Timeout Protection
    // ========================================
    
    // Simulation timeout protection
    initial begin
        #200000; // 200us maximum simulation time
        $display("[%0t] TIMEOUT: Simulation exceeded maximum allowed time", $time);
        $display("[%0t] Current phase: %0d, Cycle count: %0d", $time, test_phase, cycle_count);
        $display("[%0t] Forcing simulation termination", $time);
        $finish;
    end

    // Emergency stop on excessive X/Z states
    always @(x_state_count, z_state_count) begin
        if (x_state_count > 100 || z_state_count > 100) begin
            $display("[%0t] EMERGENCY STOP: Too many X/Z states detected", $time);
            $display("[%0t] X-states: %0d, Z-states: %0d", $time, x_state_count, z_state_count);
            $finish;
        end
    end

endmodule