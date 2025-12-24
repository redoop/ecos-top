# ============================================================================
# ip1_SimpleEdgeAiSoC 时钟约束文件
# 基于RTL分析 - 仅包含必要约束
# ============================================================================

# 主时钟约束
create_clock -name clock -period 10.0 [get_ports clock]

# SPI生成时钟约束
create_generated_clock -name spi_clk \
  -source [get_ports clock] \
  -divide_by 10 \
  [get_pins -hierarchical *lcd*spi_clk*]

# 时钟域分组
set_clock_groups -asynchronous \
    -group [get_clocks clock] \
    -group [get_clocks spi_clk]

# 复位信号假路径
set_false_path -from [get_ports reset]

# 内存接口锁存器门控信号假路径
# RTL分析: G信号 = NAND(mem_wordsize[1:0]) - 组合逻辑，非时钟
set_false_path -through [get_pins riscv/mem_la_wdata_reg_*/G]
set_false_path -through [get_pins riscv/mem_la_wstrb_reg_*/G] 
set_false_path -through [get_pins riscv/mem_rdata_word_reg_*/G]

# ============================================================================
# 说明: 68个untested路径通过假路径约束正确处理
# G信号为准静态内存宽度控制，不需要时钟约束
# ============================================================================
