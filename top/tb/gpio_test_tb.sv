// GPIO输入输出测试
module gpio_test_tb;
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
  
  // 直接写GPIO寄存器测试
  task write_gpio(input [31:0] data);
    begin
      $display("写GPIO寄存器: 0x%08x", data);
      // 模拟CPU写GPIO寄存器
      force soc.gpio.io_reg_valid = 1;
      force soc.gpio.io_reg_wen = 1;
      force soc.gpio.io_reg_wdata = data;
      #10;
      release soc.gpio.io_reg_valid;
      release soc.gpio.io_reg_wen;
      release soc.gpio.io_reg_wdata;
      #10;
    end
  endtask
  
  // 读GPIO寄存器测试
  task read_gpio();
    reg [31:0] read_data;
    begin
      // 模拟CPU读GPIO寄存器
      force soc.gpio.io_reg_valid = 1;
      force soc.gpio.io_reg_ren = 1;
      #10;
      read_data = soc.gpio.io_reg_rdata;
      release soc.gpio.io_reg_valid;
      release soc.gpio.io_reg_ren;
      $display("读GPIO寄存器: 0x%08x", read_data);
      #10;
    end
  endtask
  
  // 测试程序
  initial begin
    $dumpfile("gpio_test.vcd");
    $dumpvars(0, gpio_test_tb);
    
    $display("GPIO输入输出测试开始");
    
    wait(!reset);
    #1000;
    
    // 测试GPIO输出
    $display("=== GPIO输出测试 ===");
    write_gpio(32'h12345678);
    #100;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    write_gpio(32'hAABBCCDD);
    #100;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    write_gpio(32'h00000000);
    #100;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    // 测试GPIO输入
    $display("=== GPIO输入测试 ===");
    gpio_in = 32'h55AA33CC;
    #100;
    read_gpio();
    
    gpio_in = 32'hFFFFFFFF;
    #100;
    read_gpio();
    
    gpio_in = 32'h00000000;
    #100;
    read_gpio();
    
    // 测试GPIO地址映射
    $display("=== GPIO地址映射测试 ===");
    $display("GPIO基地址: 0x20020000");
    $display("GPIO模块选择信号: %b", soc.decoder.sel_gpio);
    
    // 模拟CPU访问GPIO地址
    force soc.decoder.io_cpu_addr = 32'h20020000;
    force soc.decoder.io_cpu_valid = 1;
    force soc.decoder.io_cpu_wen = 1;
    force soc.decoder.io_cpu_wdata = 32'hDEADBEEF;
    #10;
    $display("GPIO选择: %b, GPIO写使能: %b", soc.decoder.sel_gpio, soc.decoder.io_gpio_wen);
    release soc.decoder.io_cpu_addr;
    release soc.decoder.io_cpu_valid;
    release soc.decoder.io_cpu_wen;
    release soc.decoder.io_cpu_wdata;
    #100;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    $display("测试完成");
    $finish;
  end
  
  // 监控GPIO变化
  always @(gpio_out) begin
    $display("时间: %0t, GPIO输出变化: 0x%08x", $time, gpio_out);
  end
  
  // 监控GPIO寄存器内部状态
  always @(posedge clk) begin
    if (soc.gpio.io_reg_valid && soc.gpio.io_reg_wen) begin
      $display("时间: %0t, GPIO写操作: 数据=0x%08x", $time, soc.gpio.io_reg_wdata);
    end
    if (soc.gpio.io_reg_valid && soc.gpio.io_reg_ren) begin
      $display("时间: %0t, GPIO读操作: 数据=0x%08x", $time, soc.gpio.io_reg_rdata);
    end
  end
  
endmodule
