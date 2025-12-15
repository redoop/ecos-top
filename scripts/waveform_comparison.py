#!/usr/bin/env python3
import matplotlib.pyplot as plt
import numpy as np
from vcdvcd import VCDVCD
import os

def analyze_and_compare_waveforms():
    """分析并对比两个波形文件"""
    
    # 文件路径
    standalone_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_simple_edge_ai.vcd'
    integrated_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_enhanced.vcd'
    
    print("=== 波形对比分析 ===\n")
    
    # 分析单独的SimpleEdgeAiSoC
    print("1. 单独SimpleEdgeAiSoC分析:")
    if os.path.exists(standalone_vcd):
        try:
            vcd1 = VCDVCD(standalone_vcd)
            signals1 = list(vcd1.references_to_ids.keys())
            print(f"   - 信号数量: {len(signals1)}")
            print(f"   - 仿真时间: {vcd1.begintime} - {vcd1.endtime}")
            
            # 分析关键信号
            clock_sigs1 = [s for s in signals1 if 'clk' in s.lower() or 'clock' in s.lower()]
            uart_sigs1 = [s for s in signals1 if 'uart' in s.lower()]
            gpio_sigs1 = [s for s in signals1 if 'gpio' in s.lower()]
            
            print(f"   - 时钟信号: {len(clock_sigs1)}")
            print(f"   - UART信号: {len(uart_sigs1)}")
            print(f"   - GPIO信号: {len(gpio_sigs1)}")
            
        except Exception as e:
            print(f"   - 错误: {e}")
            return False
    else:
        print("   - 文件不存在")
        return False
    
    print()
    
    # 分析集成的asic_top + SimpleEdgeAiSoC
    print("2. 集成版(asic_top + SimpleEdgeAiSoC)分析:")
    if os.path.exists(integrated_vcd):
        try:
            vcd2 = VCDVCD(integrated_vcd)
            signals2 = list(vcd2.references_to_ids.keys())
            print(f"   - 信号数量: {len(signals2)}")
            print(f"   - 仿真时间: {vcd2.begintime} - {vcd2.endtime}")
            
            # 查找SimpleEdgeAiSoC相关信号
            soc_sigs2 = [s for s in signals2 if 'SimpleEdgeAiSoC' in s or 'u_asic_top' in s]
            print(f"   - SoC相关信号: {len(soc_sigs2)}")
            
        except Exception as e:
            print(f"   - 错误: {e}")
            return False
    else:
        print("   - 文件不存在")
        return False
    
    print()
    
    # 对比分析
    print("3. 对比分析结果:")
    
    # 检查时钟信号
    print("   时钟信号对比:")
    if clock_sigs1:
        print(f"   - 单独版本: {clock_sigs1[0]} 等")
        # 检查集成版本中是否有对应的时钟
        integrated_clocks = [s for s in signals2 if 'clk' in s.lower() or 'clock' in s.lower()]
        if integrated_clocks:
            print(f"   - 集成版本: {integrated_clocks[0]} 等")
            print("   ✅ 时钟信号正常")
        else:
            print("   ❌ 集成版本缺少时钟信号")
    
    # 检查复位信号
    print("   复位信号对比:")
    reset_sigs1 = [s for s in signals1 if 'reset' in s.lower() or 'rst' in s.lower()]
    reset_sigs2 = [s for s in signals2 if 'reset' in s.lower() or 'rst' in s.lower()]
    
    if reset_sigs1 and reset_sigs2:
        print("   ✅ 复位信号正常")
    else:
        print("   ❌ 复位信号可能有问题")
    
    # 检查UART信号
    print("   UART信号对比:")
    if uart_sigs1:
        uart_sigs2 = [s for s in signals2 if 'uart' in s.lower()]
        if uart_sigs2:
            print("   ✅ UART信号正常")
        else:
            print("   ❌ 集成版本缺少UART信号")
    
    # 生成对比图表
    create_comparison_plot(vcd1, vcd2, signals1, signals2)
    
    return True

