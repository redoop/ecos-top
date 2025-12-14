// iverilog compatible version of asic_top.sv with real SimpleEdgeAiSoC
// This version includes the actual SimpleEdgeAiSoC IP for proper waveform analysis

`include "config.svh"

module asic_top (
    // Clock and Reset
    input  logic        clk_pad,
    input  logic        rst_n_pad,
    
    // IO Pads
    input  logic [81:0] io_pad_i,
    output logic [81:0] io_pad_o,
    output logic [81:0] io_pad_oe,
    
    // Test signals
    output logic        test_mode_o
);

    // Internal signals
    logic clk_int;
    logic rst_n_int;
    logic rst_int;
    
    // IP selection signals - use separate signals to avoid multiple assignment
    logic [1:0] s_ysyx_core_sel_default;
    logic [1:0] s_ysyx_core_sel_pad;
    logic [1:0] s_ysyx_core_sel;
    
    logic s_ysyx_core_irq_default;
    logic s_ysyx_core_irq_pad;
    logic s_ysyx_core_irq;
    
    logic s_ysyx_uart0_rx_default;
    logic s_ysyx_uart0_rx_pad;
    logic s_ysyx_uart0_rx;
    
    logic s_ysyx_spi_miso_default;
    logic s_ysyx_spi_miso_pad;
    logic s_ysyx_spi_miso;
    
    // SimpleEdgeAiSoC signals
    logic soc_uart_tx;
    logic soc_uart_rx;
    logic soc_lcd_spi_clk;
    logic soc_lcd_spi_mosi;
    logic soc_lcd_spi_cs;
    logic soc_lcd_spi_dc;
    logic soc_lcd_spi_rst;
    logic soc_lcd_backlight;
    logic [15:0] soc_gpio_out;
    logic [15:0] soc_gpio_in;
    logic soc_trap;
    logic soc_compact_irq;
    logic soc_bitnet_irq;
    logic soc_uart_tx_irq;
    logic soc_uart_rx_irq;
    logic soc_flash_spi_clk;
    logic soc_flash_spi_mosi;
    logic soc_flash_spi_miso;
    logic soc_flash_spi_cs;
    logic soc_psram_spi_clk;
    logic soc_psram_spi_cs;
    logic soc_psram_spi_mosi;
    logic soc_psram_spi_miso;
    logic soc_psram_spi_sio2_out;
    logic soc_psram_spi_sio2_oe;
    logic soc_psram_spi_sio2_in;
    logic soc_psram_spi_sio3_out;
    logic soc_psram_spi_sio3_oe;
    logic soc_psram_spi_sio3_in;
    
    // Other IP signals
    logic s_ysyx_uart0_tx;
    logic s_ysyx_spi_sck;
    logic [7:0] s_ysyx_spi_ss;
    logic s_ysyx_spi_mosi;
    
    // Clock and reset processing
    assign clk_int = clk_pad;
    assign rst_n_int = rst_n_pad;
    assign rst_int = ~rst_n_int;
    
    // Default values
    assign s_ysyx_core_sel_default = 2'b00;
    assign s_ysyx_core_irq_default = 1'b0;
    assign s_ysyx_uart0_rx_default = 1'b0;
    assign s_ysyx_spi_miso_default = 1'b0;
    
    // Pad input values
    assign s_ysyx_uart0_rx_pad = io_pad_i[0];
    assign s_ysyx_spi_miso_pad = io_pad_i[12];
    assign s_ysyx_core_sel_pad = io_pad_i[14:13];
    assign s_ysyx_core_irq_pad = io_pad_i[15];
    
    // GPIO input mapping for SimpleEdgeAiSoC
    assign soc_gpio_in = io_pad_i[31:16];
    assign soc_uart_rx = io_pad_i[0];
    assign soc_flash_spi_miso = io_pad_i[12];
    assign soc_psram_spi_miso = io_pad_i[40];
    assign soc_psram_spi_sio2_in = io_pad_i[41];
    assign soc_psram_spi_sio3_in = io_pad_i[42];
    
    // IP selection logic - use mux instead of multiple assignment
`ifdef ip_1
    assign s_ysyx_uart0_rx = s_ysyx_uart0_rx_pad;
    assign s_ysyx_spi_miso = s_ysyx_spi_miso_pad;
    assign s_ysyx_core_sel = s_ysyx_core_sel_pad;
    assign s_ysyx_core_irq = s_ysyx_core_irq_pad;
