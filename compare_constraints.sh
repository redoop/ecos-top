#!/bin/bash
# Compare corrected_timing.sdc vs timing_complete1.sdc

echo "=== 约束文件对比分析 ==="

echo "1. 文件基本信息："
echo "corrected_timing.sdc:"
wc -l /opt/github/ecos-top/constraints/corrected_timing.sdc
echo "timing_complete1.sdc:"
wc -l /opt/github/ecos-top/constraints/timing_complete1.sdc

echo ""
echo "2. 时钟定义对比："
echo "corrected_timing.sdc 时钟："
grep "create_clock\|create_generated_clock" /opt/github/ecos-top/constraints/corrected_timing.sdc

echo ""
echo "timing_complete1.sdc 时钟："
grep "create_clock\|create_generated_clock" /opt/github/ecos-top/constraints/timing_complete1.sdc | head -5

echo ""
echo "3. 端口引用对比："
echo "corrected_timing.sdc 端口："
grep "get_ports" /opt/github/ecos-top/constraints/corrected_timing.sdc | head -5

echo ""
echo "timing_complete1.sdc 端口："
grep "get_ports" /opt/github/ecos-top/constraints/timing_complete1.sdc | head -5

echo ""
echo "4. 关键差异："
echo "✓ corrected: 基于asic_top.sv实际端口"
echo "✗ complete1: 基于假想的SimpleEdgeAiSoC端口"
echo "✓ corrected: 正确的设计层次理解"
echo "✗ complete1: 错误的端口映射"
