#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

// GPIO control
void gpio_write(int pin, int value) {
    char path[50];
    sprintf(path, "/sys/class/gpio/gpio%d/value", pin);
    int fd = open(path, O_WRONLY);
    if (fd >= 0) {
        write(fd, value ? "1" : "0", 1);
        close(fd);
    }
}

void gpio_export(int pin) {
    int fd = open("/sys/class/gpio/export", O_WRONLY);
    if (fd >= 0) {
        char pin_str[10];
        sprintf(pin_str, "%d", pin);
        write(fd, pin_str, strlen(pin_str));
        close(fd);
    }
}

void gpio_set_direction(int pin, const char* direction) {
    char path[50];
    sprintf(path, "/sys/class/gpio/gpio%d/direction", pin);
    int fd = open(path, O_WRONLY);
    if (fd >= 0) {
        write(fd, direction, strlen(direction));
        close(fd);
    }
}

int main() {
    const char* uart_device = "/dev/ttyUSB0";
    int gpio_pin = 18;
    
    // Setup GPIO
    gpio_export(gpio_pin);
    usleep(100000);
    gpio_set_direction(gpio_pin, "out");
    
    // Setup UART
    int uart_fd = open(uart_device, O_RDWR | O_NOCTTY);
    if (uart_fd < 0) {
        printf("Failed to open UART\n");
        return 1;
    }
    
    struct termios options;
    tcgetattr(uart_fd, &options);
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);
    options.c_cflag |= (CLOCAL | CREAD);
    options.c_cflag &= ~PARENB;
    options.c_cflag &= ~CSTOPB;
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= CS8;
    tcsetattr(uart_fd, TCSANOW, &options);
    
    printf("UART-GPIO test ready. Send data via UART...\n");
    
    char buffer[256];
    while (1) {
        int bytes = read(uart_fd, buffer, sizeof(buffer) - 1);
        if (bytes > 0) {
            buffer[bytes] = '\0';
            printf("Received: %s", buffer);
            
            // Process input and control GPIO
            if (strstr(buffer, "ON") || strstr(buffer, "1")) {
                gpio_write(gpio_pin, 1);
                printf("GPIO %d: HIGH\n", gpio_pin);
            } else if (strstr(buffer, "OFF") || strstr(buffer, "0")) {
                gpio_write(gpio_pin, 0);
                printf("GPIO %d: LOW\n", gpio_pin);
            }
        }
    }
    
    close(uart_fd);
    return 0;
}
