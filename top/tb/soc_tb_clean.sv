module soc_tb();
  localparam real OSC_CLK_25M_PEROID = 40;

  wire ext_rst_n_i_pad;
  wire osc_clk_25m_i_pad;
  wire old_ip_uart_rx_pad;
  wire old_ip_uart_tx_pad;

  logic r_osc_clk_25m, r_ext_rst_n;
  logic [2:0] r_ip_sel;
  reg uart_rx_drive;

  assign osc_clk_25m_i_pad = r_osc_clk_25m;
  assign ext_rst_n_i_pad = r_ext_rst_n;
  assign old_ip_uart_rx_pad = uart_rx_drive;

  asic_top u_asic_top (
      .sys_clk_i_pad     (osc_clk_25m_i_pad),
      .sys_clk_o_pad     (),
      .rst_n_pad         (ext_rst_n_i_pad),
      .io_pad0           (old_ip_uart_rx_pad),
      .io_pad1           (old_ip_uart_tx_pad),
      .io_pad2           (),
      .io_pad3           (),
      .io_pad4           (),
      .io_pad5           (),
      .io_pad6           (),
      .io_pad7           (),
      .io_pad8           (),
      .io_pad9           (),
      .io_pad10          (),
      .io_pad11          (),
      .io_pad12          (),
      .io_pad13          (),
      .io_pad14          (),
      .io_pad15          (),
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
      .io_pad81          (),
      .ip_sel_pad0       (1'b1),
      .ip_sel_pad1       (1'b0),
      .ip_sel_pad2       (1'b0)
  );

  wire [31:0] gpio_output = u_asic_top.io_pad_o[63:32];

  // IP1 bootloader预加载
  initial begin
    #100;
    // 预加载bootloader到IP1内存
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[0] = 32'h20000537; // lui a0, 0x20000
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[1] = 32'h00100593; // addi a1, zero, 1
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[2] = 32'h00b52423; // sw a1, 8(a0)
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[3] = 32'h20020637; // lui a2, 0x20020
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[4] = 32'h01300693; // addi a3, zero, 19
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[5] = 32'h00d62023; // sw a3, 0(a2)
    force u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[6] = 32'h0000006f; // j 0x18
    #1;
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[0];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[1];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[2];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[3];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[4];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[5];
    release u_asic_top.u_SimpleEdgeAiSoC.memAdapter.Memory[6];
    $display("[%0t] IP1 bootloader已预加载", $time);
  end

  task sim_reset(int delay);
    $display("[%0t] 开始复位", $time);
    r_ext_rst_n = 1'b0;
    #(delay * OSC_CLK_25M_PEROID);
    r_ext_rst_n = 1'b1;
    $display("[%0t] 复位释放", $time);
  endtask

  // 时钟生成
  initial begin
    r_osc_clk_25m = 1'b0;
    uart_rx_drive = 1'b1;
    forever begin
      #(OSC_CLK_25M_PEROID / 2) r_osc_clk_25m <= ~r_osc_clk_25m;
    end
  end

  // 主测试流程
  initial begin
    $display("[%0t] 仿真开始", $time);
    sim_reset(400);
    #50000; // 等待复位同步
    $display("[%0t] 开始bootloader测试", $time);
    #100000; // 等待bootloader执行
    $display("[%0t] Bootloader执行后GPIO: 0x%02x", $time, gpio_output[7:0]);
    $finish;
  end

  // IP选择
  initial begin
    r_ip_sel = 3'd1; // 选择IP1
  end

endmodule
