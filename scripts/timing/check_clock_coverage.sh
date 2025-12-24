#!/bin/bash
# 检查时钟约束是否正确覆盖路径

echo "=== 时钟约束路径覆盖检查 ==="

echo "1. 我的约束定义："
echo "   create_clock -name gated_clk [get_pins */G]"
echo ""

echo "2. 实际RTL路径："
echo "   mem_la_wdata_reg_0_  .G(n2883)"
echo "   mem_la_wdata_reg_1_  .G(n2883)" 
echo "   mem_rdata_word_reg_* .G(n2883)"
echo "   mem_la_wstrb_reg_*   .G(n2883)"
echo ""

echo "3. 路径匹配分析："
echo "   约束模式: [get_pins */G]"
echo "   实际路径: riscv/mem_*_reg_*/G"
echo "   ✅ 模式匹配: */G 会匹配 riscv/mem_*_reg_*/G"
echo ""

echo "4. 信号源分析："
echo "   n2883 <- n2783 <- NAND(mem_wordsize[1], mem_wordsize[0])"
echo "   这是组合逻辑，不是真正的时钟信号"
echo ""

echo "5. 约束效果预测："
echo "   ✅ 约束会被应用到G引脚"
echo "   ✅ 会创建名为gated_clk的时钟"
echo "   ❌ 但这是错误的，因为G不是时钟信号"
echo ""

echo "6. 问题分析："
echo "   虽然约束语法正确，路径也匹配，"
echo "   但为组合逻辑信号创建时钟约束是错误的"
echo ""

echo "结论: 约束覆盖了路径，但约束本身是错误的"
