#include <stdint.h>

// GPIO base address
#define GPIO_BASE 0x10012000
#define GPIO_OUTPUT_EN (GPIO_BASE + 0x08)
#define GPIO_OUTPUT_VAL (GPIO_BASE + 0x0C)

// Simple matrix algorithm with GPIO output
int main() {
    volatile uint32_t *gpio_oe = (volatile uint32_t *)GPIO_OUTPUT_EN;
    volatile uint32_t *gpio_out = (volatile uint32_t *)GPIO_OUTPUT_VAL;
    
    // Enable GPIO outputs
    *gpio_oe = 0xFFFFFFFF;
    
    // Matrix data (2x2)
    int matrix[4] = {1, 2, 3, 4};
    
    // Compute diagonal sums and output via GPIO
    int result[4];
    result[0] = matrix[0] + matrix[3]; // 1 + 4 = 5
    result[1] = matrix[1] + matrix[2]; // 2 + 3 = 5  
    result[2] = matrix[0] + matrix[3]; // 1 + 4 = 5
    result[3] = matrix[1] + matrix[2]; // 2 + 3 = 5
    
    // Output results via GPIO (one at a time)
    for (int i = 0; i < 4; i++) {
        *gpio_out = result[i];
        // Simple delay
        for (volatile int j = 0; j < 1000; j++);
    }
    
    return 0;
}
