`timescale 1ns / 1ps

module asic_top_deep_trace (
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
    inout   io_pad12
);

// 内部信号 - 添加 verilator public 用于深度跟踪
wire sys_clk /* verilator public */;
wire rst_n /* verilator public */;
wire [2:0] ip_sel /* verilator public */;
wire clk_100m /* verilator public */, clk_50m /* verilator public */, clk_25m /* verilator public */;
wire rst_100m_n /* verilator public */, rst_50m_n /* verilator public */, rst_25m_n /* verilator public */;

// IP选择信号
assign ip_sel = {ip_sel_pad2, ip_sel_pad1, ip_sel_pad0};
assign sys_clk = sys_clk_i_pad;
assign rst_n = rst_n_pad;

// 简化的时钟生成 (替代RCU)
reg clk_div2, clk_div4;
always_ff @(posedge sys_clk or negedge rst_n) begin
    if (!rst_n) begin
        clk_div2 <= 1'b0;
        clk_div4 <= 1'b0;
    end else begin
        clk_div2 <= ~clk_div2;
        if (clk_div2) clk_div4 <= ~clk_div4;
    end
end

assign clk_100m = sys_clk;
assign clk_50m = clk_div2;  
assign clk_25m = clk_div4;

// 简化的复位同步
reg [2:0] rst_sync_100m, rst_sync_50m, rst_sync_25m;
always_ff @(posedge clk_100m or negedge rst_n) begin
    if (!rst_n) rst_sync_100m <= 3'b000;
    else rst_sync_100m <= {rst_sync_100m[1:0], 1'b1};
end
always_ff @(posedge clk_50m or negedge rst_n) begin
    if (!rst_n) rst_sync_50m <= 3'b000;
    else rst_sync_50m <= {rst_sync_50m[1:0], 1'b1};
end
always_ff @(posedge clk_25m or negedge rst_n) begin
    if (!rst_n) rst_sync_25m <= 3'b000;
    else rst_sync_25m <= {rst_sync_25m[1:0], 1'b1};
end

assign rst_100m_n = rst_sync_100m[2];
assign rst_50m_n = rst_sync_50m[2];
assign rst_25m_n = rst_sync_25m[2];

// SimpleEdgeAiSoC 相关信号
wire ip1_clk_100m /* verilator public */;
wire ip1_io_uart_tx /* verilator public */, ip1_io_uart_rx /* verilator public */;
wire [15:0] ip1_io_gpio_out /* verilator public */, ip1_io_gpio_in /* verilator public */;
wire ip1_io_trap /* verilator public */, ip1_io_compact_irq /* verilator public */, ip1_io_bitnet_irq /* verilator public */;
wire ip1_io_uart_tx_irq /* verilator public */, ip1_io_uart_rx_irq /* verilator public */;

assign ip1_clk_100m = clk_100m;

// SimpleEdgeAiSoC 实例 - 只在选择时激活
ip1_SimpleEdgeAiSoC u_SimpleEdgeAiSoC (
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
) /* verilator public */;

// IO连接逻辑
wire [15:0] io_pad_i /* verilator public */, io_pad_o /* verilator public */;
wire [15:0] io_pad_oe /* verilator public */;

// 根据ip_sel选择连接
assign io_pad_o[0] = (ip_sel == 3'd1) ? ip1_io_uart_tx : 1'b0;
assign io_pad_o[1] = (ip_sel == 3'd1) ? ip1_io_gpio_out[0] : 1'b0;
assign io_pad_oe[0] = (ip_sel == 3'd1) ? 1'b1 : 1'b0;
assign io_pad_oe[1] = (ip_sel == 3'd1) ? 1'b1 : 1'b0;

assign ip1_io_uart_rx = (ip_sel == 3'd1) ? io_pad_i[0] : 1'b1;
assign ip1_io_gpio_in = (ip_sel == 3'd1) ? io_pad_i[15:0] : 16'h0000;

// 简化的pad连接
assign io_pad_i[0] = io_pad0;
assign io_pad_i[1] = io_pad1;
assign io_pad_i[2] = io_pad2;
assign io_pad_i[3] = io_pad3;
assign io_pad_i[4] = io_pad4;
assign io_pad_i[5] = io_pad5;
assign io_pad_i[6] = io_pad6;
assign io_pad_i[7] = io_pad7;
assign io_pad_i[8] = io_pad8;
assign io_pad_i[9] = io_pad9;
assign io_pad_i[10] = io_pad10;
assign io_pad_i[11] = io_pad11;
assign io_pad_i[12] = io_pad12;

endmodule
