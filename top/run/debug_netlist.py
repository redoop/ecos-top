#!/usr/bin/env python3

import subprocess
import sys

def run_simulation_with_debug(sim_type):
    """运行仿真并提取关键调试信息"""
    
    # 关键信号监控点
    debug_signals = [
        "asic_top_tb.asic_top_inst.ip1.io_gpio_out",
        "asic_top_tb.asic_top_inst.ip1.uart_rx_data",
        "asic_top_tb.asic_top_inst.ip1.uart_tx_data", 
        "asic_top_tb.asic_top_inst.ip1.clk",
        "asic_top_tb.asic_top_inst.ip1.reset"
    ]
    
    print(f"=== 调试 {sim_type} 仿真 ===")
    
    # 运行仿真
    cmd = f"make clean {sim_type}"
    result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    
    if result.returncode != 0:
        print(f"仿真失败: {result.stderr}")
        return False
        
    # 检查VCD文件
    vcd_file = f"vcd/{sim_type}.vcd"
    try:
        with open(vcd_file, 'r') as f:
            content = f.read()
            
        # 简单检查关键信号是否存在
        missing_signals = []
        for signal in debug_signals:
            if signal not in content:
                missing_signals.append(signal)
                
        if missing_signals:
            print(f"缺失信号: {missing_signals}")
        else:
            print("所有关键信号都存在")
            
        return True
        
    except FileNotFoundError:
        print(f"VCD文件不存在: {vcd_file}")
        return False

if __name__ == "__main__":
    sims = ["1_sim_asic_matrix", "2_sim_asic_matrix", "3_sim_asic_matrix"]
    
    for sim in sims:
        success = run_simulation_with_debug(sim)
        if not success:
            print(f"{sim} 调试失败")
            break
        print()