def create_comparison_plot(vcd1, vcd2, signals1, signals2):
    """创建对比图表"""
    
    fig, ((ax1, ax2), (ax3, ax4)) = plt.subplots(2, 2, figsize=(16, 10))
    
    # 图1: 信号数量对比
    categories = ['总信号', '时钟信号', 'UART信号', 'GPIO信号']
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
    
    ax1.bar(x - width/2, standalone_counts, width, label='单独版本', alpha=0.8)
    ax1.bar(x + width/2, integrated_counts, width, label='集成版本', alpha=0.8)
    ax1.set_xlabel('信号类型')
    ax1.set_ylabel('信号数量')
    ax1.set_title('信号数量对比')
    ax1.set_xticks(x)
    ax1.set_xticklabels(categories)
    ax1.legend()
    ax1.grid(True, alpha=0.3)
    
    # 图2: 仿真时间对比
    sim_times = [vcd1.endtime - vcd1.begintime, vcd2.endtime - vcd2.begintime]
    versions = ['单独版本', '集成版本']
    
    ax2.bar(versions, sim_times, alpha=0.8, color=['skyblue', 'lightcoral'])
    ax2.set_ylabel('仿真时间 (ps)')
    ax2.set_title('仿真时间对比')
    ax2.grid(True, alpha=0.3)
    
    # 图3: 时钟信号波形对比 (如果存在)
    try:
        # 查找时钟信号
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
            # 绘制时钟信号
            clk1_data = vcd1[clk1]
            times1 = [change[0] for change in clk1_data.tv[:20]]  # 前20个变化
            values1 = [int(change[1]) for change in clk1_data.tv[:20]]
            
            clk2_data = vcd2[clk2]
            times2 = [change[0] for change in clk2_data.tv[:20]]
            values2 = [int(change[1]) for change in clk2_data.tv[:20]]
            
            ax3.plot(times1, values1, 'b-', label='单独版本时钟', drawstyle='steps-post')
            ax3.plot(times2, values2, 'r-', label='集成版本时钟', drawstyle='steps-post', alpha=0.7)
            ax3.set_xlabel('时间 (ps)')
            ax3.set_ylabel('时钟值')
            ax3.set_title('时钟信号对比')
            ax3.legend()
            ax3.grid(True, alpha=0.3)
        else:
            ax3.text(0.5, 0.5, '未找到可对比的时钟信号', ha='center', va='center', transform=ax3.transAxes)
            ax3.set_title('时钟信号对比')
            
    except Exception as e:
        ax3.text(0.5, 0.5, f'时钟对比错误: {str(e)[:50]}', ha='center', va='center', transform=ax3.transAxes)
        ax3.set_title('时钟信号对比')
    
    # 图4: 问题诊断
    issues = []
    
    # 检查信号数量差异
    if len(signals2) < len(signals1):
        issues.append("集成版本信号数量少于单独版本")
    
    # 检查仿真时间
    if (vcd2.endtime - vcd2.begintime) < (vcd1.endtime - vcd1.begintime):
        issues.append("集成版本仿真时间较短")
    
    # 检查关键信号
    uart_in_standalone = any('uart' in s.lower() for s in signals1)
    uart_in_integrated = any('uart' in s.lower() for s in signals2)
    
    if uart_in_standalone and not uart_in_integrated:
        issues.append("集成版本缺少UART信号")
    
    if not issues:
        issues.append("✅ 未发现明显问题")
    
    ax4.text(0.1, 0.9, "问题诊断:", fontsize=14, fontweight='bold', transform=ax4.transAxes)
    for i, issue in enumerate(issues):
        ax4.text(0.1, 0.8-i*0.1, f"• {issue}", fontsize=12, transform=ax4.transAxes)
    
    ax4.set_xlim(0, 1)
    ax4.set_ylim(0, 1)
    ax4.axis('off')
    ax4.set_title('诊断结果')
    
    plt.tight_layout()
    plt.savefig('/Users/tongxiaojun/ecos-top/waveform_comparison.png', dpi=300, bbox_inches='tight')
    print("   对比图表已保存: waveform_comparison.png")

if __name__ == "__main__":
    analyze_and_compare_waveforms()
