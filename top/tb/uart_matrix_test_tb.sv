// UART Matrix Simple Test with bootloader_tb.sv environment
`include "bootloader_tb.sv"

module uart_matrix_test_tb;
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
  
  // Use SimpleEdgeAiSoC.sv with ROM from bootloader_tb.sv
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
  
  // Load matrix program to RAM
  initial begin
    #100; // Wait for reset
    // Load matrix program at 0x10100 (after bootloader)
    force soc.memAdapter.ram[64] = 32'h20000537;  // lui a0, 0x20000 (UART_BASE)
    force soc.memAdapter.ram[65] = 32'h00100593;  // addi a1, zero, 1
    force soc.memAdapter.ram[66] = 32'h00b52423;  // sw a1, 8(a0) (enable UART)
    force soc.memAdapter.ram[67] = 32'h00010637;  // lui a2, 0x10001 (matrix buffer)
    force soc.memAdapter.ram[68] = 32'h00000693;  // addi a3, zero, 0 (count)
    // Matrix receive loop
    force soc.memAdapter.ram[69] = 32'h00452583;  // lw a1, 4(a0) (read status)
    force soc.memAdapter.ram[70] = 32'h0045f593;  // andi a1, a1, 4 (check rx_valid)
    force soc.memAdapter.ram[71] = 32'hfe0584e3;  // beqz a1, -8 (wait)
    force soc.memAdapter.ram[72] = 32'h00052583;  // lw a1, 0(a0) (read data)
    force soc.memAdapter.ram[73] = 32'h00b62023;  // sw a1, 0(a2) (store to buffer)
    force soc.memAdapter.ram[74] = 32'h00460613;  // addi a2, a2, 4
    force soc.memAdapter.ram[75] = 32'h00168693;  // addi a3, a3, 1
    force soc.memAdapter.ram[76] = 32'h00400713;  // addi a4, zero, 4
    force soc.memAdapter.ram[77] = 32'hfee696e3;  // bne a3, a4, -20 (continue if count < 4)
    // Matrix calculation and output (simplified)
    force soc.memAdapter.ram[78] = 32'h00010637;  // lui a2, 0x10001 (reload buffer)
    force soc.memAdapter.ram[79] = 32'h00062583;  // lw a1, 0(a2) (matrix[0])
    force soc.memAdapter.ram[80] = 32'h00c62603;  // lw a2, 12(a2) (matrix[3])
    force soc.memAdapter.ram[81] = 32'h00c585b3;  // add a1, a1, a2 (matrix[0] + matrix[3])
    force soc.memAdapter.ram[82] = 32'h00b52023;  // sw a1, 0(a0) (output result)
    force soc.memAdapter.ram[83] = 32'hfc1ff06f;  // j -64 (restart)
    release soc.memAdapter.ram;
  end
  
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      $display("Sending: 0x%02x", data);
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
  
  // UART TX monitor
  reg [7:0] tx_data;
  reg [3:0] tx_bit_count = 0;
  reg tx_active = 0;
  reg [15:0] tx_timer = 0;
  
  always @(posedge clk) begin
    if (!tx_active && uart_tx == 0) begin
      tx_active = 1;
      tx_bit_count = 0;
      tx_data = 0;
      tx_timer = 4340;
    end else if (tx_active) begin
      if (tx_timer > 0) begin
        tx_timer = tx_timer - 1;
      end else begin
        tx_timer = 8680;
        if (tx_bit_count < 8) begin
          tx_data[tx_bit_count] = uart_tx;
          tx_bit_count = tx_bit_count + 1;
        end else begin
          tx_active = 0;
          $display("Received: 0x%02x", tx_data);
        end
      end
    end
  end
  
  initial begin
    $dumpfile("uart_matrix_test.vcd");
    $dumpvars(0, uart_matrix_test_tb);
    
    $display("UART Matrix Simple Test Starting...");
    
    wait(!reset);
    #50000; // Wait for bootloader
    
    // Jump to matrix program
    force soc.riscv.reg_pc = 32'h00010100;
    #1000;
    release soc.riscv.reg_pc;
    
    $display("=== Sending 2x2 Matrix Data ===");
    send_uart_byte(8'h01); // matrix[0] = 1
    #50000;
    send_uart_byte(8'h02); // matrix[1] = 2  
    #50000;
    send_uart_byte(8'h03); // matrix[2] = 3
    #50000;
    send_uart_byte(8'h04); // matrix[3] = 4
    #100000;
    
    $display("Matrix calculation completed");
    $finish;
  end
  
  // Monitor matrix program execution
  always @(posedge clk) begin
    if (soc.riscv.mem_valid && soc.riscv.mem_addr >= 32'h10100 && soc.riscv.mem_addr < 32'h10200) begin
      $display("Time: %0t, Matrix Program PC: 0x%08x", $time, soc.riscv.reg_pc);
    end
  end
  
endmodule