`elsif ip_3
    assign s_ysyx_uart0_rx = s_ysyx_uart0_rx_pad;
    assign s_ysyx_spi_miso = s_ysyx_spi_miso_pad;
    assign s_ysyx_core_sel = s_ysyx_core_sel_pad;
    assign s_ysyx_core_irq = s_ysyx_core_irq_pad;
`else
    assign s_ysyx_uart0_rx = s_ysyx_uart0_rx_default;
    assign s_ysyx_spi_miso = s_ysyx_spi_miso_default;
    assign s_ysyx_core_sel = s_ysyx_core_sel_default;
    assign s_ysyx_core_irq = s_ysyx_core_irq_default;
`endif

    // IO pad output assignments
    always_comb begin
        // Initialize all outputs
        io_pad_o = '0;
        io_pad_oe = '0;
        
        // Configure outputs based on IP selection
`ifdef ip_1
        // SimpleEdgeAiSoC outputs
        io_pad_o[1] = soc_uart_tx;
        io_pad_o[2] = soc_lcd_spi_clk;
        io_pad_o[3] = soc_lcd_spi_mosi;
        io_pad_o[4] = soc_lcd_spi_cs;
        io_pad_o[5] = soc_lcd_spi_dc;
        io_pad_o[6] = soc_lcd_spi_rst;
        io_pad_o[7] = soc_lcd_backlight;
        io_pad_o[31:16] = soc_gpio_out;
        io_pad_o[35] = soc_flash_spi_clk;
        io_pad_o[36] = soc_flash_spi_mosi;
        io_pad_o[37] = soc_flash_spi_cs;
        io_pad_o[38] = soc_psram_spi_clk;
        io_pad_o[39] = soc_psram_spi_cs;
        io_pad_o[40] = soc_psram_spi_mosi;
        io_pad_o[43] = soc_psram_spi_sio2_out;
        io_pad_o[45] = soc_psram_spi_sio3_out;
        
        // Output enables
        io_pad_oe[1] = 1'b1;   // uart tx
        io_pad_oe[2] = 1'b1;   // lcd spi clk
        io_pad_oe[3] = 1'b1;   // lcd spi mosi
        io_pad_oe[4] = 1'b1;   // lcd spi cs
        io_pad_oe[5] = 1'b1;   // lcd spi dc
        io_pad_oe[6] = 1'b1;   // lcd spi rst
        io_pad_oe[7] = 1'b1;   // lcd backlight
        io_pad_oe[31:16] = 16'hFFFF; // gpio outputs
        io_pad_oe[35] = 1'b1;  // flash spi clk
        io_pad_oe[36] = 1'b1;  // flash spi mosi
        io_pad_oe[37] = 1'b1;  // flash spi cs
        io_pad_oe[38] = 1'b1;  // psram spi clk
        io_pad_oe[39] = 1'b1;  // psram spi cs
        io_pad_oe[40] = 1'b1;  // psram spi mosi
        io_pad_oe[43] = soc_psram_spi_sio2_oe; // psram sio2
        io_pad_oe[45] = soc_psram_spi_sio3_oe; // psram sio3
        
        // Inputs
        io_pad_oe[0] = 1'b0;   // uart rx input
        io_pad_oe[12] = 1'b0;  // flash spi miso input
        io_pad_oe[14:13] = 2'b0; // core_sel input
        io_pad_oe[15] = 1'b0;  // core_irq input
        io_pad_oe[40] = 1'b0;  // psram spi miso input
        io_pad_oe[41] = 1'b0;  // psram sio2 input
        io_pad_oe[42] = 1'b0;  // psram sio3 input
        
