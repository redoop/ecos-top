.section .text
.globl _start

_start:
    # 基本算术指令测试
    addi x1, x0, 0x100      # x1 = 256
    addi x2, x0, 0x200      # x2 = 512
    add  x3, x1, x2         # x3 = x1 + x2 = 768
    sub  x4, x2, x1         # x4 = x2 - x1 = 256
    
    # 逻辑指令测试
    andi x5, x3, 0xFF       # x5 = x3 & 0xFF
    ori  x6, x5, 0xF00      # x6 = x5 | 0xF00
    xori x7, x6, 0x0F0      # x7 = x6 ^ 0x0F0
    
    # 移位指令测试
    slli x8, x1, 2          # x8 = x1 << 2
    srli x9, x2, 1          # x9 = x2 >> 1
    
    # 分支指令测试
    beq  x1, x1, equal      # 相等分支
    j    end
    
equal:
    addi x10, x0, 0xAA      # 标记测试通过
    
    # 内存访问测试
    lui  x11, 0x10000       # 加载高位立即数
    sw   x10, 0(x11)        # 存储字
    lw   x12, 0(x11)        # 加载字
    
end:
    # 测试结束标记
    addi x31, x0, 0xDEAD
    ebreak                  # 断点指令
