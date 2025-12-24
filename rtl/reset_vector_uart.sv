// 硬件复位向量 - 直接跳转到UART处理逻辑
module reset_vector_uart(
    input wire clk,
    input wire rst_n,
    input wire [31:0] pc,
    output reg [31:0] instruction
);

// 硬编码的UART驱动指令序列
always @(*) begin
    case(pc[7:2])
        6'h00: instruction = 32'h10013537; // lui a0, 0x10013 (UART_BASE)
        6'h01: instruction = 32'h00100593; // addi a1, zero, 1
        6'h02: instruction = 32'h00b52423; // sw a1, 8(a0) (enable UART)
        6'h03: instruction = 32'h00452583; // lw a1, 4(a0) (status)
        6'h04: instruction = 32'h0045f593; // andi a1, a1, 4 (rx_valid)
        6'h05: instruction = 32'hfe0584e3; // beqz a1, -4 (wait)
        6'h06: instruction = 32'h00052583; // lw a1, 0(a0) (data)
        6'h07: instruction = 32'h00452603; // lw a2, 4(a0) (status)
        6'h08: instruction = 32'h00267613; // andi a2, a2, 2 (tx_ready)
        6'h09: instruction = 32'hfe0604e3; // beqz a2, -4 (wait tx)
        6'h0A: instruction = 32'h00b52023; // sw a1, 0(a0) (echo)
        6'h0B: instruction = 32'hfe9ff06f; // j -24 (loop back)
        default: instruction = 32'h00000013; // nop
    endcase
end

endmodule
