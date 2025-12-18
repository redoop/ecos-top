// 无ROM情况下的复位向量配置
module reset_vector_handler(
    input wire clk,
    input wire rst_n,
    input wire [31:0] cpu_addr,
    output reg [31:0] cpu_rdata,
    output reg cpu_ready
);

// 复位向量: 跳转到UART加载器
localparam [31:0] RESET_VECTOR = 32'h10000; // RAM起始地址

always @(*) begin
    if (cpu_addr == 32'h0) begin
        // 复位向量: j 0x10000 (跳转到RAM中的UART驱动)
        cpu_rdata = 32'h0100006f; // jal x0, 0x10000
        cpu_ready = 1'b1;
    end else begin
        cpu_rdata = 32'h0;
        cpu_ready = 1'b0;
    end
end

endmodule
