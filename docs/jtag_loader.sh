#!/bin/bash
# JTAG程序加载脚本

OPENOCD_CFG="openocd.cfg"
PROGRAM_FILE="$1"
LOAD_ADDR="${2:-0x10000}"

# 创建OpenOCD配置
cat > $OPENOCD_CFG << EOF
interface ftdi
ftdi_vid_pid 0x0403 0x6014
ftdi_layout_init 0x0008 0x000b

transport select jtag
adapter_khz 1000

# 目标芯片配置
jtag newtap riscv cpu -irlen 5 -expected-id 0x10e31913
target create riscv.cpu riscv -chain-position riscv.cpu

init
halt

# 加载程序
load_image $PROGRAM_FILE $LOAD_ADDR
resume $LOAD_ADDR

shutdown
EOF

echo "Loading $PROGRAM_FILE to address $LOAD_ADDR via JTAG..."
openocd -f $OPENOCD_CFG

rm -f $OPENOCD_CFG
echo "Program loaded and started"
