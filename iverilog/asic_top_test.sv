// Test for the fixed asic_top module
`timescale 1ns/1ps

module asic_top_test;
    
    // Test signals
    reg clk_pad;
    reg rst_n_pad;
    reg [81:0] io_pad_i;
    wire [81:0] io_pad_o;
    wire [81:0] io_pad_oe;
    wire test_mode_o;
    
    // Instantiate the DUT (Device Under Test)
    asic_top dut (
        .clk_pad(clk_pad),
        .rst_n_pad(rst_n_pad),
        .io_pad_i(io_pad_i),
        .io_pad_o(io_pad_o),
        .io_pad_oe(io_pad_oe),
        .test_mode_o(test_mode_o)
    );
    
    // Clock generation (50MHz -> 20ns period)
    initial begin
        clk_pad = 0;
        forever #10 clk_pad = ~clk_pad;  // 20ns period
    end
    
    // Test sequence
    initial begin
        // Initialize
        rst_n_pad = 0;
        io_pad_i = 82'h0;
        
        $display("=== ASIC Top Level Test Started ===");
        $display("Testing fixed asic_top module");
        
        // Wait for a few clock cycles
        repeat(5) @(posedge clk_pad);
        
        // Release reset
        rst_n_pad = 1;
        $display("Reset released at time %0t", $time);
        
        // Test default mode (no IP selected)
        repeat(10) @(posedge clk_pad);
        $display("Default mode test completed");
        
        // Test with IP3 (ysyx) inputs
        io_pad_i[0] = 1'b1;      // uart rx
        io_pad_i[12] = 1'b1;     // spi miso
        io_pad_i[14:13] = 2'b10; // core sel
        io_pad_i[15] = 1'b1;     // core irq
        
        repeat(10) @(posedge clk_pad);
        $display("IP3 input test completed");
        
        // Change inputs
        io_pad_i[0] = 1'b0;
        io_pad_i[14:13] = 2'b01;
        
        repeat(10) @(posedge clk_pad);
        
        $display("Test completed at time %0t", $time);
        $display("Final io_pad_o = 0x%h", io_pad_o);
        $display("Final io_pad_oe = 0x%h", io_pad_oe);
        $finish;
    end
    
    // Monitor key signals
    always @(posedge clk_pad) begin
        if (rst_n_pad) begin
            $display("Time=%0t: io_pad_o[11:0]=0x%h, io_pad_oe[15:0]=0x%h", 
                     $time, io_pad_o[11:0], io_pad_oe[15:0]);
        end
    end
    
    // VCD dump
    initial begin
        $dumpfile("asic_top_test.vcd");
        $dumpvars(0, asic_top_test);
    end
    
endmodule