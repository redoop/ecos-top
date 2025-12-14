// iverilog compatible version of asic_top.sv
// Fixed multiple assignment issues

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
    
    // Other IP signals
    logic s_ysyx_uart0_tx;
    logic s_ysyx_spi_sck;
    logic [7:0] s_ysyx_spi_ss;
    logic s_ysyx_spi_mosi;
    
    // Clock and reset processing
    assign clk_int = clk_pad;
    assign rst_n_int = rst_n_pad;
    
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
    
    // IP selection logic - use mux instead of multiple assignment
`ifdef ip3_ysyx
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
`ifdef ip3_ysyx
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
`endif
    end
    
    // Instantiate the SoC core (simplified for iverilog compatibility)
    // Note: This is a placeholder - actual ysyxSoCASIC module would need similar fixes
    
    // For now, just drive outputs with simple logic for testing
    assign s_ysyx_uart0_tx = clk_int; // Simple test signal
    assign s_ysyx_spi_sck = ~clk_int;
    assign s_ysyx_spi_ss = 8'hAA;
    assign s_ysyx_spi_mosi = rst_n_int;
    
    // Test mode output
    assign test_mode_o = 1'b0;

endmodule