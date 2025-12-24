# 无ROM硬件启动指南

## 方法1：JTAG调试接口启动

### 1. 连接JTAG调试器
- 连接OpenOCD或类似JTAG调试器到芯片
- 配置JTAG链和CPU调试接口

### 2. 加载程序到RAM
```bash
# 使用OpenOCD加载程序
openocd -f interface/ftdi/olimex-arm-usb-ocd.cfg \
        -f target/riscv32.cfg \
        -c "init" \
        -c "halt" \
        -c "load_image program.bin 0x10000" \
        -c "reg pc 0x10000" \
        -c "resume" \
        -c "exit"
```

### 3. 程序存储位置
- RAM地址：0x00010000 - 0x0001FFFF (64KB)
- 设置PC寄存器指向程序入口地址

## 方法2：外部SPI Flash启动

### 1. 添加外部SPI Flash接口
- 连接SPI Flash到GPIO或专用SPI接口
- 实现简单的SPI读取逻辑

### 2. 修改复位向量
```systemverilog
// 修改CPU复位地址指向RAM
parameter [31:0] PROGADDR_RESET = 32'h00010000; // RAM起始地址
```

### 3. 预加载程序到Flash
- 将程序烧录到外部SPI Flash
- 通过外部电路或初始化代码将Flash内容复制到RAM

## 方法3：UART加载器

### 1. 实现最小UART加载器
```c
// 最小UART加载器 (需要预先加载到RAM)
void uart_loader() {
    volatile uint32_t *uart_data = (uint32_t*)0x20000000;
    volatile uint32_t *uart_status = (uint32_t*)0x20000004;
    volatile uint32_t *uart_ctrl = (uint32_t*)0x20000008;
    uint32_t *ram_ptr = (uint32_t*)0x10000;
    
    *uart_ctrl = 1; // 使能UART
    
    while(1) {
        if (*uart_status & 0x2) { // rx_valid
            *ram_ptr++ = *uart_data;
        }
    }
}
```

### 2. 通过JTAG加载UART加载器
- 先用JTAG加载最小UART加载器到RAM
- 然后通过UART发送实际程序

## 方法4：GPIO位流加载

### 1. 使用GPIO作为并行接口
- 配置GPIO为输入模式
- 实现简单的并行数据加载协议

### 2. 外部微控制器辅助
- 使用外部MCU通过GPIO向RAM写入程序
- MCU控制地址和数据总线

## 推荐方案

对于开发阶段：**JTAG + OpenOCD**
对于生产部署：**外部SPI Flash + 预加载程序**

## 注意事项

1. **RAM大小限制**：只有64KB RAM可用
2. **程序大小**：确保程序适合RAM空间
3. **复位向量**：必须修改CPU复位地址指向RAM
4. **调试接口**：确保芯片包含JTAG调试功能
