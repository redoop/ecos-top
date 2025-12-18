`include "soc_tb.sv"
`include "../../uart_gpio_tb.sv"

module soc_tb_uart_gpio;
  
  // 继承原有testbench
  soc_tb tb_inst();
  uart_gpio_tb gpio_test();
  
  // 重写主测试流程
  initial begin
    $display("[%0t] UART到GPIO测试开始", $time);
    tb_inst.sim_reset(400);
    #50000; // 等待bootloader启动
    
    gpio_test.send_uart_to_gpio_program(); // 加载程序
    gpio_test.test_uart_data_to_gpio();    // 测试数据传输
    
    #1000000;
    $finish;
  end

endmodule
