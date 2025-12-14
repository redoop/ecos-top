`timescale 1ns / 1ps

module simple_enhanced_tb ();
  localparam real OSC_CLK_25M_PEROID = 40;

  // 顶层信号
  logic clk, rst_n;
  logic [2:0] ip_sel;
  
  // 测试信号
  logic [31:0] test_counter;
  logic [7:0] state_machine;
  logic [15:0] data_bus;
  logic enable_signal;
  logic ready_signal;
  logic valid_signal;
  logic [3:0] control_flags;
  logic [7:0] status_reg;
  logic clock_div2, clock_div4, clock_div8;

  // 添加 verilator public 标记的内部信号
  /* verilator public */ wire sys_clk_internal;
  /* verilator public */ wire rst_n_internal;
  /* verilator public */ wire [2:0] ip_sel_internal;
  /* verilator public */ wire clk_100m_internal, clk_50m_internal, clk_25m_internal;
  
  // SimpleEdgeAiSoC 相关信号
  /* verilator public */ wire uart_tx, uart_rx;
  /* verilator public */ wire [15:0] gpio_out, gpio_in;
  /* verilator public */ wire trap_signal, compact_irq, bitnet_irq;
  /* verilator public */ wire uart_tx_irq, uart_rx_irq;

  assign sys_clk_internal = clk;
  assign rst_n_internal = rst_n;
  assign ip_sel_internal = ip_sel;
  assign clk_100m_internal = clk;
  assign clk_50m_internal = clock_div2;
  assign clk_25m_internal = clock_div4;

  // 时钟分频器
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      clock_div2 <= 1'b0;
      clock_div4 <= 1'b0;
      clock_div8 <= 1'b0;
    end else begin
      clock_div2 <= ~clock_div2;
      if (clock_div2) clock_div4 <= ~clock_div4;
      if (clock_div2 && clock_div4) clock_div8 <= ~clock_div8;
    end
  end

  // 测试计数器和状态机
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      test_counter <= 32'h0;
      state_machine <= 8'h0;
      data_bus <= 16'h0;
      enable_signal <= 1'b0;
      ready_signal <= 1'b0;
      valid_signal <= 1'b0;
      control_flags <= 4'h0;
      status_reg <= 8'h0;
    end else begin
      test_counter <= test_counter + 1;
      
      case (state_machine)
        8'h00: begin
          if (test_counter[7:0] == 8'hFF) begin
            state_machine <= 8'h01;
            enable_signal <= 1'b1;
          end
        end
        8'h01: begin
          data_bus <= data_bus + 1;
          ready_signal <= test_counter[0];
          valid_signal <= test_counter[1];
          if (test_counter[15:0] == 16'hFFFF) begin
            state_machine <= 8'h02;
          end
        end
        8'h02: begin
          control_flags <= control_flags + 1;
          status_reg <= {status_reg[6:0], test_counter[0]};
          if (control_flags == 4'hF) begin
            state_machine <= 8'h00;
          end
        end
        default: state_machine <= 8'h00;
      endcase
    end
  end

  // 实例化 SimpleEdgeAiSoC
  /* verilator public */ ip1_SimpleEdgeAiSoC u_SimpleEdgeAiSoC (
    .clock              (clk_100m_internal),   
    .reset              (~rst_n_internal),
    .io_uart_tx         (uart_tx),
    .io_uart_rx         (uart_rx),
    .io_lcd_spi_clk     (),    
    .io_lcd_spi_mosi    (),       
    .io_lcd_spi_cs      (),   
    .io_lcd_spi_dc      (),   
    .io_lcd_spi_rst     (),   
    .io_lcd_backlight   (),       
    .io_gpio_out        (gpio_out),    
    .io_gpio_in         (gpio_in),
    .io_trap            (trap_signal),
    .io_compact_irq     (compact_irq),    
    .io_bitnet_irq      (bitnet_irq),    
    .io_uart_tx_irq     (uart_tx_irq),    
    .io_uart_rx_irq     (uart_rx_irq),
    .io_flash_spi_clk   (),
    .io_flash_spi_mosi  (),
    .io_flash_spi_miso  (1'b0),
    .io_flash_spi_cs    (),
    .io_psram_spi_clk   (),
    .io_psram_spi_cs    (),
    .io_psram_spi_mosi  (),
    .io_psram_spi_miso  (1'b0),
    .io_psram_spi_sio2_out(),
    .io_psram_spi_sio2_oe(),
    .io_psram_spi_sio2_in(1'b0),
    .io_psram_spi_sio3_out(),
    .io_psram_spi_sio3_oe(),
    .io_psram_spi_sio3_in(1'b0)
  );

  // 连接信号
  assign uart_rx = 1'b1; // 默认高电平
  assign gpio_in = data_bus; // 连接测试数据

  // 时钟生成
  initial begin
    clk = 1'b0;
    forever #(OSC_CLK_25M_PEROID / 2) clk = ~clk;
  end
    
  // 测试序列
  initial begin
    ip_sel = 3'd1; // 选择 SimpleEdgeAiSoC
    rst_n = 1'b0;
    #100 rst_n = 1'b1;
    #500000 $finish;
  end

  // 波形转储 - 使用深度跟踪
  initial begin
    $dumpfile("wave_deep_trace.vcd");
    $dumpvars(0, simple_enhanced_tb);
    $display("Deep trace testbench started at time %0t", $time);
  end

endmodule
