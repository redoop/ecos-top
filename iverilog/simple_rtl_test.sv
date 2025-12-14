// Simple RTL test for clk_int_div module
`timescale 1ns/1ps

module simple_rtl_test;
    
    // Test signals
    reg clk_i;
    reg rst_n_i;
    wire clk_o;
    
    // Instantiate the clock divider
    clk_int_even_div_static #(
        .DIV_VALUE_WIDTH(2)  // Divide by 4
    ) dut (
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .clk_o(clk_o)
    );
    
    // Clock generation (100MHz -> 10ns period)
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i;  // 10ns period
    end
    
    // Test sequence
    initial begin
        // Initialize
        rst_n_i = 0;
        
        // Wait for a few clock cycles
        repeat(5) @(posedge clk_i);
        
        // Release reset
        rst_n_i = 1;
        $display("Reset released at time %0t", $time);
        
        // Run for some cycles to observe divided clock
        repeat(50) @(posedge clk_i);
        
        $display("Test completed at time %0t", $time);
        $finish;
    end
    
    // Monitor divided clock edges
    always @(posedge clk_o) begin
        $display("Divided clock rising edge at time %0t", $time);
    end
    
    // VCD dump
    initial begin
        $dumpfile("simple_rtl_test.vcd");
        $dumpvars(0, simple_rtl_test);
        $display("=== Simple RTL Test Started ===");
        $display("Testing clock divider module");
    end
    
endmodule