module uart_gpio_test;
    reg clk = 0;
    reg rst = 1;
    reg uart_rx = 1;
    wire uart_tx;
    wire [7:0] gpio_out;
    
    // 100MHz clock
    always #5 clk = ~clk;
    
    // DUT instance
    SimpleEdgeAiSoC dut (
        .clock(clk),
        .reset(rst),
        .io_uart_rx(uart_rx),
        .io_uart_tx(uart_tx),
        .io_gpio_out(gpio_out)
    );
    
    // UART send task (115200 baud, 100MHz clock)
    task send_uart_byte(input [7:0] data);
        integer i;
        begin
            uart_rx = 0; // start bit
            #8680; // bit period for 115200 baud
            for (i = 0; i < 8; i = i + 1) begin
                uart_rx = data[i];
                #8680;
            end
            uart_rx = 1; // stop bit
            #8680;
        end
    endtask
    
    initial begin
        $dumpfile("uart_gpio_test.vcd");
        $dumpvars(0, uart_gpio_test);
        
        // Reset
        #100 rst = 0;
        #1000;
        
        // Test cases
        $display("Testing UART to GPIO...");
        
        // Send '1' -> GPIO should output 0x01
        send_uart_byte(8'h31); // ASCII '1'
        #10000;
        $display("Sent '1', GPIO = 0x%02x", gpio_out);
        
        // Send '2' -> GPIO should output 0x02  
        send_uart_byte(8'h32); // ASCII '2'
        #10000;
        $display("Sent '2', GPIO = 0x%02x", gpio_out);
        
        // Send 'A' -> GPIO should output 0x41
        send_uart_byte(8'h41); // ASCII 'A'
        #10000;
        $display("Sent 'A', GPIO = 0x%02x", gpio_out);
        
        #50000;
        $finish;
    end
    
endmodule
