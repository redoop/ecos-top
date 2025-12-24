// GPIO位流加载器 - 通过GPIO引脚加载程序
#define GPIO_BASE 0x20020000
#define RAM_BASE  0x10000

void gpio_load_program() {
    volatile unsigned int *gpio_in = (unsigned int*)GPIO_BASE;
    volatile unsigned int *ram = (unsigned int*)RAM_BASE;
    
    unsigned int addr = 0;
    unsigned int data = 0;
    int bit_count = 0;
    
    while(1) {
        // 读取GPIO输入 (假设GPIO[0]为数据位，GPIO[1]为时钟)
        if((*gpio_in & 0x2) && bit_count < 32) { // 时钟上升沿
            data |= ((*gpio_in & 0x1) << bit_count); // 数据位
            bit_count++;
            
            if(bit_count == 32) {
                ram[addr/4] = data; // 写入RAM
                addr += 4;
                data = 0;
                bit_count = 0;
                
                // 检查结束标志
                if(data == 0xDEADBEEF) break;
            }
        }
    }
    
    // 跳转执行
    void (*program)(void) = (void(*)(void))RAM_BASE;
    program();
}
