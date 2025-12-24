#!/bin/bash
# 对比分析 ip1_timing.sdc vs timing_complete.sdc

echo "=== 约束文件对比分析 ==="

echo "1. 端口引用对比:"
echo ""
echo "ip1_timing.sdc (正确):"
echo "   ✅ [get_ports clock]  - 匹配IP模块端口"
echo "   ✅ [get_ports reset]  - 匹配IP模块端口"
echo ""
echo "timing_complete.sdc (错误):"
echo "   ❌ [get_ports clock]  - 同名但上下文错误"
echo "   ❌ [get_ports reset]  - 同名但上下文错误"
echo "   ❌ [get_ports io_uart_rx] - IP内部信号，非端口"
echo "   ❌ [get_ports io_uart_tx] - IP内部信号，非端口"
echo "   ❌ [get_ports io_gpio_*] - IP内部信号，非端口"

echo ""
echo "2. 设计层次理解:"
echo ""
echo "ip1_timing.sdc:"
echo "   ✅ 正确理解: 针对IP模块本身"
echo "   ✅ 端口匹配: IP模块的实际端口"
echo ""
echo "timing_complete.sdc:"
echo "   ❌ 混淆层次: 将IP内部信号当作端口"
echo "   ❌ 错误假设: 认为IP直接连接外部"

echo ""
echo "3. 约束数量对比:"
ip1_count=$(grep -c "^create_clock\|^set_" /opt/github/ecos-top/constraints/ip1_timing.sdc)
complete_count=$(grep -c "^create_clock\|^set_" /opt/github/ecos-top/constraints/timing_complete.sdc)
echo "   ip1_timing.sdc: $ip1_count 条约束"
echo "   timing_complete.sdc: $complete_count 条约束"

echo ""
echo "4. 主要问题总结:"
echo "   ❌ 端口引用错误 - 大量不存在的端口"
echo "   ❌ 设计理解错误 - 混淆IP内部信号与端口"
echo "   ❌ 约束冗余 - 包含大量无效约束"
echo "   ❌ 复杂度过高 - 不必要的复杂性"

echo ""
echo "5. 实际影响:"
echo "   timing_complete.sdc 会导致:"
echo "   🔴 约束失效 - 端口不存在"
echo "   🔴 工具报错 - 无法找到端口"
echo "   🔴 时序风险 - 实际信号未约束"
