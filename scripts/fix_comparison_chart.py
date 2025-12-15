#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
from vcdvcd import VCDVCD
import os

# 设置字体避免中文乱码
plt.rcParams['font.sans-serif'] = ['Arial', 'DejaVu Sans']
plt.rcParams['axes.unicode_minus'] = False

def create_fixed_comparison_plot():
    """创建修复乱码的对比图表"""
    
    # 文件路径
    standalone_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_simple_edge_ai.vcd'
    integrated_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_enhanced.vcd'
    
    # 读取数据
    vcd1 = VCDVCD(standalone_vcd)
    vcd2 = VCDVCD(integrated_vcd)
    signals1 = list(vcd1.references_to_ids.keys())
    signals2 = list(vcd2.references_to_ids.keys())
    
    fig, ((ax1, ax2), (ax3, ax4)) = plt.subplots(2, 2, figsize=(16, 10))
    
    # 图1: 信号数量对比
    categories = ['Total Signals', 'Clock Signals', 'UART Signals', 'GPIO Signals']
    standalone_counts = [
        len(signals1),
        len([s for s in signals1 if 'clk' in s.lower() or 'clock' in s.lower()]),
        len([s for s in signals1 if 'uart' in s.lower()]),
        len([s for s in signals1 if 'gpio' in s.lower()])
    ]
    integrated_counts = [
        len(signals2),
        len([s for s in signals2 if 'clk' in s.lower() or 'clock' in s.lower()]),
        len([s for s in signals2 if 'uart' in s.lower()]),
        len([s for s in signals2 if 'gpio' in s.lower()])
    ]
    
    x = np.arange(len(categories))
    width = 0.35
    
    ax1.bar(x - width/2, standalone_counts, width, label='Standalone', alpha=0.8, color='skyblue')
    ax1.bar(x + width/2, integrated_counts, width, label='Integrated', alpha=0.8, color='lightcoral')
    ax1.set_xlabel('Signal Type')
    ax1.set_ylabel('Signal Count')
    ax1.set_title('Signal Count Comparison')
    ax1.set_xticks(x)
    ax1.set_xticklabels(categories)
    ax1.legend()
    ax1.grid(True, alpha=0.3)
    
    # 图2: 仿真时间对比
    sim_times = [vcd1.endtime - vcd1.begintime, vcd2.endtime - vcd2.begintime]
    versions = ['Standalone', 'Integrated']
    
    ax2.bar(versions, sim_times, alpha=0.8, color=['skyblue', 'lightcoral'])
    ax2.set_ylabel('Simulation Time (ps)')
    ax2.set_title('Simulation Time Comparison')
    ax2.grid(True, alpha=0.3)
    
    # 图3: 时钟信号波形对比
    try:
        clk1 = None
        clk2 = None
        
        for sig in signals1:
            if 'clk' in sig.lower() and 'simple_edge_ai_tb_fixed' in sig:
                clk1 = sig
                break
        
        for sig in signals2:
            if 'clk' in sig.lower() and 'soc_tb_enhanced' in sig:
                clk2 = sig
                break
        
        if clk1 and clk2:
            clk1_data = vcd1[clk1]
            times1 = [change[0] for change in clk1_data.tv[:20]]
            values1 = [int(change[1]) for change in clk1_data.tv[:20]]
            
            clk2_data = vcd2[clk2]
            times2 = [change[0] for change in clk2_data.tv[:20]]
            values2 = [int(change[1]) for change in clk2_data.tv[:20]]
            
            ax3.plot(times1, values1, 'b-', label='Standalone Clock', drawstyle='steps-post')
            ax3.plot(times2, values2, 'r-', label='Integrated Clock', drawstyle='steps-post', alpha=0.7)
            ax3.set_xlabel('Time (ps)')
            ax3.set_ylabel('Clock Value')
            ax3.set_title('Clock Signal Comparison')
            ax3.legend()
            ax3.grid(True, alpha=0.3)
        else:
            ax3.text(0.5, 0.5, 'No comparable clock signals found', ha='center', va='center', transform=ax3.transAxes)
            ax3.set_title('Clock Signal Comparison')
            
    except Exception as e:
        ax3.text(0.5, 0.5, f'Clock comparison error: {str(e)[:50]}', ha='center', va='center', transform=ax3.transAxes)
        ax3.set_title('Clock Signal Comparison')
    
    # 图4: 问题诊断
    issues = []
    
    if len(signals2) < len(signals1):
        issues.append("Integrated version has fewer signals")
    
    if (vcd2.endtime - vcd2.begintime) < (vcd1.endtime - vcd1.begintime):
        issues.append("Integrated version has shorter simulation time")
    
    uart_in_standalone = any('uart' in s.lower() for s in signals1)
    uart_in_integrated = any('uart' in s.lower() for s in signals2)
    
    if uart_in_standalone and not uart_in_integrated:
        issues.append("Integrated version missing UART signals")
    
    if not issues:
        issues.append("No obvious issues found")
    
    ax4.text(0.1, 0.9, "Issue Diagnosis:", fontsize=14, fontweight='bold', transform=ax4.transAxes)
    for i, issue in enumerate(issues):
        symbol = "✓" if "No obvious" in issue else "⚠"
        ax4.text(0.1, 0.8-i*0.1, f"{symbol} {issue}", fontsize=12, transform=ax4.transAxes)
    
    ax4.set_xlim(0, 1)
    ax4.set_ylim(0, 1)
    ax4.axis('off')
    ax4.set_title('Diagnosis Results')
    
    plt.tight_layout()
    plt.savefig('/Users/tongxiaojun/ecos-top/waveform_comparison_fixed.png', dpi=300, bbox_inches='tight')
    print("Fixed comparison chart saved: waveform_comparison_fixed.png")

if __name__ == "__main__":
    create_fixed_comparison_plot()
