module test_uart_matrix;
    reg clk = 0;
    reg rst = 1;
    wire uart_tx, uart_rx;
    reg uart_rx_reg = 1;
    
    always #5 clk = ~clk; // 100MHz
    
    initial begin
        #100 rst = 0;
        
        // 发送测试矩阵 [1,2,3,4]
        send_byte(8'h01);
        send_byte(8'h02); 
        send_byte(8'h03);
        send_byte(8'h04);
        
        // 等待接收结果
        #50000;
        $finish;
    end
    
    task send_byte(input [7:0] data);
        integer i;
        begin
            uart_rx_reg = 0; // start bit
            #8680; // 115200 baud
            for(i = 0; i < 8; i = i + 1) begin
                uart_rx_reg = data[i];
                #8680;
            end
            uart_rx_reg = 1; // stop bit
            #8680;
        end
    endtask
    
    assign uart_rx = uart_rx_reg;
    
    // 监控UART输出
    always @(negedge uart_tx) begin
        $display("UART TX activity detected at time %t", $time);
    end
    
    initial begin
        $dumpfile("uart_matrix_test.vcd");
        $dumpvars(0, test_uart_matrix);
    end
    
endmodule
