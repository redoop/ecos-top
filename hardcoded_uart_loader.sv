// 硬编码UART加载器 - 直接在RTL中实现
module hardcoded_uart_loader(
    input wire clk,
    input wire rst_n,
    input wire uart_rx,
    output reg uart_tx,
    output reg [31:0] ram_addr,
    output reg [31:0] ram_wdata,
    output reg ram_wen,
    output reg cpu_start
);

// UART接收状态机
reg [2:0] rx_state;
reg [3:0] bit_count;
reg [7:0] rx_data;
reg [31:0] load_addr;
reg [31:0] word_buffer;
reg [1:0] byte_count;

always @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
        rx_state <= 0;
        bit_count <= 0;
        load_addr <= 32'h10000;
        byte_count <= 0;
        ram_wen <= 0;
        cpu_start <= 0;
    end else begin
        case(rx_state)
            0: if(!uart_rx) rx_state <= 1; // 检测起始位
            1: begin // 接收数据位
                if(bit_count < 8) begin
                    rx_data[bit_count] <= uart_rx;
                    bit_count <= bit_count + 1;
                end else begin
                    rx_state <= 2;
                    bit_count <= 0;
                end
            end
            2: begin // 停止位
                rx_state <= 0;
                
                // 组装32位字
                case(byte_count)
                    0: word_buffer[7:0] <= rx_data;
                    1: word_buffer[15:8] <= rx_data;
                    2: word_buffer[23:16] <= rx_data;
                    3: begin
                        word_buffer[31:24] <= rx_data;
                        // 写入RAM
                        ram_addr <= load_addr;
                        ram_wdata <= {rx_data, word_buffer[23:0]};
                        ram_wen <= 1;
                        load_addr <= load_addr + 4;
                        
                        // 检查结束标志
                        if({rx_data, word_buffer[23:0]} == 32'hDEADBEEF) begin
                            cpu_start <= 1; // 启动CPU
                        end
                    end
                endcase
                
                byte_count <= byte_count + 1;
                if(ram_wen) ram_wen <= 0;
            end
        endcase
    end
end

endmodule
