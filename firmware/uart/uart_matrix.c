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
                // 2x2矩阵乘法: [a b] * [a b] = [a²+bc ab+bd]
                //              [c d]   [c d]   [ac+cd bc+d²]
                unsigned char result[4];
                result[0] = matrix[0]*matrix[0] + matrix[1]*matrix[2]; // a²+bc
                result[1] = matrix[0]*matrix[1] + matrix[1]*matrix[3]; // ab+bd
                result[2] = matrix[2]*matrix[0] + matrix[3]*matrix[2]; // ac+cd
                result[3] = matrix[2]*matrix[1] + matrix[3]*matrix[3]; // bc+d²
                
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
