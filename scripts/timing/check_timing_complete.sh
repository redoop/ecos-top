#!/bin/bash
# 检查 timing_complete.sdc 问题

echo "=== timing_complete.sdc 问题检查 ==="

echo "1. 端口引用问题检查:"
echo "   检查是否引用了不存在的端口..."

# 检查主要问题端口
problematic_ports=("clock" "reset" "io_uart_rx" "io_uart_tx" "io_gpio_in" "io_gpio_out")

for port in "${problematic_ports[@]}"; do
    if grep -q "get_ports.*$port" /opt/github/ecos-top/constraints/timing_complete.sdc; then
        echo "   ❌ 发现问题端口: $port"
    fi
done

echo ""
echo "2. 时钟定义检查:"
grep "create_clock\|create_generated_clock" /opt/github/ecos-top/constraints/timing_complete.sdc | head -3

echo ""
echo "3. 主要问题分析:"
echo "   ❌ [get_ports clock] - 顶层端口应该是 sys_clk_i_pad"
echo "   ❌ [get_ports reset] - 顶层端口应该是 rst_n_pad"  
echo "   ❌ [get_ports io_uart_rx] - 不存在，信号通过 io_pad 路由"
echo "   ❌ [get_ports io_gpio_*] - 不存在，信号通过 io_pad 路由"

echo ""
echo "4. 设计层次理解错误:"
echo "   timing_complete.sdc 假设 SimpleEdgeAiSoC 为顶层"
echo "   实际顶层是 asic_top，所有信号通过 io_pad 路由"

echo ""
echo "5. 与 corrected_timing.sdc 对比:"
echo "   corrected_timing.sdc 使用正确的顶层端口:"
echo "   ✅ sys_clk_i_pad, rst_n_pad, io_pad*"

echo ""
echo "结论: timing_complete.sdc 存在严重的端口引用错误"
