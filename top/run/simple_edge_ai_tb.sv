`timescale 1ns / 1ps

module simple_edge_ai_tb ();
  localparam real CLK_PERIOD = 10; // 100MHz

  // 时钟和复位
  logic clk, rst_n;
  
  // UART接口
  logic uart_rx, uart_tx;
  
  // GPIO接口  
  logic [7:0] gpio_in, gpio_out, gpio_oe;
  
  // SPI Flash接口
  logic flash_spi_clk, flash_spi_cs, flash_spi_mosi, flash_spi_miso;
  
  // PSRAM接口
  logic psram_spi_clk, psram_spi_cs, psram_spi_mosi, psram_spi_miso;
  logic psram_spi_sio2_out, psram_spi_sio2_oe, psram_spi_sio2_in;
  logic psram_spi_sio3_out, psram_spi_sio3_oe, psram_spi_sio3_in;

  // 实例化 SimpleEdgeAiSoC
  ip1_SimpleEdgeAiSoC u_SimpleEdgeAiSoC (
    .clock(clk),
    .reset(~rst_n),
    .io_uart_rx(uart_rx),
    .io_uart_tx(uart_tx),
    .io_gpio_in(gpio_in),
    .io_gpio_out(gpio_out),
    .io_gpio_oe(gpio_oe),
    .io_flash_spi_clk(flash_spi_clk),
    .io_flash_spi_mosi(flash_spi_mosi),
    .io_flash_spi_miso(flash_spi_miso),
    .io_flash_spi_cs(flash_spi_cs),
    .io_psram_spi_clk(psram_spi_clk),
    .io_psram_spi_cs(psram_spi_cs),
    .io_psram_spi_mosi(psram_spi_mosi),
    .io_psram_spi_miso(psram_spi_miso),
    .io_psram_spi_sio2_out(psram_spi_sio2_out),
    .io_psram_spi_sio2_oe(psram_spi_sio2_oe),
    .io_psram_spi_sio2_in(psram_spi_sio2_in),
    .io_psram_spi_sio3_out(psram_spi_sio3_out),
    .io_psram_spi_sio3_oe(psram_spi_sio3_oe),
    .io_psram_spi_sio3_in(psram_spi_sio3_in)
  );

  // 时钟生成
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD/2) clk = ~clk;
  end

  // 测试序列
  initial begin
    rst_n = 1'b0;
    uart_rx = 1'b1;
    gpio_in = 8'h00;
    flash_spi_miso = 1'b0;
    psram_spi_miso = 1'b0;
    psram_spi_sio2_in = 1'b0;
    psram_spi_sio3_in = 1'b0;
    
    #100 rst_n = 1'b1;
    
    // UART测试
    #1000;
    repeat(8) begin
      uart_rx = 1'b0; #(CLK_PERIOD*10);
      uart_rx = 1'b1; #(CLK_PERIOD*10);
    end
    
    // GPIO测试
    #2000;
    gpio_in = 8'hAA;
    #1000;
    gpio_in = 8'h55;
    
    #10000 $finish;
  end

  // 波形转储
  initial begin
    $dumpfile("wave_simple_edge_ai.vcd");
    $dumpvars(0, simple_edge_ai_tb);
    $display("SimpleEdgeAiSoC testbench started");
  end

endmodule
