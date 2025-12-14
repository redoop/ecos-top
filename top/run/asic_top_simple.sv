`timescale 1ns / 1ps

module asic_top_simple (
    input   [2:0] ip_sel,
    input   sys_clk,
    input   rst_n,
    input   [15:0] io_pad_i,
    output  [15:0] io_pad_o,
    output  [15:0] io_pad_oe
);

// 内部信号
wire clk_100m, clk_50m, clk_25m;
wire rst_100m_n, rst_50m_n, rst_25m_n;

// 简化的时钟生成
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
reg [2:0] rst_sync_100m;
always_ff @(posedge clk_100m or negedge rst_n) begin
    if (!rst_n) rst_sync_100m <= 3'b000;
    else rst_sync_100m <= {rst_sync_100m[1:0], 1'b1};
end

assign rst_100m_n = rst_sync_100m[2];

// SimpleEdgeAiSoC 相关信号
wire ip1_clk_100m;
wire ip1_io_uart_tx, ip1_io_uart_rx;
wire [15:0] ip1_io_gpio_out, ip1_io_gpio_in;
wire ip1_io_trap, ip1_io_compact_irq, ip1_io_bitnet_irq;
wire ip1_io_uart_tx_irq, ip1_io_uart_rx_irq;

assign ip1_clk_100m = clk_100m;

// SimpleEdgeAiSoC 实例
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
);

// IO连接逻辑
assign io_pad_o[0] = (ip_sel == 3'd1) ? ip1_io_uart_tx : 1'b0;
assign io_pad_o[15:1] = (ip_sel == 3'd1) ? ip1_io_gpio_out[14:0] : 15'h0000;
assign io_pad_oe = (ip_sel == 3'd1) ? 16'hFFFF : 16'h0000;

assign ip1_io_uart_rx = (ip_sel == 3'd1) ? io_pad_i[0] : 1'b1;
assign ip1_io_gpio_in = (ip_sel == 3'd1) ? io_pad_i : 16'h0000;

endmodule
