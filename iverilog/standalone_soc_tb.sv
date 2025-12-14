// Standalone SimpleEdgeAiSoC testbench for direct comparison
// This testbench runs SimpleEdgeAiSoC without ASIC top wrapper

`timescale 1ns / 1ps

module standalone_soc_tb ();
    localparam real CLK_PERIOD = 40.0; // 25MHz = 40ns period

    // Test signals
    reg clk;
    reg rst;
    
    // SimpleEdgeAiSoC I/O signals
    wire        soc_uart_tx;
    reg         soc_uart_rx;
    wire        soc_lcd_spi_clk;
    wire        soc_lcd_spi_mosi;
    wire        soc_lcd_spi_cs;
    wire        soc_lcd_spi_dc;
    wire        soc_lcd_spi_rst;
    wire        soc_lcd_backlight;
    wire [15:0] soc_gpio_out;
    reg  [15:0] soc_gpio_in;
    wire        soc_trap;
    wire        soc_compact_irq;
    wire        soc_bitnet_irq;
    wire        soc_uart_tx_irq;
    wire        soc_uart_rx_irq;
    wire        soc_flash_spi_clk;
    wire        soc_flash_spi_mosi;
    reg         soc_flash_spi_miso;
    wire        soc_flash_spi_cs;
    wire        soc_psram_spi_clk;
    wire        soc_psram_spi_cs;
    wire        soc_psram_spi_mosi;
    reg         soc_psram_spi_miso;
    wire        soc_psram_spi_sio2_out;
    wire        soc_psram_spi_sio2_oe;
    reg         soc_psram_spi_sio2_in;
    wire        soc_psram_spi_sio3_out;
    wire        soc_psram_spi_sio3_oe;
    reg         soc_psram_spi_sio3_in;

    // Direct SimpleEdgeAiSoC instance (standalone)
    ip1_SimpleEdgeAiSoC u_standalone_soc (
        .clock                  (clk),
        .reset                  (rst),
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

    // Clock generation
    initial begin
        clk = 1'b0;
        forever begin
            #(CLK_PERIOD / 2) clk <= ~clk;
        end
    end

    // Reset task
    task sim_reset(input integer delay);
        begin
            rst = 1'b1;
            repeat (delay) @(posedge clk);
            #1 rst = 1'b0;
            $display("Reset released at time %t", $time);
        end
    endtask
    
    // Input stimulus generation
    initial begin
        // Initialize inputs
        soc_uart_rx = 1'b0;
        soc_gpio_in = 16'h0000;
        soc_flash_spi_miso = 1'b0;
        soc_psram_spi_miso = 1'b0;
        soc_psram_spi_sio2_in = 1'b0;
        soc_psram_spi_sio3_in = 1'b0;
        
        // Generate some input activity
        fork
            // UART RX activity
            begin
                #5000;
                repeat (10) begin
                    #2000 soc_uart_rx = 1'b1;
                    #2000 soc_uart_rx = 1'b0;
                end
            end
            
            // GPIO input changes
            begin
                #3000;
                repeat (8) begin
                    #4000 soc_gpio_in = soc_gpio_in + 16'h1111;
                end
            end
            
            // SPI MISO activity
            begin
                #7000;
                repeat (16) begin
                    #1000 soc_flash_spi_miso = ~soc_flash_spi_miso;
                    #500  soc_psram_spi_miso = ~soc_psram_spi_miso;
                end
            end
        join_none
    end
    
    // Main test sequence
    initial begin
        $display("Starting standalone SimpleEdgeAiSoC simulation at time %t", $time);
        
        // Apply reset
        sim_reset(100);
        
        // Run for same duration as integrated test
        #50000;
        
        $display("Standalone SimpleEdgeAiSoC simulation completed at time %t", $time);
        $finish;
    end

    // VCD dump control with depth support
    initial begin
        if ($test$plusargs("dump_all")) begin
            reg [31:0] vcd_depth;
            $dumpfile("standalone_soc_tb.vcd");
            
            // Check for VCD depth parameter
            if ($value$plusargs("vcd_depth=%d", vcd_depth)) begin
                $dumpvars(vcd_depth, standalone_soc_tb);
                $display("VCD dumping enabled with depth: %d", vcd_depth);
            end else begin
                $dumpvars(0, standalone_soc_tb);  // Default: dump all levels
                $display("VCD dumping enabled (all levels)");
            end
        end
    end

    // Monitor key signals
    initial begin
        $monitor("Time=%t rst=%b clk=%b uart_tx=%b gpio_out=%h trap=%b compact_irq=%b bitnet_irq=%b", 
                 $time, rst, clk, soc_uart_tx, soc_gpio_out, soc_trap, soc_compact_irq, soc_bitnet_irq);
    end

endmodule