// 使用bootloader_tb.sv中的ROM模块进行UART测试
`include "bootloader_tb.sv"

module uart_with_bootloader_tb;
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
  
  // 使用带ROM的内存适配器替换原版本
  ip1_SimpleMemAdapter_WithROM memAdapter_with_rom (
    .io_mem_valid(soc.riscv.mem_valid),
    .io_mem_ready(mem_ready_override),
    .io_mem_addr(soc.riscv.mem_addr),
    .io_mem_wdata(soc.riscv.mem_wdata),
    .io_mem_wstrb(soc.riscv.mem_wstrb),
    .io_mem_rdata(mem_rdata_override),
    .io_reg_addr(soc.memAdapter.io_reg_addr),
    .io_reg_wdata(soc.memAdapter.io_reg_wdata),
    .io_reg_rdata(soc.decoder.io_cpu_rdata),
    .io_reg_wen(soc.memAdapter.io_reg_wen),
    .io_reg_ren(soc.memAdapter.io_reg_ren),
    .io_reg_valid(soc.memAdapter.io_reg_valid),
    .io_reg_ready(soc.decoder.io_cpu_ready),
    .clock(clk)
  );
  
  // 使用不带ROM的SoC但替换内存适配器
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
  
  // 重写内存接口
  wire mem_ready_override;
  wire [31:0] mem_rdata_override;
  
  assign soc.riscv.mem_ready = mem_ready_override;
  assign soc.riscv.mem_rdata = mem_rdata_override;
  
  // UART发送任务
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      $display("发送UART: 0x%02x", data);
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
  
  // 测试程序
  initial begin
    $dumpfile("uart_with_bootloader_test.vcd");
    $dumpvars(0, uart_with_bootloader_tb);
    
    $display("带Bootloader的UART测试开始");
    
    wait(!reset);
    #50000;
    
    $display("CPU PC: 0x%08x", soc.riscv.reg_pc);
    $display("UART控制: 0x%08x", soc.uart.uart.control);
    
    send_uart_byte(8'h55);
    #100000;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    send_uart_byte(8'hAA);
    #100000;
    $display("GPIO输出: 0x%08x", gpio_out);
    
    $display("测试完成");
    $finish;
  end
  
  always @(posedge clk) begin
    if (soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("时间: %0t, UART接收: 0x%02x", $time, soc.uart.uart.rxFifo.io_deq_bits);
    end
    if (soc.gpio.io_reg_valid && soc.gpio.io_reg_wen) begin
      $display("时间: %0t, GPIO写入: 0x%08x", $time, soc.gpio.io_reg_wdata);
    end
  end
  
  always @(gpio_out) begin
    $display("时间: %0t, GPIO输出: 0x%08x", $time, gpio_out);
  end
  
endmodule
