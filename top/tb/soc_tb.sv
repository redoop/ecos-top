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
  wire uart_tx_out = u_asic_top.io_pad_o[59]; // UART TX输出
  
  // 监控UART TX输出
  always @(uart_tx_out) begin
    if ($time > 100000000) // 忽略初始化阶段
      $display("[%0t] UART TX变化: %b", $time, uart_tx_out);
  end

  task uart_send_byte(input [7:0] data);
    integer i;
    begin
      uart_rx_drive = 0; #217; // start bit
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx_drive = data[i]; #217; // data bits
      end
      uart_rx_drive = 1; #217; // stop bit
    end
  endtask

  task uart_receive_byte(output [7:0] data);
    integer i;
    begin
      // 等待起始位
      wait(uart_tx_out == 0);
      #108; // 半个波特周期，采样在中间
      #217; // 跳过起始位
      // 接收8个数据位
      for (i = 0; i < 8; i = i + 1) begin
        data[i] = uart_tx_out;
        #217;
      end
      // 停止位
      #217;
    end
  endtask

  task send_simple_program();
    $display("[%0t] 发送简单GPIO测试程序", $time);
    
    // 发送4条简单指令
    // lui a5, 0x20020 (GPIO_BASE)
    uart_send_byte(8'hB7); uart_send_byte(8'h07); uart_send_byte(8'h02); uart_send_byte(8'h20);
    // li a4, 19
    uart_send_byte(8'h13); uart_send_byte(8'h07); uart_send_byte(8'h30); uart_send_byte(8'h01);
    // sw a4, 0(a5)
    uart_send_byte(8'h23); uart_send_byte(8'hA0); uart_send_byte(8'hE7); uart_send_byte(8'h00);
    // j loop
    uart_send_byte(8'h6F); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00);
    
    $display("[%0t] 简单程序发送完成", $time);
  endtask

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

  task send_complete_bitnet_program();
    $display("[%0t] 开始发送完整bitnet程序", $time);
    
    // 发送完整的bitnet矩阵计算程序
    uart_send_byte(8'hB7); uart_send_byte(8'h17); uart_send_byte(8'h00); uart_send_byte(8'h10); // lui a5, 0x10001
    uart_send_byte(8'h13); uart_send_byte(8'h07); uart_send_byte(8'h10); uart_send_byte(8'h00); // li a4, 1
    uart_send_byte(8'h23); uart_send_byte(8'hA0); uart_send_byte(8'hE7); uart_send_byte(8'h00); // sw a4, 0(a5)
    uart_send_byte(8'h13); uart_send_byte(8'h07); uart_send_byte(8'h30); uart_send_byte(8'h01); // li a4, 19
    uart_send_byte(8'hB7); uart_send_byte(8'h07); uart_send_byte(8'h02); uart_send_byte(8'h20); // lui a5, 0x20020
    uart_send_byte(8'h23); uart_send_byte(8'hA0); uart_send_byte(8'hE7); uart_send_byte(8'h00); // sw a4, 0(a5)
    uart_send_byte(8'h6F); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00); // j loop
    
    $display("[%0t] Bitnet程序发送完成", $time);
  endtask

  task send_uart_compact_matrix_program();
    $display("[%0t] 发送UART Compact矩阵计算程序", $time);
    // UART Compact矩阵计算程序机器码 (从uart_compact_matrix.bin)
    uart_send_byte(8'h13); uart_send_byte(8'h01); uart_send_byte(8'h01); uart_send_byte(8'hfd);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h81); uart_send_byte(8'h02);
    uart_send_byte(8'h13); uart_send_byte(8'h04); uart_send_byte(8'h01); uart_send_byte(8'h03);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h23); uart_send_byte(8'h22); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h20); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h07); uart_send_byte(8'h00); uart_send_byte(8'h10);
    uart_send_byte(8'h23); uart_send_byte(8'h2e); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h23); uart_send_byte(8'h2a); uart_send_byte(8'h04); uart_send_byte(8'hfc);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h8a); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h44); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h06); uart_send_byte(8'h04); uart_send_byte(8'hff);
    uart_send_byte(8'hb3); uart_send_byte(8'h87); uart_send_byte(8'hf6); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h82); uart_send_byte(8'he7); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h17); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'h03); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h07); uart_send_byte(8'h40); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h10); uart_send_byte(8'hf7); uart_send_byte(8'hfc);
    uart_send_byte(8'h83); uart_send_byte(8'h47); uart_send_byte(8'h74); uart_send_byte(8'hfd);
    uart_send_byte(8'h13); uart_send_byte(8'h97); uart_send_byte(8'h87); uart_send_byte(8'h01);
    uart_send_byte(8'h83); uart_send_byte(8'h47); uart_send_byte(8'h64); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'h97); uart_send_byte(8'h07); uart_send_byte(8'h01);
    uart_send_byte(8'h33); uart_send_byte(8'h67); uart_send_byte(8'hf7); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h47); uart_send_byte(8'h54); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'h97); uart_send_byte(8'h87); uart_send_byte(8'h00);
    uart_send_byte(8'hb3); uart_send_byte(8'h67); uart_send_byte(8'hf7); uart_send_byte(8'h00);
    uart_send_byte(8'h03); uart_send_byte(8'h47); uart_send_byte(8'h44); uart_send_byte(8'hfd);
    uart_send_byte(8'hb3); uart_send_byte(8'he7); uart_send_byte(8'he7); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'h87); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfd);
    uart_send_byte(8'h23); uart_send_byte(8'ha0); uart_send_byte(8'he7); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'h07); uart_send_byte(8'h10); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'ha0); uart_send_byte(8'he7); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h87); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'h17); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h88); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfd);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'hc7); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h2c); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'h23); uart_send_byte(8'h08); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'hd7); uart_send_byte(8'h87); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'ha3); uart_send_byte(8'h08); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'hd7); uart_send_byte(8'h07); uart_send_byte(8'h01);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'h23); uart_send_byte(8'h09); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfd);
    uart_send_byte(8'h93); uart_send_byte(8'hd7); uart_send_byte(8'h87); uart_send_byte(8'h01);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'ha3); uart_send_byte(8'h09); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h23); uart_send_byte(8'h24); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h6f); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h04);
    uart_send_byte(8'h13); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'h27); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h8a); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfe);
    uart_send_byte(8'h13); uart_send_byte(8'h07); uart_send_byte(8'h04); uart_send_byte(8'hff);
    uart_send_byte(8'hb3); uart_send_byte(8'h07); uart_send_byte(8'hf7); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'hc7); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h13); uart_send_byte(8'h87); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h44); uart_send_byte(8'hfe);
    uart_send_byte(8'h23); uart_send_byte(8'ha0); uart_send_byte(8'he7); uart_send_byte(8'h00);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h17); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h24); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'h03); uart_send_byte(8'h27); uart_send_byte(8'h84); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h07); uart_send_byte(8'h30); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'hde); uart_send_byte(8'he7); uart_send_byte(8'hfa);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h6f); uart_send_byte(8'hf0); uart_send_byte(8'h5f); uart_send_byte(8'hec);
    $display("[%0t] UART Compact矩阵计算程序发送完成", $time);
  endtask

  task send_uart_matrix_program();
    $display("[%0t] 发送UART矩阵计算程序", $time);
    // UART矩阵计算程序机器码 (从uart_matrix_simple.bin)
    uart_send_byte(8'h13); uart_send_byte(8'h01); uart_send_byte(8'h01); uart_send_byte(8'hfd);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h81); uart_send_byte(8'h02);
    uart_send_byte(8'h13); uart_send_byte(8'h04); uart_send_byte(8'h01); uart_send_byte(8'h03);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h23); uart_send_byte(8'h22); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h20); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'h23); uart_send_byte(8'h2e); uart_send_byte(8'h04); uart_send_byte(8'hfc);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    // 主循环部分
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h04); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h8a); uart_send_byte(8'h07); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'h44); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'ha7); uart_send_byte(8'h07); uart_send_byte(8'h00);
    uart_send_byte(8'h13); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h06); uart_send_byte(8'h04); uart_send_byte(8'hff);
    uart_send_byte(8'hb3); uart_send_byte(8'h87); uart_send_byte(8'hf6); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h86); uart_send_byte(8'he7); uart_send_byte(8'hfe);
    uart_send_byte(8'h83); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h17); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    // 继续发送剩余代码...
    uart_send_byte(8'h03); uart_send_byte(8'h27); uart_send_byte(8'hc4); uart_send_byte(8'hfe);
    uart_send_byte(8'h93); uart_send_byte(8'h07); uart_send_byte(8'h40); uart_send_byte(8'h00);
    uart_send_byte(8'he3); uart_send_byte(8'h10); uart_send_byte(8'hf7); uart_send_byte(8'hfc);
    // 输出循环和计算部分
    uart_send_byte(8'h03); uart_send_byte(8'h47); uart_send_byte(8'hc4); uart_send_byte(8'hfd);
    uart_send_byte(8'h83); uart_send_byte(8'h47); uart_send_byte(8'hf4); uart_send_byte(8'hfd);
    uart_send_byte(8'hb3); uart_send_byte(8'h07); uart_send_byte(8'hf7); uart_send_byte(8'h00);
    uart_send_byte(8'h93); uart_send_byte(8'hf7); uart_send_byte(8'hf7); uart_send_byte(8'h0f);
    uart_send_byte(8'h23); uart_send_byte(8'h0c); uart_send_byte(8'hf4); uart_send_byte(8'hfc);
    uart_send_byte(8'h6f); uart_send_byte(8'hf0); uart_send_byte(8'h9f); uart_send_byte(8'hf9);
    $display("[%0t] UART矩阵计算程序发送完成", $time);
  endtask

  task test_matrix_calculation();
    $display("[%0t] 测试矩阵计算", $time);
    #2000000; // 等待程序启动
    
    $display("[%0t] 发送2x2矩阵: [1,2;3,4]", $time);
    uart_send_byte(8'h01); // matrix[0] = 1
    #200000;
    uart_send_byte(8'h02); // matrix[1] = 2  
    #200000;
    uart_send_byte(8'h03); // matrix[2] = 3
    #200000;
    uart_send_byte(8'h04); // matrix[3] = 4
    #2000000; // 等待计算和输出
    
    $display("[%0t] 矩阵计算测试完成", $time);
    $display("[%0t] 预期结果: [5,5,5,5] (对角线和)", $time);
  endtask

  // 主测试流程
  initial begin
    $dumpfile("uart_bitnet_matrix_test.vcd");
    $dumpvars(0, soc_tb);
    
    $display("[%0t] 仿真开始", $time);
    sim_reset(400);
    #50000; // 等待bootloader启动
    
    if ($test$plusargs("uart-matrix")) begin
      send_uart_matrix_program(); // 发送简单UART矩阵计算程序
      test_simple_matrix_calculation(); // 测试简单矩阵计算
    end else if ($test$plusargs("uart-compact")) begin
      send_uart_compact_matrix_program(); // 发送UART Compact矩阵计算程序
      test_simple_matrix_calculation(); // 测试Compact硬件加速矩阵计算
    end else begin
      send_uart_bitnet_matrix_program(); // 发送UART Bitnet矩阵计算程序
      test_bitnet_matrix_calculation(); // 测试Bitnet矩阵计算
    end
    
    #2000000;
    $finish;
  end

  // IP选择
  initial begin
    r_ip_sel = 3'd1; // 选择IP1
    $display("[%0t] ROM bootloader支持UART程序加载", $time);
  end

  task send_uart_bitnet_matrix_program();
    $display("[%0t] 发送UART Bitnet矩阵计算程序", $time);
    // uart_bitnet_matrix.bin 机器码 (前32字节)
    uart_send_byte(8'h13); uart_send_byte(8'h01); uart_send_byte(8'h01); uart_send_byte(8'hfd);
    uart_send_byte(8'h23); uart_send_byte(8'h26); uart_send_byte(8'h81); uart_send_byte(8'h02);
    uart_send_byte(8'h13); uart_send_byte(8'h04); uart_send_byte(8'h01); uart_send_byte(8'h03);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h23); uart_send_byte(8'h22); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    uart_send_byte(8'hb7); uart_send_byte(8'h37); uart_send_byte(8'h01); uart_send_byte(8'h10);
    uart_send_byte(8'h93); uart_send_byte(8'h87); uart_send_byte(8'h47); uart_send_byte(8'h00);
    uart_send_byte(8'h23); uart_send_byte(8'h20); uart_send_byte(8'hf4); uart_send_byte(8'hfe);
    $display("[%0t] UART Bitnet矩阵计算程序发送完成", $time);
  endtask

  task test_simple_matrix_calculation();
    reg [7:0] result[0:3];
    integer i;
    $display("[%0t] 测试简单矩阵计算", $time);
    #2000000; // 等待程序启动
    
    $display("[%0t] 发送2x2矩阵: [1,2;3,4] 进行软件计算", $time);
    uart_send_byte(8'h01); // matrix[0] = 1
    #200000;
    uart_send_byte(8'h02); // matrix[1] = 2  
    #200000;
    uart_send_byte(8'h03); // matrix[2] = 3
    #200000;
    uart_send_byte(8'h04); // matrix[3] = 4
    
    // 等待程序处理并发送结果
    #5000000;
    
    $display("[%0t] 简单矩阵计算测试完成", $time);
    $display("[%0t] 预期结果: [5,5,5,5]", $time);
  endtask

  task test_bitnet_matrix_calculation();
    $display("[%0t] 测试Bitnet矩阵计算", $time);
    #2000000; // 等待程序启动
    
    $display("[%0t] 发送2x2矩阵: [1,2;3,4] 到Bitnet加速器", $time);
    uart_send_byte(8'h01); // matrix[0] = 1
    #200000;
    uart_send_byte(8'h02); // matrix[1] = 2  
    #200000;
    uart_send_byte(8'h03); // matrix[2] = 3
    #200000;
    uart_send_byte(8'h04); // matrix[3] = 4
    #3000000; // 等待Bitnet加速器计算和输出
    
    $display("[%0t] Bitnet矩阵计算测试完成", $time);
    $display("[%0t] 使用Bitnet硬件加速器进行矩阵计算", $time);
  endtask

endmodule
