`define ip_0 3'd0 // project_2057
`define ip_1 3'd1 // project_2017
`define ip_2 3'd2 // project_2021
`define ip_3 3'd3 // ysyxSoCASIC
//`define ip_4 3'd4 // project_2099
`define ip_5 3'd5 // project_2005

module asic_top (
    input   ip_sel_pad0,
    input   ip_sel_pad1,
    input   ip_sel_pad2,
    input   sys_clk_i_pad,
    output  sys_clk_o_pad,
    input   rst_n_pad,
    inout   io_pad0,
    inout   io_pad1,
    inout   io_pad2,
    inout   io_pad3,
    inout   io_pad4,
    inout   io_pad5,
    inout   io_pad6,
    inout   io_pad7,
    inout   io_pad8,
    inout   io_pad9,
    inout   io_pad10,
    inout   io_pad11,
    inout   io_pad12,
    inout   io_pad13,
    inout   io_pad14,
    inout   io_pad15,
    inout   io_pad16,
    inout   io_pad17,
    inout   io_pad18,
    inout   io_pad19,
    inout   io_pad20,
    inout   io_pad21,
    inout   io_pad22,
    inout   io_pad23,
    inout   io_pad24,
    inout   io_pad25,
    inout   io_pad26,
    inout   io_pad27,
    inout   io_pad28,
    inout   io_pad29,
    inout   io_pad30,
    inout   io_pad31,
    inout   io_pad32,
    inout   io_pad33,
    inout   io_pad34,
    inout   io_pad35,
    inout   io_pad36,
    inout   io_pad37,
    inout   io_pad38,
    inout   io_pad39,
    inout   io_pad40,
    inout   io_pad41,
    inout   io_pad42,
    inout   io_pad43,
    inout   io_pad44,
    inout   io_pad45,
    inout   io_pad46,
    inout   io_pad47,
    inout   io_pad48,
    inout   io_pad49,
    inout   io_pad50,
    inout   io_pad51,
    inout   io_pad52,
    inout   io_pad53,
    inout   io_pad54,
    inout   io_pad55,
    inout   io_pad56,
    inout   io_pad57,
    inout   io_pad58,
    inout   io_pad59,
    inout   io_pad60,
    inout   io_pad61,
    inout   io_pad62,
    inout   io_pad63,
    inout   io_pad64,
    inout   io_pad65,
    inout   io_pad66,
    inout   io_pad67,
    inout   io_pad68,
    inout   io_pad69,
    inout   io_pad70,
    inout   io_pad71,
    inout   io_pad72,
    inout   io_pad73,
    inout   io_pad74,
    inout   io_pad75,
    inout   io_pad76,
    inout   io_pad77,
    inout   io_pad78,
    inout   io_pad79,
    inout   io_pad80,
    inout   io_pad81
);

// 添加 verilator public 标记用于信号跟踪
/* verilator public */ wire sys_clk;
/* verilator public */ wire rst_n;
/* verilator public */ wire [2:0] ip_sel;
/* verilator public */ wire clk_100m, clk_50m, clk_25m;

// IP选择信号
assign ip_sel = {ip_sel_pad2, ip_sel_pad1, ip_sel_pad0};

// 时钟和复位处理
assign sys_clk = sys_clk_i_pad;
assign rst_n = rst_n_pad;

// RCU实例 - 生成各种时钟
/* verilator public */ rcu u_rcu (
    .sys_clk_i    (sys_clk),
    .sys_rst_n_i  (rst_n),
    .clk_100m_o   (clk_100m),
    .clk_50m_o    (clk_50m),
    .clk_25m_o    (clk_25m),
    .rst_100m_n_o (rst_100m_n),
    .rst_50m_n_o  (rst_50m_n),
    .rst_25m_n_o  (rst_25m_n)
);

// IP1: SimpleEdgeAiSoC 相关信号
/* verilator public */ wire ip1_clk_100m;
/* verilator public */ wire rst_100m_n, rst_50m_n, rst_25m_n;
/* verilator public */ wire ip1_io_uart_tx, ip1_io_uart_rx;
/* verilator public */ wire [15:0] ip1_io_gpio_out, ip1_io_gpio_in;
/* verilator public */ wire ip1_io_trap, ip1_io_compact_irq, ip1_io_bitnet_irq;
/* verilator public */ wire ip1_io_uart_tx_irq, ip1_io_uart_rx_irq;

// 时钟缓冲器
assign ip1_clk_100m = clk_100m;

// SimpleEdgeAiSoC 实例
/* verilator public */ ip1_SimpleEdgeAiSoC u_SimpleEdgeAiSoC (
    .clock              (ip1_clk_100m),   
    .reset              (~rst_100m_n),
    .io_uart_tx         (ip1_io_uart_tx),
    .io_uart_rx         (ip1_io_uart_rx),
    .io_lcd_spi_clk     (),    
    .io_lcd_spi_mosi    (),       
    .io_lcd_spi_cs      (),   
    .io_lcd_spi_dc      (),   
    .io_lcd_spi_rst     (),   
    .io_lcd_backlight   (),       
    .io_gpio_out        (ip1_io_gpio_out),    
    .io_gpio_in         (ip1_io_gpio_in),
    .io_trap            (ip1_io_trap),
    .io_compact_irq     (ip1_io_compact_irq),    
    .io_bitnet_irq      (ip1_io_bitnet_irq),    
    .io_uart_tx_irq     (ip1_io_uart_tx_irq),    
    .io_uart_rx_irq     (ip1_io_uart_rx_irq),
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

// IO连接 - 根据ip_sel选择
/* verilator public */ wire [81:0] io_pad_i, io_pad_o, io_pad_oe;

// 简化的IO连接逻辑
assign io_pad_o[0] = (ip_sel == `ip_1) ? ip1_io_uart_tx : 1'b0;
assign ip1_io_uart_rx = (ip_sel == `ip_1) ? io_pad_i[0] : 1'b1;

assign ip1_io_gpio_in = (ip_sel == `ip_1) ? io_pad_i[15:0] : 16'h0000;

// 简化的pad连接
assign io_pad_i[0] = io_pad0;
assign io_pad_i[1] = io_pad1;
// ... 其他pad连接可以根据需要添加

endmodule
