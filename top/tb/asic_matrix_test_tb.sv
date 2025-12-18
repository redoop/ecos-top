// ASIC Top level test for uart_matrix_simple.c with bootloader
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
  
  // UART control
  reg uart_rx_drive = 1;
  assign io_pad0 = uart_rx_drive; // UART RX input
  
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
  
  // Add ROM to SoC
  wire [31:0] rom_data;
  wire is_rom_access = (u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr < 32'h00000100);
  
  ip1_BootROM bootrom (
    .clock(u_asic_top.ip1_clk_100m),
    .addr(u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr),
    .data(rom_data)
  );
  
  always @(*) begin
    if (is_rom_access) begin
      force u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_ready = 1'b1;
      force u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata = rom_data;
    end else begin
      release u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_ready;
      release u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata;
    end
  end
  
  // Matrix data injection
  reg [7:0] matrix_data [0:3];
  reg [1:0] matrix_count = 0;
  
  initial begin
    matrix_data[0] = 8'h01;
    matrix_data[1] = 8'h02;
    matrix_data[2] = 8'h03;
    matrix_data[3] = 8'h04;
  end
  
  always @(posedge u_asic_top.ip1_clk_100m) begin
    if (u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_valid && 
        u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr == 32'h20000004 && 
        u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata == 32'h8 && 
        matrix_count < 4) begin
      #1000;
      force u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_valid = 1;
      force u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_bits = matrix_data[matrix_count];
      #10;
      release u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_valid;
      release u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_bits;
      $display("Injected matrix[%0d] = %d", matrix_count, matrix_data[matrix_count]);
      matrix_count = matrix_count + 1;
    end
  end
  
  initial begin
    $dumpfile("asic_matrix_test.vcd");
    $dumpvars(0, asic_matrix_test_tb);
    
    $display("=== ASIC Top + SimpleEdgeAiSoC + Bootloader Matrix Test ===");
    $display("IP Selection: ip_1 (project_2017)");
    
    wait(rst_n);
    #50000;
    
    $display("UART Control: 0x%08x", u_asic_top.u_SimpleEdgeAiSoC.uart.uart.control);
    
    #500000;
    
    $display("GPIO Output: 0x%08x", u_asic_top.u_SimpleEdgeAiSoC.io_gpio_out);
    $display("Test completed");
    $finish;
  end
  
  // Monitor GPIO output
  always @(u_asic_top.u_SimpleEdgeAiSoC.io_gpio_out) begin
    if (u_asic_top.u_SimpleEdgeAiSoC.io_gpio_out != 0) begin
      $display("Time: %0t, GPIO: 0x%08x (%d)", 
               $time, 
               u_asic_top.u_SimpleEdgeAiSoC.io_gpio_out,
               u_asic_top.u_SimpleEdgeAiSoC.io_gpio_out[7:0]);
    end
  end
  
endmodule
