`timescale 1ns / 1ps

module asic_soc_tb ();
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

  // IO pad信号
  logic [15:0] io_pad_i, io_pad_o, io_pad_oe;

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

  // 实例化 asic_top_simple
  asic_top_simple u_asic_top (
      .ip_sel            (ip_sel),
      .sys_clk           (clk),
      .rst_n             (rst_n),
      .io_pad_i          (io_pad_i),
      .io_pad_o          (io_pad_o),
      .io_pad_oe         (io_pad_oe)
  );

  // IO pad 驱动逻辑
  assign io_pad_i[0] = 1'b1; // UART RX - 默认高电平
  assign io_pad_i[15:1] = data_bus[14:0]; // 测试数据

  // 时钟生成
  initial begin
    clk = 1'b0;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) clk <= ~clk;
    end
  end
    
  // 测试序列
  initial begin
    ip_sel = 3'd1; // 选择 SimpleEdgeAiSoC
    rst_n = 1'b0;
    #100 rst_n = 1'b1;
    
    // 等待系统稳定
    repeat(100) @(posedge clk);
    
    // 模拟一些活动
    repeat(1000) begin
      @(posedge clk);
    end
    
    #50000 $finish;
  end

  // 波形转储 - 深度跟踪
  initial begin
    $dumpfile("wave_asic_soc_combined.vcd");
    $dumpvars(0, asic_soc_tb);
    $display("ASIC + SoC combined testbench started at time %0t", $time);
  end

endmodule
