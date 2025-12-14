// Simplified SoC testbench for iverilog compatibility
// Based on ../top/tb/soc_tb.sv but adapted for iverilog

`timescale 1ns / 1ps

module soc_tb ();
    localparam real OSC_CLK_25M_PERIOD = 40.0; // 25MHz = 40ns period

    // Test signals
    reg r_osc_clk_25m;
    reg r_ext_rst_n;
    reg [2:0] r_ip_sel;

    // IO pad connections (simplified)
    wire old_ip_uart_rx_pad;
    wire old_ip_uart_tx_pad;
    wire old_ip_spi_flash_clk_pad;
    wire [1:0] old_ip_spi_flash_cs_pad;
    wire old_ip_spi_flash_mosi_pad;
    wire old_ip_spi_flash_miso_pad;

    // Connect to simplified asic_top
    asic_top u_asic_top (
        .ip_sel_pad0       (r_ip_sel[0]),
        .ip_sel_pad1       (r_ip_sel[1]),
        .ip_sel_pad2       (r_ip_sel[2]),
        .sys_clk_i_pad     (r_osc_clk_25m),
        .sys_clk_o_pad     (),
        .rst_n_pad         (r_ext_rst_n),
        .io_pad0           (old_ip_uart_rx_pad),
        .io_pad1           (old_ip_uart_tx_pad),
        .io_pad2           (old_ip_spi_flash_clk_pad),
        .io_pad3           (old_ip_spi_flash_cs_pad[0]),
        .io_pad4           (old_ip_spi_flash_cs_pad[1]),
        .io_pad5           (),
        .io_pad6           (),
        .io_pad7           (),
        .io_pad8           (),
        .io_pad9           (),
        .io_pad10          (),
        .io_pad11          (old_ip_spi_flash_mosi_pad),
        .io_pad12          (old_ip_spi_flash_miso_pad),
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
        .io_pad81          ()
    );
    // Simplified peripheral models
    // Flash memory model (simplified)
    reg flash_miso_reg;
    assign old_ip_spi_flash_miso_pad = flash_miso_reg;
    
    always @(posedge old_ip_spi_flash_clk_pad) begin
        if (!old_ip_spi_flash_cs_pad[0]) begin
            flash_miso_reg <= $random; // Simple random data
        end
    end

    // UART model (simplified)
    assign old_ip_uart_rx_pad = 1'b1; // Idle high

    // Reset task
    task sim_reset(input integer delay);
        begin
            r_ext_rst_n = 1'b0;
            repeat (delay) @(posedge r_osc_clk_25m);
            #1 r_ext_rst_n = 1'b1;
            $display("Reset released at time %t", $time);
        end
    endtask

    // Clock generation
    initial begin
        r_osc_clk_25m = 1'b0;
        forever begin
            #(OSC_CLK_25M_PERIOD / 2) r_osc_clk_25m <= ~r_osc_clk_25m;
        end
    end
    
    // Main test sequence
    initial begin
        $display("Starting SoC simulation at time %t", $time);
        
        // Initialize signals
        r_ext_rst_n = 1'b0;
        flash_miso_reg = 1'b0;
        
        // Apply reset
        sim_reset(100);
        
        // Run for some time
        #10000;
        
        $display("SoC simulation completed at time %t", $time);
        $finish;
    end

    // IP selection and test configuration
    initial begin
        // Default to IP1 (SimpleEdgeAiSoC)
        r_ip_sel = 3'd1;
        
        // Check for test arguments
        if ($test$plusargs("ip_sel00")) r_ip_sel = 3'd0;
        else if ($test$plusargs("ip_sel01")) r_ip_sel = 3'd1;
        else if ($test$plusargs("ip_sel02")) r_ip_sel = 3'd2;
        else if ($test$plusargs("ip_sel03")) r_ip_sel = 3'd3;
        else if ($test$plusargs("ip_sel04")) r_ip_sel = 3'd4;
        else if ($test$plusargs("ip_sel05")) r_ip_sel = 3'd5;

        $display("IP Selection: %d", r_ip_sel);

        // VCD dump control
        if ($test$plusargs("dump_all")) begin
            $dumpfile("soc_tb.vcd");
            $dumpvars(0, soc_tb);
            $display("VCD dumping enabled");
        end

        // Test duration control
        if ($test$plusargs("short_test")) begin
            #50000 $finish;
        end else if ($test$plusargs("medium_test")) begin
            #500000 $finish;
        end else if ($test$plusargs("long_test")) begin
            #5000000 $finish;
        end
    end

    // Monitor key signals
    initial begin
        $monitor("Time=%t rst_n=%b clk=%b ip_sel=%d uart_tx=%b", 
                 $time, r_ext_rst_n, r_osc_clk_25m, r_ip_sel, old_ip_uart_tx_pad);
    end

endmodule