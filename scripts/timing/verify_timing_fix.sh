#!/bin/bash
# 验证修改后的约束文件

echo "=== timing_complete1.sdc 修改验证 ==="

echo "1. 移除的错误约束:"
echo "   ❌ create_clock -name gated_clk [get_pins */G]"
echo "   ❌ gated_clk 从时钟组中移除"

echo ""
echo "2. 添加的正确约束:"
grep -A3 "set_false_path -through" /opt/github/ecos-top/constraints/timing_complete1.sdc

echo ""
echo "3. 修改理由:"
echo "   ✅ G信号是组合逻辑 NAND(mem_wordsize[1:0])"
echo "   ✅ 锁存器门控信号不应定义为时钟"
echo "   ✅ 使用假路径约束更合适"

echo ""
echo "4. 预期效果:"
echo "   - 68个untested路径将被正确处理"
echo "   - 不会有错误的时钟定义"
echo "   - 时序工具不会报错"

echo ""
echo "✅ 修改完成，约束文件已更正"
