// ASIC Top level test for matrix algorithm with standard interfaces
module asic_matrix_test_tb;
  reg sys_clk = 0;
  reg rst_n = 0;
  reg [2:0] ip_sel = 3'b001; // Select ip_1 (project_2017)
  
  // Clock generation
  always #5 sys_clk = ~sys_clk;
  
  initial begin
    #20 rst_n = 1;
  end
  
  // IO pads - declare as wires for inout ports
  wire io_pad0, io_pad1, io_pad2, io_pad3, io_pad4, io_pad5, io_pad6, io_pad7;
  wire io_pad8, io_pad9, io_pad10, io_pad11, io_pad12, io_pad13, io_pad14, io_pad15;
  wire io_pad16, io_pad17, io_pad18, io_pad19, io_pad20, io_pad21, io_pad22, io_pad23;
  wire io_pad24, io_pad25, io_pad26, io_pad27, io_pad28, io_pad29, io_pad30, io_pad31;
  wire io_pad32, io_pad33, io_pad34, io_pad35, io_pad36, io_pad37, io_pad38, io_pad39;
  wire io_pad40, io_pad41, io_pad42, io_pad43, io_pad44, io_pad45, io_pad46, io_pad47;
  wire io_pad48, io_pad49, io_pad50, io_pad51, io_pad52, io_pad53, io_pad54, io_pad55;
  wire io_pad56, io_pad57, io_pad58, io_pad59, io_pad60, io_pad61, io_pad62, io_pad63;
  wire io_pad64, io_pad65, io_pad66, io_pad67, io_pad68, io_pad69, io_pad70, io_pad71;
  wire io_pad72, io_pad73, io_pad74, io_pad75, io_pad76, io_pad77, io_pad78, io_pad79;
  wire io_pad80, io_pad81;
  
  // UART control - use correct pins for ip_1
  reg uart_rx_drive = 1;
  assign io_pad65 = uart_rx_drive; // UART RX input (ip1_io_uart_rx)
  
  // Monitor UART TX output (io_pad64 = ip1_io_uart_tx)
  wire uart_tx = io_pad64;
  
  // UART timing parameters
  parameter UART_BIT_PERIOD = 8680; // 115200 baud = 8680 time units per bit
  
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
      // Start bit
      uart_rx_drive = 0;
      #8680; // 115200 baud
      
      // Data bits (LSB first)
      for (i = 0; i < 8; i = i + 1) begin
        uart_rx_drive = data[i];
        #8680;
      end
      
      // Stop bit
      uart_rx_drive = 1;
      #8680;
    end
  endtask
  
  // UART receive task
  task receive_uart_byte(output [7:0] data);
    integer i;
    begin
      // Wait for start bit
      wait(io_pad64 == 0);
      #(UART_BIT_PERIOD/2); // Sample at middle of start bit
      
      // Receive 8 data bits (LSB first)
      for (i = 0; i < 8; i = i + 1) begin
        #UART_BIT_PERIOD;
        data[i] = io_pad64;
      end
      
      // Wait for stop bit
      #UART_BIT_PERIOD;
    end
  endtask

  // Matrix data injection and GPIO result monitoring
  initial begin
    #100000; // Wait for system initialization
    
    $display("=== ASIC Top + SimpleEdgeAiSoC + Matrix Test ===");
    $display("IP Selection: ip_1 (project_2017)");
    
    // Send matrix data: [1, 2, 3, 4]
    send_uart_byte(8'h01);
    $display("Injected matrix[0] = %3d", 1);
    
    send_uart_byte(8'h02);
    $display("Injected matrix[1] = %3d", 2);
    
    send_uart_byte(8'h03);
    $display("Injected matrix[2] = %3d", 3);
    
    send_uart_byte(8'h04);
    $display("Injected matrix[3] = %3d", 4);
    
    $display("Expected results: [5, 5, 5, 5] (diagonal sums)");
    $display("Waiting for GPIO results...");
    
    // Wait for processing and monitor GPIO periodically
    #1000000; // 1ms
    $display("Time: %0t, GPIO[63:32]: 0x%08x", $time, gpio_result);
    
    #2000000; // 2ms
    $display("Time: %0t, GPIO[63:32]: 0x%08x", $time, gpio_result);
    
    #2000000; // 2ms more
    $display("Time: %0t, GPIO[63:32]: 0x%08x", $time, gpio_result);
    
    $display("Test completed");
    $finish;
  end
  
  // Monitor GPIO range for matrix results (32-bit output) - ip1 uses io_pad[63:32]
  wire [31:0] gpio_result = {io_pad63, io_pad62, io_pad61, io_pad60, io_pad59, io_pad58, io_pad57, io_pad56,
                            io_pad55, io_pad54, io_pad53, io_pad52, io_pad51, io_pad50, io_pad49, io_pad48,
                            io_pad47, io_pad46, io_pad45, io_pad44, io_pad43, io_pad42, io_pad41, io_pad40,
                            io_pad39, io_pad38, io_pad37, io_pad36, io_pad35, io_pad34, io_pad33, io_pad32};
  
  always @(gpio_result) begin
    if (gpio_result != 0 && gpio_result !== 32'bz) begin
      $display("Time: %0t, GPIO Result: 0x%08x (%d)", $time, gpio_result, gpio_result);
    end
  end
  
  // Monitor UART TX
  always @(io_pad64) begin
    $display("Time: %0t, io_pad64 (UART_TX): %b", $time, io_pad64);
  end
  
  // Monitor UART RX
  always @(io_pad65) begin
    $display("Time: %0t, io_pad65 (UART_RX): %b", $time, io_pad65);
  end
  
  // Additional monitoring for debugging
  initial begin
    $monitor("Time: %0t, TX=%b, RX=%b", $time, io_pad64, io_pad65);
  end
  
  // VCD dump
  initial begin
    $dumpfile("asic_matrix_test.vcd");
    $dumpvars(0, asic_matrix_test_tb);
  end
  
  // Timeout
  initial begin
    #1000000; // 1ms timeout
    $display("Simulation timeout");
    $finish;
  end
  
endmodule
