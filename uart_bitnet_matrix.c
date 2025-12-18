#define UART_BASE 0x10013000
#define BITNET_BASE 0x10001000

int main() {
    volatile unsigned int *uart_data = (unsigned int*)(UART_BASE + 0x0);
    volatile unsigned int *uart_status = (unsigned int*)(UART_BASE + 0x4);
    volatile unsigned int *bitnet_reg = (unsigned int*)BITNET_BASE;
    
    unsigned char matrix[4] = {0}; // 2x2矩阵
    int count = 0;
    
    while(1) {
        // 接收矩阵数据
        if(*uart_status & 0x4) {
            matrix[count] = *uart_data & 0xFF;
            count++;
            
            // 收到4个数据后使用bitnet加速器计算
            if(count == 4) {
                // 写入矩阵数据到bitnet加速器
                bitnet_reg[0] = (matrix[3] << 24) | (matrix[2] << 16) | (matrix[1] << 8) | matrix[0];
                
                // 启动计算 (写入控制寄存器)
                bitnet_reg[1] = 0x1; // 启动bitnet计算
                
                // 等待计算完成 (轮询状态寄存器)
                while(!(bitnet_reg[2] & 0x1));
                
                // 读取计算结果
                unsigned int result_reg = bitnet_reg[3];
                unsigned char result[4];
                result[0] = result_reg & 0xFF;
                result[1] = (result_reg >> 8) & 0xFF;
                result[2] = (result_reg >> 16) & 0xFF;
                result[3] = (result_reg >> 24) & 0xFF;
                
                // 输出结果
                for(int i = 0; i < 4; i++) {
                    while(!(*uart_status & 0x2)); // 等待TX就绪
                    *uart_data = result[i];
                }
                count = 0; // 重置计数
            }
        }
    }
    return 0;
}
