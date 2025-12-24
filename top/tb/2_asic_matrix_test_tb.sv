// ASIC Top level test for uart_matrix_simple.c with bootloader
// ROM Bootloader module - Matrix Algorithm
module ip1_BootROM(
  input         clock,
  input  [31:0] addr,
  output [31:0] data
);
  reg [31:0] rom_data;
  
  // Load uart_matrix_simple.hex content
  always @(*) begin
    case (addr[7:2])
      6'h00: rom_data = 32'h130101fd; // uart_matrix_simple program
      6'h01: rom_data = 32'h23268102;
      6'h02: rom_data = 32'h13040103;
      6'h03: rom_data = 32'hb7370110;
      6'h04: rom_data = 32'h2322f4fe;
      6'h05: rom_data = 32'hb7370110;
      6'h06: rom_data = 32'h93874700;
      6'h07: rom_data = 32'h2320f4fe;
      6'h08: rom_data = 32'h232e04fc;
      6'h09: rom_data = 32'h232604fe;
      6'h0a: rom_data = 32'h832704fe;
      6'h0b: rom_data = 32'h83a70700;
      6'h0c: rom_data = 32'h93f74700;
      6'h0d: rom_data = 32'he38a07fe;
      6'h0e: rom_data = 32'h832744fe;
      6'h0f: rom_data = 32'h83a70700;
      6'h10: rom_data = 32'h13f7f70f;
      6'h11: rom_data = 32'h8327c4fe;
      6'h12: rom_data = 32'h930604ff;
      6'h13: rom_data = 32'hb387f600;
      6'h14: rom_data = 32'h2386e7fe;
      6'h15: rom_data = 32'h8327c4fe;
      6'h16: rom_data = 32'h93871700;
      6'h17: rom_data = 32'h2326f4fe;
      6'h18: rom_data = 32'h0327c4fe;
      6'h19: rom_data = 32'h93074000;
      6'h1a: rom_data = 32'he310f7fc;
      default: rom_data = 32'h00000013; // nop
    endcase
  end
  
  assign data = rom_data;
endmodule

