// 最小UART驱动 - 无ROM Bootloader版本
#define UART_BASE 0x10013000
#define RAM_BASE  0x10000

// 直接寄存器操作
static inline void uart_init() {
    volatile unsigned int *uart_ctrl = (unsigned int*)(UART_BASE + 0x8);
    *uart_ctrl = 0x1; // 使能UART
}

static inline unsigned char uart_getc() {
    volatile unsigned int *uart_data = (unsigned int*)(UART_BASE + 0x0);
    volatile unsigned int *uart_status = (unsigned int*)(UART_BASE + 0x4);
    
    while(!(*uart_status & 0x4)); // 等待接收数据
    return *uart_data & 0xFF;
}

static inline void uart_putc(unsigned char c) {
    volatile unsigned int *uart_data = (unsigned int*)(UART_BASE + 0x0);
    volatile unsigned int *uart_status = (unsigned int*)(UART_BASE + 0x4);
    
    while(!(*uart_status & 0x2)); // 等待发送就绪
    *uart_data = c;
}

// 程序加载器
void load_program() {
    unsigned char cmd[4];
    unsigned int addr, size;
    volatile unsigned int *ram = (unsigned int*)RAM_BASE;
    
    // 读取命令
    for(int i = 0; i < 4; i++) cmd[i] = uart_getc();
    
    // 读取地址和大小
    addr = uart_getc() | (uart_getc() << 8) | (uart_getc() << 16) | (uart_getc() << 24);
    size = uart_getc() | (uart_getc() << 8) | (uart_getc() << 16) | (uart_getc() << 24);
    
    if(cmd[0] == 'L' && cmd[1] == 'O' && cmd[2] == 'A' && cmd[3] == 'D') {
        // 加载程序到RAM
        for(unsigned int i = 0; i < size; i += 4) {
            unsigned int word = uart_getc() | (uart_getc() << 8) | 
                               (uart_getc() << 16) | (uart_getc() << 24);
            ram[(addr + i) / 4] = word;
        }
    } else if(cmd[0] == 'E' && cmd[1] == 'X' && cmd[2] == 'E' && cmd[3] == 'C') {
        // 跳转执行
        void (*program)(void) = (void(*)(void))addr;
        program();
    }
}

int main() {
    uart_init();
    
    while(1) {
        load_program();
    }
    
    return 0;
}
