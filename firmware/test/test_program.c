#define GPIO_BASE 0x20020000

int main() {
    volatile int *gpio = (volatile int*)GPIO_BASE;
    *gpio = 0x42;  // Output test value
    return 0;
}
