#define UART_BASE 0x10000000
#define GPIO_BASE 0x20000000
#define UART_DATA (UART_BASE + 0x0)
#define UART_STATUS (UART_BASE + 0x4)
#define GPIO_OUT (GPIO_BASE + 0x0)

volatile unsigned int *uart_data = (unsigned int*)UART_DATA;
volatile unsigned int *uart_status = (unsigned int*)UART_STATUS;
volatile unsigned int *gpio_out = (unsigned int*)GPIO_OUT;

int main() {
    unsigned char data;
    
    while(1) {
        // Check if UART has data
        if(*uart_status & 0x4) {
            data = *uart_data & 0xFF;
            
            // Output received data to GPIO
            *gpio_out = data;
            
            // Simple processing examples:
            if(data == '1') *gpio_out = 0x01;
            else if(data == '0') *gpio_out = 0x00;
            else if(data >= 'A' && data <= 'Z') *gpio_out = data - 'A' + 1;
            else *gpio_out = data;
        }
    }
    
    return 0;
}
