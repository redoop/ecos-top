module uart_gpio_tb;
  
  task send_uart_to_gpio_program();
    $display("[%0t] 发送UART到GPIO程序", $time);
    
    // 程序机器码 (从uart_to_gpio.bin提取)
    uart_send_byte(8'h13); uart_send_byte(8'h01); uart_send_byte(8'h01); uart_send_byte(8'hfe);
    uart_send_byte(8'h23); uart_send_byte(8'h2e); uart_send_byte(8'h81); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'h04); uart_send_byte(8'h01); uart_send_byte(8'h02);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h24); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h07); uart_send_byte(8'h02); uart_send_byte(8'h20);
    uart_send_byte(8'h23); uart_send_byte(8'h22); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    // 主循环部分
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h8a); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'ha3); uart_send_byte(8'h01); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'h03); uart_send_byte(8'h47); uart_send_byte(8'h34); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h44); uart_send_byte(8'hfe);
    uart_send_byte(8'h23); uart_send_byte(8'ha0); uart_send_byte(8'he7); uart_send_byte(8'h00);
    uart_send_byte(8'h6f); uart_send_byte(8'hf0); uart_send_byte(8'h9f); uart_send_byte(8'hfd);
    
    $display("[%0t] UART到GPIO程序发送完成", $time);
  endtask

  task test_uart_data_to_gpio();
    $display("[%0t] 测试UART数据到GPIO", $time);
    
    // 等待程序启动
    #1000000;
    
    // 发送测试数据
    $display("[%0t] 发送数据 0x55", $time);
    uart_send_byte(8'h55);
    #500000;
    $display("[%0t] GPIO输出: 0x%02x", $time, gpio_output[7:0]);
    
    $display("[%0t] 发送数据 0xAA", $time);
    uart_send_byte(8'hAA);
    #500000;
    $display("[%0t] GPIO输出: 0x%02x", $time, gpio_output[7:0]);
    
    $display("[%0t] 发送数据 0x13", $time);
    uart_send_byte(8'h13);
    #500000;
    $display("[%0t] GPIO输出: 0x%02x", $time, gpio_output[7:0]);
  endtask

endmodule
