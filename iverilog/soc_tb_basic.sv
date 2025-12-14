// Basic SoC testbench using existing asic_top_fixed.sv
// Simplified version for iverilog compatibility

`timescale 1ns / 1ps

module soc_tb ();
    localparam real CLK_PERIOD = 40.0; // 25MHz = 40ns period

    // Test signals
    reg clk;
    reg rst_n;
    reg [2:0] ip_sel;

    // ASIC top instance using the existing fixed version
    asic_top u_asic_top (
        .clk_pad    (clk),
        .rst_n_pad  (rst_n),
        .io_pad_i   (82'h0),
        .io_pad_o   (),
        .io_pad_oe  (),
        .test_mode_o()
    );

    // Clock generation
    initial begin
        clk = 1'b0;
        forever begin
            #(CLK_PERIOD / 2) clk <= ~clk;
        end
    end

    // Reset task
    task sim_reset(input integer delay);
        begin
            rst_n = 1'b0;
            repeat (delay) @(posedge clk);
            #1 rst_n = 1'b1;
            $display("Reset released at time %t", $time);
        end
    endtask
    
    // Main test sequence
    initial begin
        $display("Starting basic SoC simulation at time %t", $time);
        
        // Initialize signals
        rst_n = 1'b0;
        ip_sel = 3'd1; // Default to IP1
        
        // Apply reset
        sim_reset(100);
        
        // Run for some time
        #10000;
        
        $display("Basic SoC simulation completed at time %t", $time);
        $finish;
    end

    // Test configuration
    initial begin
        // Check for test arguments
        if ($test$plusargs("ip_sel00")) ip_sel = 3'd0;
        else if ($test$plusargs("ip_sel01")) ip_sel = 3'd1;
        else if ($test$plusargs("ip_sel02")) ip_sel = 3'd2;
        else if ($test$plusargs("ip_sel03")) ip_sel = 3'd3;
        else if ($test$plusargs("ip_sel04")) ip_sel = 3'd4;
        else if ($test$plusargs("ip_sel05")) ip_sel = 3'd5;

        $display("IP Selection: %d", ip_sel);

        // VCD dump control with depth support
        if ($test$plusargs("dump_all")) begin
            reg [31:0] vcd_depth;
            $dumpfile("soc_tb.vcd");
            
            // Check for VCD depth parameter
            if ($value$plusargs("vcd_depth=%d", vcd_depth)) begin
                $dumpvars(vcd_depth, soc_tb);
                $display("VCD dumping enabled with depth: %d", vcd_depth);
            end else begin
                $dumpvars(0, soc_tb);  // Default: dump all levels
                $display("VCD dumping enabled (all levels)");
            end
        end
    end

    // Monitor key signals
    initial begin
        $monitor("Time=%t rst_n=%b clk=%b ip_sel=%d", 
                 $time, rst_n, clk, ip_sel);
    end

endmodule