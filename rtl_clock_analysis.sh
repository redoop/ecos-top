#!/bin/bash
# RTL Clock Tree Analysis for untested paths

echo "=== RTL时钟树路径分析 ==="

echo "1. 关键发现："
echo "   从综合网表 asic_top_V1210.syn.v 分析："
echo ""

echo "2. 时钟信号追踪："
echo "   n2883 = BUFX3P5H7R(n2783)  # 第326124行"
echo "   n2783 = NAND2X1P4H7R(mem_wordsize[1], mem_wordsize[0])  # 第327047行"
echo ""

echo "3. 寄存器时钟连接："
echo "   mem_la_wdata_reg_0_  .G(n2883)  # 使用n2883作为门控时钟"
echo "   mem_la_wdata_reg_1_  .G(n2883)"
echo "   mem_rdata_word_reg_* .G(n2883)"
echo "   mem_la_wstrb_reg_*   .G(n2883)"
echo ""

echo "4. 时钟源分析："
echo "   n2883 <- n2783 <- NAND(mem_wordsize[1], mem_wordsize[0])"
echo "   这是一个组合逻辑生成的门控信号，不是真正的时钟！"
echo ""

echo "5. 问题根源："
echo "   ❌ n2883/n2783 是组合逻辑信号，不是时钟域"
echo "   ❌ 这些寄存器实际上是锁存器(LATHX0P5H7R)，不是触发器"
echo "   ❌ 门控信号G来自mem_wordsize的组合逻辑"
echo ""

echo "6. 正确的约束策略："
echo "   ✅ 不应该为n2883创建时钟约束"
echo "   ✅ 应该设置为假路径(set_false_path)"
echo "   ✅ 或者设置为准静态信号约束"
echo ""

echo "7. 结论："
echo "   这68个untested路径是合理的，因为："
echo "   - G信号是组合逻辑，不是时钟"
echo "   - 这些是锁存器，不是同步时序逻辑"
echo "   - mem_wordsize是准静态控制信号"
echo ""

echo "✅ 建议：保持这些路径为untested，或设置假路径约束"
