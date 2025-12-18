// UART发送和接收测试
module uart_test_tb;
  reg clk = 0;
  reg reset = 1;
  reg uart_rx = 1;
  wire uart_tx;
  wire [31:0] gpio_out;
  reg [31:0] gpio_in = 0;
  
  always #5 clk = ~clk;
  
  initial begin
    #20 reset = 0;
  end
  
  // 实例化SoC
  ip1_SimpleEdgeAiSoC soc (
    .clock(clk),
    .reset(reset),
    .io_uart_tx(uart_tx),
    .io_uart_rx(uart_rx),
    .io_lcd_spi_clk(),
    .io_lcd_spi_mosi(),
    .io_lcd_spi_cs(),
    .io_lcd_spi_dc(),
    .io_lcd_spi_rst(),
    .io_lcd_backlight(),
    .io_gpio_out(gpio_out),
    .io_gpio_in(gpio_in),
    .io_trap(),
    .io_compact_irq(),
    .io_bitnet_irq(),
    .io_uart_tx_irq(),
    .io_uart_rx_irq()
  );
  
  // UART发送任务
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      $display("发送UART字节: 0x%02x", data);
      uart_rx = 0; // 起始位
      #8680;
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx = data[i];
        #8680;
      end
      uart_rx = 1; // 停止位
      #8680;
    end
  endtask
  
  // UART接收监控
  reg [7:0] rx_data;
  reg [3:0] rx_bit_count;
  reg rx_active = 0;
  
  always @(negedge uart_tx) begin
    if (!rx_active) begin
      rx_active = 1;
      rx_bit_count = 0;
      rx_data = 0;
      #4340; // 半个波特周期
    end
  end
  
  always @(posedge clk) begin
    if (rx_active) begin
      if (rx_bit_count < 8) begin
        #8680;
        rx_data[rx_bit_count] = uart_tx;
        rx_bit_count = rx_bit_count + 1;
      end else begin
        rx_active = 0;
        $display("接收UART字节: 0x%02x", rx_data);
      end
    end
  end
  
  // 测试程序
  initial begin
    $dumpfile("uart_test.vcd");
    $dumpvars(0, uart_test_tb);
    
    $display("UART发送接收测试开始");
    
    wait(!reset);
    #1000;
    
    // 测试UART状态寄存器
    $display("检查UART状态寄存器");
    $display("UART控制: 0x%08x", soc.uart.uart.control);
    $display("UART波特率: 0x%08x", soc.uart.uart.baudDiv);
    
    // 发送测试数据
    send_uart_byte(8'h55);
    #50000;
    
    send_uart_byte(8'hAA);
    #50000;
    
    send_uart_byte(8'h33);
    #50000;
    
    $display("GPIO输出: 0x%08x", gpio_out);
    $display("测试完成");
    $finish;
  end
  
  // 监控UART寄存器变化
  always @(posedge clk) begin
    if (soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("时间: %0t, UART RX FIFO有效, 数据: 0x%02x", 
               $time, soc.uart.uart.rxFifo.io_deq_bits);
    end
    if (soc.uart.uart.txFifo.io_enq_valid) begin
      $display("时间: %0t, UART TX FIFO写入, 数据: 0x%02x", 
               $time, soc.uart.uart.txFifo.io_enq_bits);
    end
  end
  
  // 监控GPIO变化
  always @(posedge clk) begin
    if (gpio_out !== 32'h0) begin
      $display("时间: %0t, GPIO输出: 0x%08x", $time, gpio_out);
    end
  end
  
endmodule