`elsif ip_3
        // ysyxSoCASIC outputs
        io_pad_o[1] = s_ysyx_uart0_tx;
        io_pad_o[2] = s_ysyx_spi_sck;
        io_pad_o[10:3] = s_ysyx_spi_ss;
        io_pad_o[11] = s_ysyx_spi_mosi;
        
        io_pad_oe[1] = 1'b1;   // uart tx output enable
        io_pad_oe[2] = 1'b1;   // spi sck output enable
        io_pad_oe[10:3] = 8'hFF; // spi ss output enable
        io_pad_oe[11] = 1'b1;  // spi mosi output enable
        io_pad_oe[12] = 1'b0;  // spi miso input
        io_pad_oe[14:13] = 2'b0; // core_sel input
        io_pad_oe[15] = 1'b0;  // core_irq input
`else
        // Default: simple test signals
        io_pad_o[1] = clk_int; // Simple test signal
        io_pad_o[2] = ~clk_int;
        io_pad_oe[1] = 1'b1;
        io_pad_oe[2] = 1'b1;
`endif
    end
    
    // Instantiate the SoC cores based on IP selection
`ifdef ip_1
    // SimpleEdgeAiSoC instance
    ip1_SimpleEdgeAiSoC u_simple_edge_ai_soc (
        .clock                  (clk_int),
        .reset                  (rst_int),
        .io_uart_tx             (soc_uart_tx),
        .io_uart_rx             (soc_uart_rx),
        .io_lcd_spi_clk         (soc_lcd_spi_clk),
        .io_lcd_spi_mosi        (soc_lcd_spi_mosi),
        .io_lcd_spi_cs          (soc_lcd_spi_cs),
        .io_lcd_spi_dc          (soc_lcd_spi_dc),
        .io_lcd_spi_rst         (soc_lcd_spi_rst),
        .io_lcd_backlight       (soc_lcd_backlight),
        .io_gpio_out            (soc_gpio_out),
        .io_gpio_in             (soc_gpio_in),
        .io_trap                (soc_trap),
        .io_compact_irq         (soc_compact_irq),
        .io_bitnet_irq          (soc_bitnet_irq),
        .io_uart_tx_irq         (soc_uart_tx_irq),
        .io_uart_rx_irq         (soc_uart_rx_irq),
        .io_flash_spi_clk       (soc_flash_spi_clk),
        .io_flash_spi_mosi      (soc_flash_spi_mosi),
        .io_flash_spi_miso      (soc_flash_spi_miso),
        .io_flash_spi_cs        (soc_flash_spi_cs),
        .io_psram_spi_clk       (soc_psram_spi_clk),
        .io_psram_spi_cs        (soc_psram_spi_cs),
        .io_psram_spi_mosi      (soc_psram_spi_mosi),
        .io_psram_spi_miso      (soc_psram_spi_miso),
        .io_psram_spi_sio2_out  (soc_psram_spi_sio2_out),
        .io_psram_spi_sio2_oe   (soc_psram_spi_sio2_oe),
        .io_psram_spi_sio2_in   (soc_psram_spi_sio2_in),
        .io_psram_spi_sio3_out  (soc_psram_spi_sio3_out),
        .io_psram_spi_sio3_oe   (soc_psram_spi_sio3_oe),
        .io_psram_spi_sio3_in   (soc_psram_spi_sio3_in)
    );
    
`elsif ip_3
    // ysyxSoCASIC instance (placeholder - would need actual module)
    // For now, just drive outputs with simple logic for testing
    assign s_ysyx_uart0_tx = clk_int; // Simple test signal
    assign s_ysyx_spi_sck = ~clk_int;
    assign s_ysyx_spi_ss = 8'hAA;
    assign s_ysyx_spi_mosi = rst_n_int;
    
`else
    // Default: no IP instantiated, just simple test signals
    // (outputs already assigned in always_comb block above)
`endif
    
    // Test mode output
    assign test_mode_o = 1'b0;

endmodule