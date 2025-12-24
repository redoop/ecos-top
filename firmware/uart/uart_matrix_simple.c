#define UART_BASE 0x10013000

int main() {
    volatile unsigned int *uart_data = (unsigned int*)(UART_BASE + 0x0);
    volatile unsigned int *uart_status = (unsigned int*)(UART_BASE + 0x4);
    
    unsigned char matrix[4] = {0}; // 2x2矩阵
    int count = 0;
    
    while(1) {
        // 接收矩阵数据
        if(*uart_status & 0x4) {
            matrix[count] = *uart_data & 0xFF;
            count++;
            
            // 收到4个数据后进行矩阵计算
            if(count == 4) {
                // 简单矩阵运算: 转置 + 加法
                unsigned char result[4];
                result[0] = matrix[0] + matrix[3]; // a + d (对角线和)
                result[1] = matrix[1] + matrix[2]; // b + c (反对角线和)
                result[2] = matrix[2] + matrix[1]; // 转置后的b + c
                result[3] = matrix[3] + matrix[0]; // 转置后的d + a
                
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
