// Simple test to verify iverilog toolchain
module simple_test;
    reg clk;
    reg rst_n;
    reg [7:0] data_in;
    wire [15:0] data_out;
    
    // Simple counter
    reg [7:0] counter;
    
    // Pi approximation in fixed point: 3.14159 * 256 = 804 (0x324)
    // Using 8.8 fixed point format (8 integer bits, 8 fractional bits)
    parameter [15:0] PI_FIXED = 16'h0324; // π ≈ 3.14159 in 8.8 fixed point
    
    // Calculate counter * π using fixed point arithmetic
    wire [23:0] mult_result;
    assign mult_result = counter * PI_FIXED;
    assign data_out = mult_result[15:8]; // Take the integer part (upper 8 bits)
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Reset and stimulus
    initial begin
        rst_n = 0;
        data_in = 8'h00;
        
        #20 rst_n = 1;
        
        repeat(10) begin
            @(posedge clk);
            data_in = data_in + 1;
            $display("Time=%0t: counter=%0d, data_out=%0d (counter*π≈%0d)", 
                     $time, counter, data_out, counter*3);
        end
        
        $display("Test completed successfully!");
        $display("Final result: counter=%0d, data_out=%0d", counter, data_out);
        $finish;
    end
    
    // Counter logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            counter <= 8'h00;
        else
            counter <= counter + 1;
    end
    
    // VCD dump with depth control
    initial begin
        reg [31:0] vcd_depth;
        $dumpfile("simple_test.vcd");
        
        // Check for VCD depth parameter
        if ($value$plusargs("vcd_depth=%d", vcd_depth)) begin
            $dumpvars(vcd_depth, simple_test);
            $display("VCD dumping enabled with depth: %d", vcd_depth);
        end else begin
            $dumpvars(0, simple_test);  // Default: dump all levels
            $display("VCD dumping enabled (all levels)");
        end
        
        $display("=== Counter * Pi Test ===");
        $display("Using fixed-point arithmetic: π ≈ 3.14159");
    end
    
endmodule