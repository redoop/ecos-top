#define UART_BASE    0x20000000
#define UART_DATA    (UART_BASE + 0x00)
#define UART_CTRL    (UART_BASE + 0x08)
#define GPIO_BASE    0x20020000
#define BITNET_BASE  0x10001000

typedef struct {
    volatile unsigned int *base;
} bitnet_t;

// 简化的bitnet矩阵计算
int bitnet_matrix_mul(int a[4], int b[4]) {
    bitnet_t bitnet = {(volatile unsigned int*)BITNET_BASE};
    
    // 写入矩阵A到bitnet加速器
    for(int i = 0; i < 4; i++) {
        bitnet.base[i] = a[i];
    }
    
    // 写入矩阵B
    for(int i = 0; i < 4; i++) {
        bitnet.base[4 + i] = b[i];
    }
    
    // 启动计算
    bitnet.base[8] = 1;
    
    // 等待完成并读取结果
    while(bitnet.base[9] == 0);
    return bitnet.base[10];
}

void gpio_write(int value) {
    volatile unsigned int *gpio = (volatile unsigned int*)GPIO_BASE;
    *gpio = value;
}

int main() {
    // 测试矩阵: [[1,2],[3,4]] * [[5,6],[7,8]] = [[19,22],[43,50]]
    int matrix_a[4] = {1, 2, 3, 4};
    int matrix_b[4] = {5, 6, 7, 8};
    
    int result = bitnet_matrix_mul(matrix_a, matrix_b);
    
    // 输出结果到GPIO (取第一个元素19)
    gpio_write(result & 0xFF);
    
    while(1); // 无限循环
}
