// 方法1：硬编码指令ROM
module instruction_rom(
    input [31:0] addr,
    output reg [31:0] data
);
    always @(*) begin
        case(addr[7:2]) // 字对齐地址
            6'h00: data = 32'h10013537; // lui a0, 0x10013 (UART_BASE)
            6'h01: data = 32'h00452583; // lw a1, 4(a0) (读状态)
            6'h02: data = 32'h0045f593; // andi a1, a1, 4 (检查rx_valid)
            6'h03: data = 32'hfe058ee3; // beqz a1, -4 (等待数据)
            6'h04: data = 32'h00052583; // lw a1, 0(a0) (读数据)
            6'h05: data = 32'h00010637; // lui a2, 0x10001 (目标地址)
            6'h06: data = 32'h00b62023; // sw a1, 0(a2) (存储到内存)
            6'h07: data = 32'h00460613; // addi a2, a2, 4 (地址+4)
            6'h08: data = 32'hff1ff06f; // j -16 (循环)
            default: data = 32'h00000013; // nop
        endcase
    end
endmodule
