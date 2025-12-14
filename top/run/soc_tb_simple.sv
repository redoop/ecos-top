// Simplified soc_tb for Verilator compatibility
module soc_tb;

    // Basic testbench signals
    reg clk = 0;
    reg rst_n = 0;
    
    // Clock generation
    always #5 clk = ~clk;
    
    // Reset generation
    initial begin
        rst_n = 0;
        #100 rst_n = 1;
    end
    
    // VCD dump for Verilator
    initial begin
        if ($test$plusargs("dump_all")) begin
            $dumpfile("soc_tb.vcd");
            $dumpvars(0, soc_tb);
        end
        
        // Simple test timeout
        #1000000 $finish;
    end
    
    // Simple test message
    initial begin
        $display("Verilator SoC testbench started");
        #1000;
        $display("Verilator SoC testbench running...");
    end

endmodule
