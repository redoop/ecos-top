#!/bin/bash

# asic_top 网表仿真快速使用指南

echo "=========================================="
echo "asic_top 网表仿真 - 快速使用指南"
echo "=========================================="
echo ""

# 显示当前状态
echo "📊 当前状态:"
PROJECT_DIR="/Users/tongxiaojun/ecos-top/iverilog"
cd "$PROJECT_DIR"

# 检查文件
echo ""
echo "📁 文件检查:"
echo "  网表文件: $(ls -lh netlist/asic_top_V1210.syn.v | awk '{print $5, $9}')"
echo "  工艺库: "
echo "    - $(ls -lh netlist/ics55_LLSC_H7CL.v | awk '{print $5, $9}')"
echo "    - $(ls -lh netlist/ics55_LLSC_H7CR.v | awk '{print $5, $9}')"
echo "  Testbench: $(ls -lh tb/asic_top_netlist_tb.sv | awk '{print $5, $9}')"

# 检查编译结果
echo ""
echo "⚙️ 编译结果:"
if [ -f work/asic_top_netlist ]; then
    echo "  ✅ 可执行文件: $(ls -lh work/asic_top_netlist | awk '{print $5, $9}')"
    echo "  编译日志大小: $(ls -lh work/compile.log | awk '{print $5}')"
else
    echo "  ❌ 可执行文件未找到"
fi

# 检查仿真状态
echo ""
echo "▶️ 仿真状态:"
if ps aux | grep "vvp -n" | grep -v grep > /dev/null; then
    RUNTIME=$(ps aux | grep "vvp -n" | grep -v grep | awk '{print $11}')
    echo "  🔄 仿真运行中..."
    echo "  运行时间: $RUNTIME"
    echo "  CPU 使用: $(ps aux | grep 'vvp -n' | grep -v grep | awk '{printf "%.1f%%", $3}')"
else
    echo "  ✅ 仿真已完成"
fi

# 检查输出文件
echo ""
echo "📊 输出文件:"
if [ -f work/asic_top_netlist.vcd ]; then
    VCD_SIZE=$(ls -lh work/asic_top_netlist.vcd | awk '{print $5}')
    echo "  VCD 文件: $VCD_SIZE ($(ls -l work/asic_top_netlist.vcd | awk '{print $9}'))"
else
    echo "  VCD 文件: 等待中..."
fi

# 显示日志统计
echo ""
echo "📝 日志统计:"
if [ -f work/compile.log ]; then
    WARN_COUNT=$(grep -c "warning:" work/compile.log 2>/dev/null || echo "0")
    echo "  编译警告: $WARN_COUNT"
fi

echo ""
echo "=========================================="
echo "💡 常用命令:"
echo "=========================================="
echo ""
echo "1. 运行仿真:"
echo "   bash run_sim.sh"
echo ""
echo "2. 使用 Makefile:"
echo "   make all          # 编译并仿真"
echo "   make compile      # 仅编译"
echo "   make clean        # 清理"
echo ""
echo "3. 查看波形（仿真完成后）:"
echo "   gtkwave work/asic_top_netlist.vcd"
echo ""
echo "4. 查看日志:"
echo "   cat work/compile.log"
echo "   cat work/simulation.log"
echo ""
echo "=========================================="
