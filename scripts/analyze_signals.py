#!/usr/bin/env python3

def analyze_vcd_signals():
    """分析为什么VCD文件只有2个信号"""
    
    print("=== VCD信号分析 ===")
    print()
    
    print("问题原因分析:")
    print("1. Verilator默认只跟踪顶层模块的端口信号")
    print("2. 当前testbench (soc_tb) 只有 clk 和 rst_n 两个信号")
    print("3. 内部模块信号需要特殊配置才能被跟踪")
    print()
    
    print("解决方案:")
    print("1. 在SystemVerilog中添加 /* verilator public */ 注释")
    print("2. 使用 --trace-depth 参数增加跟踪深度")
    print("3. 在testbench中显式连接内部信号")
    print("4. 使用 $dumpvars 的层级参数")
    print()
    
    print("当前状态:")
    print("- 仿真器: Verilator")
    print("- 顶层模块: soc_tb")
    print("- 跟踪信号: 2个 (clk, rst_n)")
    print("- 问题: 缺少内部模块信号")
    print()
    
    print("建议的修复步骤:")
    print("1. 修改testbench添加内部信号连接")
    print("2. 使用 --trace-structs 选项")
    print("3. 在关键模块添加 public 标记")
    print("4. 重新编译并运行仿真")

if __name__ == "__main__":
    analyze_vcd_signals()
