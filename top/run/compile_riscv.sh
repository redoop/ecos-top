#!/bin/bash

# RISC-V 32位交叉编译工具链
RISCV_PREFIX=riscv32-unknown-elf-

# 编译汇编文件
${RISCV_PREFIX}as -march=rv32i -mabi=ilp32 -o riscv32_test.o riscv32_test.s

# 链接生成ELF文件
${RISCV_PREFIX}ld -T linker.ld -o riscv32_test.elf riscv32_test.o

# 生成二进制文件
${RISCV_PREFIX}objcopy -O binary riscv32_test.elf riscv32_test.bin

# 转换为VMF格式
python3 bin2vmf.py riscv32_test.bin mem_Q128_bottom.vmf

echo "生成完成: mem_Q128_bottom.vmf"
