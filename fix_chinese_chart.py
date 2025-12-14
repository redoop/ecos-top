#!/usr/bin/env python3
import matplotlib.pyplot as plt
import matplotlib.font_manager as fm
import numpy as np
from vcdvcd import VCDVCD

# 设置中文字体
def setup_chinese_font():
    # 获取系统可用字体
    available_fonts = [f.name for f in fm.fontManager.ttflist]
    
    # macOS常见中文字体
    chinese_fonts = [
        'PingFang SC',
        'Hiragino Sans GB', 
        'STHeiti',
        'Arial Unicode MS',
        'SimHei'
    ]
    
    for font in chinese_fonts:
        if font in available_fonts:
            plt.rcParams['font.sans-serif'] = [font]
            plt.rcParams['axes.unicode_minus'] = False
            print(f"使用字体: {font}")
            return font
    
    # 如果没有找到中文字体，使用默认字体
    plt.rcParams['font.sans-serif'] = ['DejaVu Sans']
    print("未找到中文字体，使用默认字体")
    return 'DejaVu Sans'

def create_chinese_comparison_plot():
    """创建中文版对比图表"""
    
    setup_chinese_font()
    
    # 读取数据
    standalone_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_simple_edge_ai.vcd'
    integrated_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_enhanced.vcd'
    
    vcd1 = VCDVCD(standalone_vcd)
    vcd2 = VCDVCD(integrated_vcd)
    signals1 = list(vcd1.references_to_ids.keys())
    signals2 = list(vcd2.references_to_ids.keys())
    
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
    
    ax1.bar(x - width/2, standalone_counts, width, label='单独版本', alpha=0.8, color='skyblue')
    ax1.bar(x + width/2, integrated_counts, width, label='集成版本', alpha=0.8, color='lightcoral')
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
    
    # 图3: 时钟信号波形对比
    ax3.text(0.5, 0.5, '时钟信号对比\n(需要更详细的信号分析)', ha='center', va='center', transform=ax3.transAxes)
    ax3.set_title('时钟信号对比')
    
    # 图4: 问题诊断
    issues = [
        "集成版本信号数量明显少于单独版本",
        "SimpleEdgeAiSoC内部信号不可见", 
        "可能存在IP选择逻辑问题",
        "需要检查端口连接完整性"
    ]
    
    ax4.text(0.1, 0.9, "问题诊断:", fontsize=14, fontweight='bold', transform=ax4.transAxes)
    for i, issue in enumerate(issues):
        ax4.text(0.1, 0.8-i*0.15, f"• {issue}", fontsize=11, transform=ax4.transAxes)
    
    ax4.set_xlim(0, 1)
    ax4.set_ylim(0, 1)
    ax4.axis('off')
    ax4.set_title('诊断结果')
    
    plt.tight_layout()
    plt.savefig('/Users/tongxiaojun/ecos-top/waveform_comparison_chinese.png', dpi=300, bbox_inches='tight')
    print("中文版对比图表已保存: waveform_comparison_chinese.png")

if __name__ == "__main__":
    create_chinese_comparison_plot()
