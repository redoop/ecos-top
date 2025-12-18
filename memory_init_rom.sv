// 方法2：内存初始化文件
module memory_with_bootloader(
    input clk,
    input [31:0] addr,
    input [31:0] wdata,
    input wen,
    output reg [31:0] rdata
);
    reg [31:0] mem [0:1023];
    
    // 初始化ROM区域
    initial begin
        mem[0] = 32'h10013537; // lui a0, 0x10013
        mem[1] = 32'h00452583; // lw a1, 4(a0)
        mem[2] = 32'h0045f593; // andi a1, a1, 4
        mem[3] = 32'hfe058ee3; // beqz a1, -4
        mem[4] = 32'h00052583; // lw a1, 0(a0)
        mem[5] = 32'h00010637; // lui a2, 0x10001
        mem[6] = 32'h00b62023; // sw a1, 0(a2)
        mem[7] = 32'h00460613; // addi a2, a2, 4
        mem[8] = 32'hff1ff06f; // j -16
    end
    
    always @(posedge clk) begin
        if (wen && addr >= 32'h10000) // 只允许写入RAM区域
            mem[addr[11:2]] <= wdata;
        rdata <= mem[addr[11:2]];
    end
endmodule
