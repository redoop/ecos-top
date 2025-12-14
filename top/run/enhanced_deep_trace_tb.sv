`timescale 1ns / 1ps

module enhanced_deep_trace_tb ();
  localparam real OSC_CLK_25M_PEROID = 40;

  // 顶层信号
  wire ext_rst_n_i_pad;
  wire osc_clk_25m_i_pad;
  wire old_ip_spi_flash_clk_pad;
  wire [1:0] old_ip_spi_flash_cs_pad;
  wire old_ip_spi_flash_mosi_pad;
  wire old_ip_spi_flash_miso_pad;
  wire old_ip_uart_rx_pad;
  wire old_ip_uart_tx_pad;

  logic r_osc_clk_25m, r_ext_rst_n;
  logic [2:0] r_ip_sel;

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

  assign osc_clk_25m_i_pad = r_osc_clk_25m;
  assign ext_rst_n_i_pad = r_ext_rst_n;

  // 时钟分频器
  always_ff @(posedge r_osc_clk_25m or negedge r_ext_rst_n) begin
    if (!r_ext_rst_n) begin
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
  always_ff @(posedge r_osc_clk_25m or negedge r_ext_rst_n) begin
    if (!r_ext_rst_n) begin
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

  // 实例化增强版 asic_top
  asic_top u_asic_top (
      .ip_sel_pad0       (r_ip_sel[0]),
      .ip_sel_pad1       (r_ip_sel[1]),
      .ip_sel_pad2       (r_ip_sel[2]),
      .sys_clk_i_pad     (osc_clk_25m_i_pad),
      .sys_clk_o_pad     (),
      .rst_n_pad         (ext_rst_n_i_pad),
      .io_pad0           (old_ip_uart_rx_pad),
      .io_pad1           (old_ip_uart_tx_pad),
      .io_pad2           (old_ip_spi_flash_clk_pad),
      .io_pad3           (old_ip_spi_flash_cs_pad[0]),
      .io_pad4           (old_ip_spi_flash_cs_pad[1]),
      .io_pad5           (),
      .io_pad6           (),
      .io_pad7           (),
      .io_pad8           (),
      .io_pad9           (),
      .io_pad10          (),
      .io_pad11          (old_ip_spi_flash_mosi_pad),
      .io_pad12          (old_ip_spi_flash_miso_pad),
      .io_pad13          (1'b0),
      .io_pad14          (1'b0),
      .io_pad15          (1'b0),
      .io_pad16          (),
      .io_pad17          (),
      .io_pad18          (),
      .io_pad19          (),
      .io_pad20          (),
      .io_pad21          (),
      .io_pad22          (),
      .io_pad23          (),
      .io_pad24          (),
      .io_pad25          (),
      .io_pad26          (),
      .io_pad27          (),
      .io_pad28          (),
      .io_pad29          (),
      .io_pad30          (),
      .io_pad31          (),
      .io_pad32          (),
      .io_pad33          (),
      .io_pad34          (),
      .io_pad35          (),
      .io_pad36          (),
      .io_pad37          (),
      .io_pad38          (),
      .io_pad39          (),
      .io_pad40          (),
      .io_pad41          (),
      .io_pad42          (),
      .io_pad43          (),
      .io_pad44          (),
      .io_pad45          (),
      .io_pad46          (),
      .io_pad47          (),
      .io_pad48          (),
      .io_pad49          (),
      .io_pad50          (),
      .io_pad51          (),
      .io_pad52          (),
      .io_pad53          (),
      .io_pad54          (),
      .io_pad55          (),
      .io_pad56          (),
      .io_pad57          (),
      .io_pad58          (),
      .io_pad59          (),
      .io_pad60          (),
      .io_pad61          (),
      .io_pad62          (),
      .io_pad63          (),
      .io_pad64          (),
      .io_pad65          (),
      .io_pad66          (),
      .io_pad67          (),
      .io_pad68          (),
      .io_pad69          (),
      .io_pad70          (),
      .io_pad71          (),
      .io_pad72          (),
      .io_pad73          (),
      .io_pad74          (),
      .io_pad75          (),
      .io_pad76          (),
      .io_pad77          (),
      .io_pad78          (),
      .io_pad79          (),
      .io_pad80          (),
      .io_pad81          ()
  );

  task sim_reset(int delay);
    r_ext_rst_n = 1'b0;
    repeat (delay) @(posedge osc_clk_25m_i_pad);
    #1 r_ext_rst_n = 1'b1;
  endtask

  initial begin
    r_osc_clk_25m = 1'b0;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) r_osc_clk_25m <= ~r_osc_clk_25m;
    end
  end
    
  initial begin
    r_ip_sel = 3'd1; // 选择 SimpleEdgeAiSoC
    sim_reset(10);
    #500000 $finish;
  end

  initial begin
    $dumpfile("wave_deep_trace.vcd");
    $dumpvars(0, enhanced_deep_trace_tb);
    $display("Deep trace testbench started at time %0t", $time);
  end

endmodule
