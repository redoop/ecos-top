#!/usr/bin/env python3

def generate_riscv32_vmf():
    """生成RISC-V 32位测试指令的VMF文件"""
    
    instructions = [
        0x10000093,  # addi x1, x0, 0x100
        0x20000113,  # addi x2, x0, 0x200  
        0x002081b3,  # add  x3, x1, x2
        0x40110233,  # sub  x4, x2, x1
        0x0ff1f293,  # andi x5, x3, 0xFF
        0xf002e313,  # ori  x6, x5, 0xF00
        0x0f034393,  # xori x7, x6, 0x0F0
        0x00209413,  # slli x8, x1, 2
        0x0011d493,  # srli x9, x2, 1
        0x00108463,  # beq  x1, x1, +8
        0x0aa00513,  # addi x10, x0, 0xAA
        0x100005b7,  # lui  x11, 0x10000
        0x00a5a023,  # sw   x10, 0(x11)
        0x0005a603,  # lw   x12, 0(x11)
        0xdead0f93,  # addi x31, x0, 0xDEAD
        0x00100073,  # ebreak
    ]
    
    with open('mem_Q128_bottom.vmf', 'w') as f:
        f.write("// RISC-V 32-bit test program VMF file\n")
        f.write("// Generated for VCS simulation\n\n")
        
        for i, instr in enumerate(instructions):
            addr = i * 4
            f.write(f"@{addr:08X} {instr:08X}\n")
    
    print("已生成 mem_Q128_bottom.vmf 文件")

if __name__ == "__main__":
    generate_riscv32_vmf()
