// UART输入到输出回环测试
module uart_loopback_tb;
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
  
  // 使用带ROM的SoC
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
      $display("发送: 0x%02x", data);
      uart_rx = 0;
      #8680;
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx = data[i];
        #8680;
      end
      uart_rx = 1;
      #8680;
    end
  endtask
  
  // UART接收监控
  reg [7:0] rx_data;
  reg [3:0] rx_bit_count = 0;
  reg rx_active = 0;
  reg [15:0] bit_timer = 0;
  
  always @(posedge clk) begin
    if (!rx_active && uart_tx == 0) begin
      // 检测起始位
      rx_active = 1;
      rx_bit_count = 0;
      rx_data = 0;
      bit_timer = 4340; // 半个波特周期
    end else if (rx_active) begin
      if (bit_timer > 0) begin
        bit_timer = bit_timer - 1;
      end else begin
        bit_timer = 8680; // 一个波特周期
        if (rx_bit_count < 8) begin
          rx_data[rx_bit_count] = uart_tx;
          rx_bit_count = rx_bit_count + 1;
        end else begin
          // 停止位
          rx_active = 0;
          $display("接收: 0x%02x", rx_data);
        end
      end
    end
  end
  
  // 直接UART回环测试（不依赖ROM）
  task test_uart_direct();
    begin
      $display("=== 直接UART回环测试 ===");
      
      // 直接写UART TX FIFO
      force soc.uart.uart.txFifo.io_enq_valid = 1;
      force soc.uart.uart.txFifo.io_enq_bits = 8'h55;
      #10;
      release soc.uart.uart.txFifo.io_enq_valid;
      release soc.uart.uart.txFifo.io_enq_bits;
      
      #100000; // 等待发送完成
      
      force soc.uart.uart.txFifo.io_enq_valid = 1;
      force soc.uart.uart.txFifo.io_enq_bits = 8'hAA;
      #10;
      release soc.uart.uart.txFifo.io_enq_valid;
      release soc.uart.uart.txFifo.io_enq_bits;
      
      #100000;
    end
  endtask
  
  // 测试程序
  initial begin
    $dumpfile("uart_loopback_test.vcd");
    $dumpvars(0, uart_loopback_tb);
    
    $display("UART回环测试开始");
    
    wait(!reset);
    #1000;
    
    // 检查UART配置
    $display("UART控制: 0x%08x", soc.uart.uart.control);
    $display("UART波特率: 0x%08x", soc.uart.uart.baudDiv);
    
    // 直接测试UART硬件
    test_uart_direct();
    
    // 通过RX发送数据测试
    $display("=== UART RX到TX测试 ===");
    send_uart_byte(8'h33);
    #200000;
    
    send_uart_byte(8'hCC);
    #200000;
    
    $display("测试完成");
    $finish;
  end
  
  // 监控UART FIFO状态
  always @(posedge clk) begin
    if (soc.uart.uart.rxFifo.io_enq_valid) begin
      $display("时间: %0t, RX FIFO写入: 0x%02x", $time, soc.uart.uart.rxFifo.io_enq_bits);
    end
    if (soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("时间: %0t, RX FIFO读取: 0x%02x", $time, soc.uart.uart.rxFifo.io_deq_bits);
    end
    if (soc.uart.uart.txFifo.io_enq_valid) begin
      $display("时间: %0t, TX FIFO写入: 0x%02x", $time, soc.uart.uart.txFifo.io_enq_bits);
    end
    if (soc.uart.uart.txFifo.io_deq_valid) begin
      $display("时间: %0t, TX FIFO读取: 0x%02x", $time, soc.uart.uart.txFifo.io_deq_bits);
    end
  end
  
  // 监控UART状态寄存器
  always @(posedge clk) begin
    if (soc.uart.uart.rxFifo.io_deq_valid !== soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("时间: %0t, RX Valid变化: %b", $time, soc.uart.uart.rxFifo.io_deq_valid);
    end
  end
  
endmodule
