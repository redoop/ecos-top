// 简单的GPIO测试程序
#define GPIO_BASE 0x20020000

void main() {
    volatile unsigned int *gpio = (volatile unsigned int*)GPIO_BASE;
    *gpio = 0x13; // 输出19
    while(1); // 无限循环
}
