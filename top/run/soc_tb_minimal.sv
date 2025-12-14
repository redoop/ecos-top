`timescale 1ns / 1ps

module soc_tb ();
  localparam real OSC_CLK_25M_PEROID = 40;

  logic r_osc_clk_25m, r_ext_rst_n;
  logic [2:0] r_ip_sel;
  
  // Internal signals for monitoring
  logic sys_clk, rst_n;
  logic [2:0] ip_sel;
  logic [81:0] io_pad_i, io_pad_o, io_pad_oe;

  assign sys_clk = r_osc_clk_25m;
  assign rst_n = r_ext_rst_n;
  assign ip_sel = r_ip_sel;

  // Simple RCU instance for clock generation
  rcu u_rcu (
    .sys_clk_i     (sys_clk),
    .arst_n_i      (rst_n),
    .clk_100m_o    (),
    .clk_50m_o     (),
    .clk_25m_o     (),
    .rst_100m_n_o  (),
    .rst_50m_n_o   (),
    .rst_25m_n_o   ()
  );

  task sim_reset(int delay);
    r_ext_rst_n = 1'b0;
    repeat (delay) @(posedge r_osc_clk_25m);
    #1 r_ext_rst_n = 1'b1;
  endtask

  initial begin
    r_osc_clk_25m = 1'b0;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) r_osc_clk_25m <= ~r_osc_clk_25m;
    end
  end
    
  initial begin
    r_ip_sel = 3'd0;
    sim_reset(10);
    
    // Test different IP selections
    #1000;
    r_ip_sel = 3'd1;
    #1000;
    r_ip_sel = 3'd2;
    #1000;
    r_ip_sel = 3'd0;
    
    #10000 $finish;
  end

  initial begin
    $dumpfile("wave.vcd");
    $dumpvars(0, soc_tb);
    $display("Minimal SoC testbench started at time %0t", $time);
  end

endmodule
