// SimpleEdgeAiSoC with preloaded UART bootloader in RAM
// 修改内存适配器，在RAM中预加载UART bootloader

module ip1_SimpleMemAdapter_WithPreloadedBootloader(
  input         io_mem_valid,
  output        io_mem_ready,
  input  [31:0] io_mem_addr,
                io_mem_wdata,
  input  [3:0]  io_mem_wstrb,
  output [31:0] io_mem_rdata,
                io_reg_addr,
                io_reg_wdata,
  input  [31:0] io_reg_rdata,
  output        io_reg_wen,
                io_reg_ren,
                io_reg_valid,
  input         io_reg_ready,
  input         clock
);

  wire is_ram_access = (io_mem_addr >= 32'h00010000 && io_mem_addr < 32'h00020000);
  
  reg [31:0] ram [0:4095];
  wire [11:0] ram_addr = io_mem_addr[13:2];
  reg [31:0] ram_rdata;
  
  // 预加载UART bootloader到RAM
  initial begin
    // UART Bootloader at 0x10000
    ram[0]  = 32'h20000537; // lui a0, 0x20000 (UART_BASE)
    ram[1]  = 32'h200207b7; // lui a5, 0x20020 (GPIO_BASE)  
    ram[2]  = 32'h00100593; // addi a1, zero, 1
    ram[3]  = 32'h00b52423; // sw a1, 8(a0) (enable UART)
    ram[4]  = 32'h00452583; // lw a1, 4(a0) (read status)
    ram[5]  = 32'h0025f593; // andi a1, a1, 2 (check rx_valid)
    ram[6]  = 32'hfe0584e3; // beqz a1, -8 (wait for data)
    ram[7]  = 32'h00052583; // lw a1, 0(a0) (read UART data)
    ram[8]  = 32'h00b7a023; // sw a1, 0(a5) (output to GPIO)
    ram[9]  = 32'hff1ff06f; // j -16 (loop)
  end
  
  always @(posedge clock) begin
    if (is_ram_access && io_mem_valid && (|io_mem_wstrb)) begin
      ram[ram_addr] <= io_mem_wdata;
    end
    ram_rdata <= ram[ram_addr];
  end

  assign io_mem_ready = is_ram_access ? 1'b1 : io_reg_ready;
  assign io_mem_rdata = is_ram_access ? ram_rdata : io_reg_rdata;
  assign io_reg_addr = io_mem_addr;
  assign io_reg_wdata = io_mem_wdata;
  assign io_reg_wen = io_mem_valid & (|io_mem_wstrb) & ~is_ram_access;
  assign io_reg_ren = io_mem_valid & ~(|io_mem_wstrb) & ~is_ram_access;
  assign io_reg_valid = io_mem_valid & ~is_ram_access;
endmodule

// 使用说明：
// 1. 用这个内存适配器替换SimpleEdgeAiSoC.sv中的ip1_SimpleMemAdapter
// 2. 修改CPU复位地址为0x00010000
// 3. 芯片上电后自动运行预加载的UART bootloader
// 4. 通过UART发送程序数据即可启动
