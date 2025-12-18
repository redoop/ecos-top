// UART发送到GPIO输出完整测试
module uart_to_gpio_tb;
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
  
  // UART发送任务 (115200波特率)
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      $display("发送UART: 0x%02x", data);
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
  
  // 等待GPIO输出变化
  task wait_gpio_change(input [31:0] expected);
    reg [31:0] prev_gpio;
    integer timeout;
    begin
      prev_gpio = gpio_out;
      timeout = 0;
      while (gpio_out == prev_gpio && timeout < 100000) begin
        #100;
        timeout = timeout + 1;
      end
      if (timeout >= 100000) begin
        $display("超时: GPIO未变化");
      end else begin
        $display("GPIO变化: 0x%08x", gpio_out);
        if (gpio_out[7:0] == expected[7:0]) begin
          $display("✓ 数据匹配: 期望0x%02x, 实际0x%02x", expected[7:0], gpio_out[7:0]);
        end else begin
          $display("✗ 数据不匹配: 期望0x%02x, 实际0x%02x", expected[7:0], gpio_out[7:0]);
        end
      end
    end
  endtask
  
  // 测试程序
  initial begin
    $dumpfile("uart_to_gpio_test.vcd");
    $dumpvars(0, uart_to_gpio_tb);
    
    $display("UART到GPIO完整测试开始");
    
    wait(!reset);
    
    // 等待ROM Bootloader初始化
    $display("等待ROM Bootloader初始化...");
    #50000;
    
    // 检查CPU是否在执行ROM代码
    $display("CPU PC: 0x%08x", soc.riscv.reg_pc);
    $display("ROM访问: %b", (soc.riscv.mem_addr < 32'h100));
    
    // 测试1: 发送0x55
    $display("=== 测试1: 发送0x55 ===");
    send_uart_byte(8'h55);
    wait_gpio_change(32'h55);
    #10000;
    
    // 测试2: 发送0xAA  
    $display("=== 测试2: 发送0xAA ===");
    send_uart_byte(8'hAA);
    wait_gpio_change(32'hAA);
    #10000;
    
    // 测试3: 发送0x33
    $display("=== 测试3: 发送0x33 ===");
    send_uart_byte(8'h33);
    wait_gpio_change(32'h33);
    #10000;
    
    // 测试4: 发送0xCC
    $display("=== 测试4: 发送0xCC ===");
    send_uart_byte(8'hCC);
    wait_gpio_change(32'hCC);
    #10000;
    
    $display("测试完成");
    $finish;
  end
  
  // 监控关键信号
  always @(posedge clk) begin
    // 监控UART接收
    if (soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("时间: %0t, UART接收: 0x%02x", $time, soc.uart.uart.rxFifo.io_deq_bits);
    end
    
    // 监控GPIO写操作
    if (soc.gpio.io_reg_valid && soc.gpio.io_reg_wen) begin
      $display("时间: %0t, GPIO写入: 0x%08x", $time, soc.gpio.io_reg_wdata);
    end
    
    // 监控CPU内存访问
    if (soc.riscv.mem_valid) begin
      if (soc.riscv.mem_addr >= 32'h20000000 && soc.riscv.mem_addr < 32'h20001000) begin
        if (|soc.riscv.mem_wstrb) begin
          $display("时间: %0t, UART写: 地址=0x%08x, 数据=0x%08x", 
                   $time, soc.riscv.mem_addr, soc.riscv.mem_wdata);
        end else begin
          $display("时间: %0t, UART读: 地址=0x%08x, 数据=0x%08x", 
                   $time, soc.riscv.mem_addr, soc.riscv.mem_rdata);
        end
      end
      if (soc.riscv.mem_addr >= 32'h20020000 && soc.riscv.mem_addr < 32'h20021000) begin
        if (|soc.riscv.mem_wstrb) begin
          $display("时间: %0t, GPIO写: 地址=0x%08x, 数据=0x%08x", 
                   $time, soc.riscv.mem_addr, soc.riscv.mem_wdata);
        end
      end
    end
  end
  
  // 监控GPIO输出变化
  always @(gpio_out) begin
    $display("时间: %0t, GPIO输出: 0x%08x", $time, gpio_out);
  end
  
endmodule
