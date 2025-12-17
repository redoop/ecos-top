#!/bin/bash

# RISC-V Test Program Compilation Script
# Compiles the RISC-V test program for IP1 SimpleEdgeAiSoC

echo "=== Compiling RISC-V Test Program ==="

# Check if RISC-V toolchain is available
if ! command -v riscv32-unknown-elf-gcc &> /dev/null; then
    echo "Warning: RISC-V toolchain not found, using generic compilation"
    echo "Please install riscv32-unknown-elf-gcc for proper compilation"
    
    # Create a dummy binary for simulation
    echo "Creating dummy test binary..."
    echo -e "RISC-V Test Program Binary\nCompiled for IP1 SimpleEdgeAiSoC" > riscv_test.bin
    echo "Dummy binary created: riscv_test.bin"
    exit 0
fi

# Compilation settings
CC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
OBJDUMP=riscv32-unknown-elf-objdump

# Compiler flags
CFLAGS="-march=rv32i -mabi=ilp32 -O2 -nostdlib -nostartfiles"
LDFLAGS="-T linker.ld -nostdlib"

echo "Compiling riscv_test_program.c..."

# Compile the test program
$CC $CFLAGS -c riscv_test_program.c -o riscv_test.o

if [ $? -ne 0 ]; then
    echo "Error: Compilation failed"
    exit 1
fi

echo "Linking..."

# Link the program
$CC $LDFLAGS riscv_test.o -o riscv_test.elf

if [ $? -ne 0 ]; then
    echo "Error: Linking failed"
    exit 1
fi

echo "Creating binary..."

# Create binary file
$OBJCOPY -O binary riscv_test.elf riscv_test.bin

# Create disassembly for debugging
$OBJDUMP -d riscv_test.elf > riscv_test.dis

echo "Creating memory file..."

# Convert binary to VMF format for simulation
if [ -f "bin2vmf.py" ]; then
    python3 bin2vmf.py riscv_test.bin riscv_test.vmf
    echo "Memory file created: riscv_test.vmf"
else
    echo "Warning: bin2vmf.py not found, creating simple hex dump"
    hexdump -v -e '1/4 "%08x\n"' riscv_test.bin > riscv_test.vmf
fi

echo "=== Compilation Complete ==="
echo "Files generated:"
echo "  - riscv_test.elf (ELF executable)"
echo "  - riscv_test.bin (Binary file)"
echo "  - riscv_test.dis (Disassembly)"
echo "  - riscv_test.vmf (Memory file for simulation)"

# Show program size
if command -v riscv32-unknown-elf-size &> /dev/null; then
    echo ""
    echo "Program size:"
    riscv32-unknown-elf-size riscv_test.elf
fi

echo ""
echo "Ready for simulation!"
