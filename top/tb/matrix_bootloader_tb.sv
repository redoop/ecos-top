// Matrix test using bootloader environment
// ROM Bootloader module
module ip1_BootROM(
  input         clock,
  input  [31:0] addr,
  output [31:0] data
);
  reg [31:0] rom_data;
  
  always @(*) begin
    case (addr[7:2])
      6'h00: rom_data = 32'h20000537; // lui a0, 0x20000 (UART_BASE)
      6'h01: rom_data = 32'h200207b7; // lui a5, 0x20020 (GPIO_BASE)
      6'h02: rom_data = 32'h00100593; // addi a1, zero, 1
      6'h03: rom_data = 32'h00b52423; // sw a1, 8(a0) (enable UART)
      6'h04: rom_data = 32'h00452583; // lw a1, 4(a0) (read UART status)
      6'h05: rom_data = 32'h0025f593; // andi a1, a1, 2 (check bit 1: rx_valid)
      6'h06: rom_data = 32'hfe0584e3; // beqz a1, start (wait for data)
      6'h07: rom_data = 32'h00052583; // lw a1, 0(a0) (read UART data)
      6'h08: rom_data = 32'h00b7a023; // sw a1, 0(a5) (output to GPIO)
      6'h09: rom_data = 32'hff1ff06f; // j -16 (loop back to status check)
      default: rom_data = 32'h00000013; // nop
    endcase
  end
  
  assign data = rom_data;
endmodule

module matrix_bootloader_tb;
  reg clk = 0;
  reg reset = 1;
  reg uart_rx = 1;
  wire uart_tx;
  wire [31:0] gpio_out;
  reg [31:0] gpio_in = 0;
  wire trap, compact_irq, bitnet_irq, uart_tx_irq, uart_rx_irq;
  
  always #5 clk = ~clk;
  
  initial begin
    #20 reset = 0;
  end
  
  // Use SimpleEdgeAiSoC.sv
  ip1_SimpleEdgeAiSoC soc (
    .clock(clk),
    .reset(reset),
    .io_uart_tx(uart_tx),
    .io_uart_rx(uart_rx),
    .io_lcd_spi_clk(),
    .io_lcd_spi_mosi(),
    .io_lcd_spi_cs(),
    .io_lcd_spi_dc(),
    .io_lcd_spi_rst(),
    .io_lcd_backlight(),
    .io_gpio_out(gpio_out),
    .io_gpio_in(gpio_in),
    .io_trap(trap),
    .io_compact_irq(compact_irq),
    .io_bitnet_irq(bitnet_irq),
    .io_uart_tx_irq(uart_tx_irq),
    .io_uart_rx_irq(uart_rx_irq)
  );
  
  // Add ROM functionality
  wire [31:0] rom_data;
  wire is_rom_access = (soc.riscv.mem_addr < 32'h00000100);
  
  ip1_BootROM bootrom (
    .clock(clk),
    .addr(soc.riscv.mem_addr),
    .data(rom_data)
  );
  
  always @(*) begin
    if (is_rom_access) begin
      force soc.riscv.mem_ready = 1'b1;
      force soc.riscv.mem_rdata = rom_data;
    end else begin
      release soc.riscv.mem_ready;
      release soc.riscv.mem_rdata;
    end
  end
  
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      $display("Sending matrix data: 0x%02x (%d)", data, data);
      uart_rx = 0;
      #8680;
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx = data[i];
        #8680;
      end
      uart_rx = 1;
      #8680;
    end
  endtask
  
  // Force UART data for matrix test
  reg [7:0] matrix_data [0:3];
  reg [1:0] matrix_count = 0;
  
  initial begin
    matrix_data[0] = 8'h01; // Matrix element [0,0] = 1
    matrix_data[1] = 8'h02; // Matrix element [0,1] = 2
    matrix_data[2] = 8'h03; // Matrix element [1,0] = 3
    matrix_data[3] = 8'h04; // Matrix element [1,1] = 4
  end
  
  // Auto-feed matrix data when bootloader requests
  always @(posedge clk) begin
    if (soc.riscv.mem_valid && soc.riscv.mem_addr == 32'h20000004 && 
        soc.riscv.mem_rdata == 32'h8 && matrix_count < 4) begin
      // When bootloader checks UART status and finds no data, inject matrix data
      #1000;
      force soc.uart.uart.rxFifo.io_enq_valid = 1;
      force soc.uart.uart.rxFifo.io_enq_bits = matrix_data[matrix_count];
      #10;
      release soc.uart.uart.rxFifo.io_enq_valid;
      release soc.uart.uart.rxFifo.io_enq_bits;
      $display("Injected matrix[%0d] = %d", matrix_count, matrix_data[matrix_count]);
      matrix_count = matrix_count + 1;
    end
  end
  
  initial begin
    $dumpfile("matrix_bootloader_test.vcd");
    $dumpvars(0, matrix_bootloader_tb);
    
    $display("Matrix Test with Bootloader Environment");
    $display("Expected: Matrix elements 1,2,3,4 -> GPIO outputs");
    
    wait(!reset);
    #50000;
    
    $display("UART Control: 0x%08x", soc.uart.uart.control);
    
    // Wait for matrix processing
    #500000;
    
    $display("Final GPIO Output: 0x%08x", gpio_out);
    $display("Test completed");
    $finish;
  end
  
  // Monitor GPIO outputs (matrix results)
  always @(gpio_out) begin
    if (gpio_out != 0) begin
      $display("Time: %0t, Matrix Result GPIO: 0x%08x (%d)", $time, gpio_out, gpio_out[7:0]);
    end
  end
  
  // Monitor UART activity
  always @(posedge clk) begin
    if (soc.uart.uart.rxFifo.io_deq_valid) begin
      $display("Time: %0t, UART RX: 0x%02x", $time, soc.uart.uart.rxFifo.io_deq_bits);
    end
  end
  
endmodule