module asic_matrix_test_tb;
  reg sys_clk = 0;
  reg rst_n = 0;
  reg [2:0] ip_sel = 3'b001; // Select ip_1 (project_2017)
  
  // IO pads - declare as wires for inout ports
  wire io_pad0, io_pad1, io_pad2, io_pad3, io_pad4, io_pad5, io_pad6, io_pad7;
  wire io_pad8, io_pad9, io_pad10, io_pad11, io_pad12, io_pad13, io_pad14, io_pad15;
  wire io_pad16, io_pad17, io_pad18, io_pad19, io_pad20, io_pad21, io_pad22, io_pad23;
  wire io_pad24, io_pad25, io_pad26, io_pad27, io_pad28, io_pad29, io_pad30, io_pad31;
  wire io_pad32, io_pad33, io_pad34, io_pad35, io_pad36, io_pad37, io_pad38, io_pad39;
  wire io_pad40, io_pad41, io_pad42, io_pad43, io_pad44, io_pad45, io_pad46, io_pad47;
  wire io_pad48, io_pad49, io_pad50, io_pad51, io_pad52, io_pad53, io_pad54, io_pad55;
  wire io_pad56, io_pad57, io_pad58, io_pad59, io_pad60, io_pad61, io_pad62, io_pad63;
  wire io_pad64, io_pad65;
  
  // UART control - use correct pins for ip_1
  reg uart_rx_drive = 1;
  assign io_pad65 = uart_rx_drive; // UART RX input (ip1_io_uart_rx)
  
  // Monitor UART TX output (io_pad64 = ip1_io_uart_tx)
  wire uart_tx = io_pad64;
  
  // UART TX decoder
  reg [7:0] uart_rx_byte;
  reg [3:0] uart_bit_count;
  reg uart_receiving;
  reg [15:0] uart_bit_timer;
  
  always @(posedge sys_clk) begin
    if (!rst_n) begin
      uart_receiving <= 0;
      uart_bit_count <= 0;
      uart_bit_timer <= 0;
    end else begin
      if (!uart_receiving && !uart_tx) begin
        // Start bit detected
        uart_receiving <= 1;
        uart_bit_count <= 0;
        uart_bit_timer <= 434; // Half bit time for sampling
      end else if (uart_receiving) begin
        if (uart_bit_timer == 0) begin
          if (uart_bit_count < 8) begin
            uart_rx_byte[uart_bit_count] <= uart_tx;
            uart_bit_count <= uart_bit_count + 1;
            uart_bit_timer <= 868; // Full bit time
          end else begin
            // Stop bit
            uart_receiving <= 0;
            if (uart_tx) begin
              $display("Time: %0t, UART RX: 0x%02x (%d)", $time, uart_rx_byte, uart_rx_byte);
            end
          end
        end else begin
          uart_bit_timer <= uart_bit_timer - 1;
        end
      end
    end
  end
  
  always #5 sys_clk = ~sys_clk;
  
  initial begin
    #20 rst_n = 1;
  end
  
  // Instantiate ASIC top
  asic_top u_asic_top (
    .ip_sel_pad0(ip_sel[0]),
    .ip_sel_pad1(ip_sel[1]),
    .ip_sel_pad2(ip_sel[2]),
    .sys_clk_i_pad(sys_clk),
    .sys_clk_o_pad(),
    .rst_n_pad(rst_n),
    .io_pad0(io_pad0), .io_pad1(io_pad1), .io_pad2(io_pad2), .io_pad3(io_pad3),
    .io_pad4(io_pad4), .io_pad5(io_pad5), .io_pad6(io_pad6), .io_pad7(io_pad7),
    .io_pad8(io_pad8), .io_pad9(io_pad9), .io_pad10(io_pad10), .io_pad11(io_pad11),
    .io_pad12(io_pad12), .io_pad13(io_pad13), .io_pad14(io_pad14), .io_pad15(io_pad15),
    .io_pad16(io_pad16), .io_pad17(io_pad17), .io_pad18(io_pad18), .io_pad19(io_pad19),
    .io_pad20(io_pad20), .io_pad21(io_pad21), .io_pad22(io_pad22), .io_pad23(io_pad23),
    .io_pad24(io_pad24), .io_pad25(io_pad25), .io_pad26(io_pad26), .io_pad27(io_pad27),
    .io_pad28(io_pad28), .io_pad29(io_pad29), .io_pad30(io_pad30), .io_pad31(io_pad31),
    .io_pad32(io_pad32), .io_pad33(io_pad33), .io_pad34(io_pad34), .io_pad35(io_pad35),
    .io_pad36(io_pad36), .io_pad37(io_pad37), .io_pad38(io_pad38), .io_pad39(io_pad39),
    .io_pad40(io_pad40), .io_pad41(io_pad41), .io_pad42(io_pad42), .io_pad43(io_pad43),
    .io_pad44(io_pad44), .io_pad45(io_pad45), .io_pad46(io_pad46), .io_pad47(io_pad47),
    .io_pad48(io_pad48), .io_pad49(io_pad49), .io_pad50(io_pad50), .io_pad51(io_pad51),
    .io_pad52(io_pad52), .io_pad53(io_pad53), .io_pad54(io_pad54), .io_pad55(io_pad55),
    .io_pad56(io_pad56), .io_pad57(io_pad57), .io_pad58(io_pad58), .io_pad59(io_pad59),
    .io_pad60(io_pad60), .io_pad61(io_pad61), .io_pad62(io_pad62), .io_pad63(io_pad63),
    .io_pad64(io_pad64), .io_pad65(io_pad65), .io_pad66(), .io_pad67(), .io_pad68(), .io_pad69(),
    .io_pad70(), .io_pad71(), .io_pad72(), .io_pad73(), .io_pad74(), .io_pad75(),
    .io_pad76(), .io_pad77(), .io_pad78(), .io_pad79(), .io_pad80(), .io_pad81()
  );
  
  // UART TX task - send byte via UART RX pad
  task send_uart_byte(input [7:0] data);
    integer i;
    begin
      uart_rx_drive = 0; #8680; // Start bit
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx_drive = data[i]; #8680; // Data bits
      end
      uart_rx_drive = 1; #8680; // Stop bit
    end
  endtask
  
  // Matrix data injection via UART
  reg [7:0] matrix_data [0:3];
  
  initial begin
    matrix_data[0] = 8'h01;
    matrix_data[1] = 8'h02;
    matrix_data[2] = 8'h03;
    matrix_data[3] = 8'h04;
  end
  
  initial begin
    wait(rst_n);
    #100000; // Wait for system init
    
    // Send all 4 matrix elements
    send_uart_byte(matrix_data[0]);
    $display("Injected matrix[0] = %d", matrix_data[0]);
    #150000;
    
    send_uart_byte(matrix_data[1]);
    $display("Injected matrix[1] = %d", matrix_data[1]);
    #150000;
    
    send_uart_byte(matrix_data[2]);
    $display("Injected matrix[2] = %d", matrix_data[2]);
    #150000;
    
    send_uart_byte(matrix_data[3]);
    $display("Injected matrix[3] = %d", matrix_data[3]);
    #150000;
    
    $display("Expected results: [5, 5, 5, 5] (diagonal sums)");
  end
  
  initial begin
    $dumpfile("asic_matrix_test.vcd");
    $dumpvars(0, asic_matrix_test_tb);
    
    $display("=== ASIC Top + SimpleEdgeAiSoC + Bootloader Matrix Test ===");
    $display("IP Selection: ip_1 (project_2017)");
    
    wait(rst_n);
    #50000;
    
    #1000000; // 延长到1ms等待所有数据发送和处理完成
    
    $display("Test completed");
    $finish;
  end
  
  // Monitor correct UART TX pin for ip_1
  always @(io_pad64) begin
    $display("Time: %0t, io_pad64 (UART_TX): %b", $time, io_pad64);
  end
  
  // Monitor UART RX pin
  always @(io_pad65) begin
    $display("Time: %0t, io_pad65 (UART_RX): %b", $time, io_pad65);
  end
  
  // Monitor GPIO range for matrix results (32-bit output)
  wire [31:0] gpio_result = {io_pad31, io_pad30, io_pad29, io_pad28, io_pad27, io_pad26, io_pad25, io_pad24,
                            io_pad23, io_pad22, io_pad21, io_pad20, io_pad19, io_pad18, io_pad17, io_pad16,
                            io_pad15, io_pad14, io_pad13, io_pad12, io_pad11, io_pad10, io_pad9, io_pad8,
                            io_pad7, io_pad6, io_pad5, io_pad4, io_pad3, io_pad2, io_pad1, 1'b0};
  
  always @(gpio_result) begin
    if (gpio_result != 0 && gpio_result !== 32'bz) begin
      $display("Time: %0t, GPIO Result: 0x%08x (%d)", $time, gpio_result, gpio_result);
    end
  end
  
endmodule
