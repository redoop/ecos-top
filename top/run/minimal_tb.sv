`timescale 1ns / 1ps

module minimal_tb ();
  localparam real OSC_CLK_25M_PEROID = 40;

  logic clk;
  logic rst_n;
  logic [7:0] counter;
  logic [3:0] state;
  logic enable;
  logic [15:0] data_bus;
  logic valid;
  logic ready;

  // 时钟生成
  initial begin
    clk = 1'b0;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) clk <= ~clk;
    end
  end
    
  // 复位和测试逻辑
  initial begin
    rst_n = 1'b0;
    enable = 1'b0;
    counter = 8'h00;
    state = 4'h0;
    data_bus = 16'h0000;
    valid = 1'b0;
    ready = 1'b0;
    
    #200 rst_n = 1'b1;
    #100 enable = 1'b1;
    
    // 生成一些测试活动
    repeat(50) begin
      @(posedge clk);
      counter <= counter + 1;
      if (counter[2:0] == 3'b111) begin
        state <= state + 1;
        data_bus <= {data_bus[14:0], counter[0]};
        valid <= ~valid;
        ready <= counter[1];
      end
    end
    
    #1000 $finish;
  end

  // 波形转储
  initial begin
    $dumpfile("wave_minimal.vcd");
    $dumpvars(0, minimal_tb);
    $display("Minimal testbench started at time %0t", $time);
  end

endmodule
