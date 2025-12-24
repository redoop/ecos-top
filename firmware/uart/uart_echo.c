#define UART_BASE 0x10013000

int main() {
    volatile unsigned int *uart_data = (unsigned int*)(UART_BASE + 0x0);
    volatile unsigned int *uart_status = (unsigned int*)(UART_BASE + 0x4);
    
    while(1) {
        // Wait for UART RX data
        if(*uart_status & 0x4) {
            unsigned char data = *uart_data & 0xFF;
            
            // Wait for UART TX ready
            while(!(*uart_status & 0x2));
            
            // Echo data back via UART TX
            *uart_data = data;
        }
    }
    return 0;
}
