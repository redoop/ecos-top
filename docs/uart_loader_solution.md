# 无JTAG/SPI Flash启动方案

## 方案1：UART Bootloader（最实用）

### 问题：CPU复位后从0x00000000开始执行，但没有ROM代码

### 解决方案：修改硬件设计
```systemverilog
// 修改SimpleEdgeAiSoC.sv中的CPU复位地址
picorv32 #(
    .PROGADDR_RESET(32'h00010000)  // 改为RAM起始地址
) riscv (
    // ... 其他连接
);
```

### 预加载最小UART加载器到RAM
在综合时将UART加载器代码初始化到RAM中：

```systemverilog
// 在ip1_SimpleMemAdapter中初始化RAM
reg [31:0] ram [0:4095];

initial begin
    // UART加载器代码 (地址0x10000开始)
    ram[0] = 32'h20000537;  // lui a0, 0x20000 (UART_BASE)
    ram[1] = 32'h00100593;  // addi a1, zero, 1  
    ram[2] = 32'h00b52423;  // sw a1, 8(a0) (enable UART)
    ram[3] = 32'h00452583;  // lw a1, 4(a0) (read status)
    ram[4] = 32'h0025f593;  // andi a1, a1, 2
    ram[5] = 32'hfe0584e3;  // beqz a1, -8 (wait for data)
    ram[6] = 32'h00052583;  // lw a1, 0(a0) (read data)
    ram[7] = 32'h00010637;  // lui a2, 0x10001 (RAM+256)
    ram[8] = 32'h00b62023;  // sw a1, 0(a2) (store to RAM)
    ram[9] = 32'h00460613;  // addi a2, a2, 4
    ram[10] = 32'hff1ff06f; // j -16 (loop)
end
```

## 方案2：GPIO并行加载

### 使用GPIO作为数据/地址总线
```systemverilog
// 修改GPIO为加载模式
wire boot_mode = gpio_in[31]; // 启动模式选择

always @(posedge clk) begin
    if (boot_mode) begin
        // GPIO[30:16] = 地址
        // GPIO[15:0] = 数据  
        // GPIO[0] = 写使能
        if (gpio_in[0]) begin
            ram[gpio_in[30:18]] <= gpio_in[15:0];
        end
    end
end
```

### 外部加载流程
1. 设置GPIO[31]=1进入加载模式
2. 通过GPIO[30:16]设置地址
3. 通过GPIO[15:0]设置数据
4. 拉高GPIO[0]写入数据
5. 重复直到程序加载完成
6. 设置GPIO[31]=0退出加载模式

## 方案3：I2C/SPI软件模拟

### 使用GPIO模拟I2C接口
```c
// 外部MCU通过GPIO模拟I2C向RAM写入程序
void i2c_write_ram(uint16_t addr, uint8_t data) {
    // 使用GPIO[1:0]作为SDA/SCL
    // 实现I2C协议向芯片RAM写入数据
}
```

## 最简单实现：预加载UART Bootloader

### 修改SimpleEdgeAiSoC.sv
```systemverilog
// 在内存适配器中添加初始化代码
always @(posedge clock) begin
    if (reset) begin
        // 预加载UART bootloader到RAM起始位置
        ram[0] <= 32'h20000537;  // UART bootloader code
        ram[1] <= 32'h00100593;
        // ... 更多指令
    end
    // 正常RAM操作
    if (is_ram_access && io_mem_valid && (|io_mem_wstrb)) begin
        ram[ram_addr] <= io_mem_wdata;
    end
end
```

### 使用方法
1. 芯片复位后自动运行预加载的UART bootloader
2. 通过UART发送程序数据
3. Bootloader将接收到的数据写入RAM
4. 跳转到新程序执行
