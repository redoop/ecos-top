// iverilog-compatible version of asic_top.sv
// Adapted from ../top/asic_top.sv for full RTL simulation
// Supports multiple IP configurations via defines

`timescale 1ns/1ps

//`define ip_0 3'd0 // project_2057
`define ip_1 3'd1 // project_2017
//`define ip_2 3'd2 // project_2021
//`define ip_3 3'd3 // ysyxSoCASIC
//`define ip_4 3'd4 // project_2099
//`define ip_5 3'd5 // project_2005

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

    // Convert logic to wire/reg for iverilog compatibility
    wire [2:0]     ip_sel;
    wire           sys_clk;
    wire           rst_n;
    wire [81:0]    io_pad_i;
    reg  [81:0]    io_pad_o;
    reg  [81:0]    io_pad_oe;
    reg  [7:0]     io_pad_pu;
    reg  [7:0]     io_pad_pd;

    // clock and reset signals for different IPs
    wire           clk_100m;
    wire           clk_50m;
    wire           clk_25m;
    wire           rst_100m_n;
    wire           rst_50m_n;
    wire           rst_25m_n;
    // ip1 signals (SimpleEdgeAiSoC)
    wire           ip1_clk_100m;
    wire           ip1_io_uart_tx;
    reg            ip1_io_uart_rx;
    wire           ip1_io_lcd_spi_clk;
    wire           ip1_io_lcd_spi_mosi;
    wire           ip1_io_lcd_spi_cs;
    wire           ip1_io_lcd_spi_dc;
    wire           ip1_io_lcd_spi_rst;
    wire           ip1_io_lcd_backlight;
    wire [31:0]    ip1_io_gpio_out;
    reg  [31:0]    ip1_io_gpio_in;
    wire           ip1_io_trap;
    wire           ip1_io_compact_irq;
    wire           ip1_io_bitnet_irq;
    wire           ip1_io_uart_tx_irq;
    wire           ip1_io_uart_rx_irq;

    // IO pad input assignments
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
    assign io_pad_i[13] = io_pad13;
    assign io_pad_i[14] = io_pad14;
    assign io_pad_i[15] = io_pad15;
    assign io_pad_i[16] = io_pad16;
    assign io_pad_i[17] = io_pad17;
    assign io_pad_i[18] = io_pad18;
    assign io_pad_i[19] = io_pad19;
    assign io_pad_i[20] = io_pad20;
    assign io_pad_i[21] = io_pad21;
    assign io_pad_i[22] = io_pad22;
    assign io_pad_i[23] = io_pad23;
    assign io_pad_i[24] = io_pad24;
    assign io_pad_i[25] = io_pad25;
    assign io_pad_i[26] = io_pad26;
    assign io_pad_i[27] = io_pad27;
    assign io_pad_i[28] = io_pad28;
    assign io_pad_i[29] = io_pad29;
    assign io_pad_i[30] = io_pad30;
    assign io_pad_i[31] = io_pad31;
    assign io_pad_i[32] = io_pad32;
    assign io_pad_i[33] = io_pad33;
    assign io_pad_i[34] = io_pad34;
    assign io_pad_i[35] = io_pad35;
    assign io_pad_i[36] = io_pad36;
    assign io_pad_i[37] = io_pad37;
    assign io_pad_i[38] = io_pad38;
    assign io_pad_i[39] = io_pad39;
    assign io_pad_i[40] = io_pad40;
    assign io_pad_i[41] = io_pad41;
    assign io_pad_i[42] = io_pad42;
    assign io_pad_i[43] = io_pad43;
    assign io_pad_i[44] = io_pad44;
    assign io_pad_i[45] = io_pad45;
    assign io_pad_i[46] = io_pad46;
    assign io_pad_i[47] = io_pad47;
    assign io_pad_i[48] = io_pad48;
    assign io_pad_i[49] = io_pad49;
    assign io_pad_i[50] = io_pad50;
    assign io_pad_i[51] = io_pad51;
    assign io_pad_i[52] = io_pad52;
    assign io_pad_i[53] = io_pad53;
    assign io_pad_i[54] = io_pad54;
    assign io_pad_i[55] = io_pad55;
    assign io_pad_i[56] = io_pad56;
    assign io_pad_i[57] = io_pad57;
    assign io_pad_i[58] = io_pad58;
    assign io_pad_i[59] = io_pad59;
    assign io_pad_i[60] = io_pad60;
    assign io_pad_i[61] = io_pad61;
    assign io_pad_i[62] = io_pad62;
    assign io_pad_i[63] = io_pad63;
    assign io_pad_i[64] = io_pad64;
    assign io_pad_i[65] = io_pad65;
    assign io_pad_i[66] = io_pad66;
    assign io_pad_i[67] = io_pad67;
    assign io_pad_i[68] = io_pad68;
    assign io_pad_i[69] = io_pad69;
    assign io_pad_i[70] = io_pad70;
    assign io_pad_i[71] = io_pad71;
    assign io_pad_i[72] = io_pad72;
    assign io_pad_i[73] = io_pad73;
    assign io_pad_i[74] = io_pad74;
    assign io_pad_i[75] = io_pad75;
    assign io_pad_i[76] = io_pad76;
    assign io_pad_i[77] = io_pad77;
    assign io_pad_i[78] = io_pad78;
    assign io_pad_i[79] = io_pad79;
    assign io_pad_i[80] = io_pad80;
    assign io_pad_i[81] = io_pad81;
    // IP selection logic - replace always_comb with always @(*)
    always @(*) begin 
        io_pad_o  = 82'b0;
        io_pad_oe = 82'b0;
        io_pad_pu = 8'b0;
        io_pad_pd = 8'b0;

        // Default assignments for ip1 signals
        ip1_io_uart_rx       = 1'b0;
        ip1_io_gpio_in       = 32'b0;

        case (ip_sel)
        `ifdef ip_1
            `ip_1: begin
                io_pad_oe[31:0] = 32'b0;
                io_pad_oe[63:32] = 32'hFFFFFFFF;
                io_pad_oe[64] = 1'b1;
                io_pad_oe[65] = 1'b0;
                io_pad_oe[76:66] = 11'h7FF;

                ip1_io_gpio_in = io_pad_i[31:0];
                io_pad_o[63:32] = ip1_io_gpio_out;

                io_pad_o[64] = ip1_io_uart_tx;
                ip1_io_uart_rx = io_pad_i[65];
                io_pad_o[66] = ip1_io_uart_tx_irq;
                io_pad_o[67] = ip1_io_uart_rx_irq;
                io_pad_o[68] = ip1_io_lcd_spi_clk;
                io_pad_o[69] = ip1_io_lcd_spi_mosi;
                io_pad_o[70] = ip1_io_lcd_spi_cs;
                io_pad_o[71] = ip1_io_lcd_spi_dc;
                io_pad_o[72] = ip1_io_lcd_spi_rst;
                io_pad_o[73] = ip1_io_lcd_backlight;
                io_pad_o[74] = ip1_io_trap;
                io_pad_o[75] = ip1_io_compact_irq;
                io_pad_o[76] = ip1_io_bitnet_irq;
            end
        `endif
            default: begin
                // Default case - all outputs low
            end
        endcase
    end

// IP instantiations - use stubs for iverilog compatibility
`ifdef ip_1
ip1_SimpleEdgeAiSoC u_SimpleEdgeAiSoC (
    .clock              (ip1_clk_100m),   
    .reset              (~rst_100m_n),
    .io_uart_tx         (ip1_io_uart_tx),
    .io_uart_rx         (ip1_io_uart_rx),
    .io_lcd_spi_clk     (ip1_io_lcd_spi_clk),    
    .io_lcd_spi_mosi    (ip1_io_lcd_spi_mosi),       
    .io_lcd_spi_cs      (ip1_io_lcd_spi_cs),   
    .io_lcd_spi_dc      (ip1_io_lcd_spi_dc),   
    .io_lcd_spi_rst     (ip1_io_lcd_spi_rst),   
    .io_lcd_backlight   (ip1_io_lcd_backlight),       
    .io_gpio_out        (ip1_io_gpio_out),    
    .io_gpio_in         (ip1_io_gpio_in),
    .io_trap            (ip1_io_trap),
    .io_compact_irq     (ip1_io_compact_irq),    
    .io_bitnet_irq      (ip1_io_bitnet_irq),    
    .io_uart_tx_irq     (ip1_io_uart_tx_irq),    
    .io_uart_rx_irq     (ip1_io_uart_rx_irq)
);
`endif
// Clock buffers
tc_clk_buf u_ip1_clk_buf (.clk_i(clk_100m), .clk_o(ip1_clk_100m));

// Reset and Clock Unit
rcu u_rcu (
    .sys_clk_i          (sys_clk),
    .arst_n_i           (rst_n),  
    .clk_100m_o         (clk_100m),  
    .clk_50m_o          (clk_50m),   
    .clk_25m_o          (clk_25m),   
    .rst_100m_n_o       (rst_100m_n),
    .rst_50m_n_o        (rst_50m_n), 
    .rst_25m_n_o        (rst_25m_n)  
);

// IO pad assignments
assign ip_sel[0] = ip_sel_pad0;
assign ip_sel[1] = ip_sel_pad1;
assign ip_sel[2] = ip_sel_pad2;
assign sys_clk = sys_clk_i_pad;
assign sys_clk_o_pad = sys_clk;
assign rst_n = rst_n_pad;

endmodule