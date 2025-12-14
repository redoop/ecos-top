`timescale 1ns / 1ps

module asic_soc_combined_tb ();
  localparam real OSC_CLK_25M_PEROID = 40;

  // 顶层信号
  logic r_osc_clk_25m, r_ext_rst_n;
  logic [2:0] r_ip_sel;
  
  // 测试信号
  logic [31:0] test_counter /* verilator public */;
  logic [7:0] state_machine /* verilator public */;
  logic [15:0] data_bus /* verilator public */;
  logic enable_signal /* verilator public */;
  logic ready_signal /* verilator public */;
  logic valid_signal /* verilator public */;
  logic [3:0] control_flags /* verilator public */;
  logic [7:0] status_reg /* verilator public */;
  logic clock_div2 /* verilator public */, clock_div4 /* verilator public */, clock_div8 /* verilator public */;

  // IO pad信号
  wire io_pad0, io_pad1, io_pad2, io_pad3, io_pad4;
  wire io_pad5, io_pad6, io_pad7, io_pad8, io_pad9;
  wire io_pad10, io_pad11, io_pad12;

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

  // 实例化 asic_top_deep_trace
  asic_top_deep_trace u_asic_top (
      .ip_sel_pad0       (r_ip_sel[0]),
      .ip_sel_pad1       (r_ip_sel[1]),
      .ip_sel_pad2       (r_ip_sel[2]),
      .sys_clk_i_pad     (r_osc_clk_25m),
      .sys_clk_o_pad     (),
      .rst_n_pad         (r_ext_rst_n),
      .io_pad0           (io_pad0),
      .io_pad1           (io_pad1),
      .io_pad2           (io_pad2),
      .io_pad3           (io_pad3),
      .io_pad4           (io_pad4),
      .io_pad5           (io_pad5),
      .io_pad6           (io_pad6),
      .io_pad7           (io_pad7),
      .io_pad8           (io_pad8),
      .io_pad9           (io_pad9),
      .io_pad10          (io_pad10),
      .io_pad11          (io_pad11),
      .io_pad12          (io_pad12)
  ) /* verilator public */;

  // IO pad 驱动逻辑
  assign io_pad0 = 1'b1; // UART RX - 默认高电平
  assign io_pad1 = data_bus[0]; // 测试数据
  assign io_pad2 = data_bus[1];
  assign io_pad3 = data_bus[2];
  assign io_pad4 = data_bus[3];
  assign io_pad5 = enable_signal;
  assign io_pad6 = ready_signal;
  assign io_pad7 = valid_signal;
  assign io_pad8 = control_flags[0];
  assign io_pad9 = control_flags[1];
  assign io_pad10 = control_flags[2];
  assign io_pad11 = control_flags[3];
  assign io_pad12 = status_reg[0];

  task sim_reset(int delay);
    r_ext_rst_n = 1'b0;
    repeat (delay) @(posedge r_osc_clk_25m);
    #1 r_ext_rst_n = 1'b1;
  endtask

  // 时钟生成
  initial begin
    r_osc_clk_25m = 1'b0;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) r_osc_clk_25m <= ~r_osc_clk_25m;
    end
  end
    
  // 测试序列
  initial begin
    r_ip_sel = 3'd1; // 选择 SimpleEdgeAiSoC
    sim_reset(10);
    
    // 等待系统稳定
    repeat(100) @(posedge r_osc_clk_25m);
    
    // 模拟一些UART活动
    repeat(50) begin
      @(posedge r_osc_clk_25m);
    end
    
    #50000 $finish;
  end

  // 波形转储 - 深度跟踪
  initial begin
    $dumpfile("wave_asic_soc_combined.vcd");
    $dumpvars(0, asic_soc_combined_tb);
    $display("ASIC + SoC combined testbench started at time %0t", $time);
  end

endmodule
