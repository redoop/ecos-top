#!/usr/bin/env python3
"""
生成中文波形对比分析报告的完整脚本
确保所有中文显示正确，避免乱码
"""
import matplotlib.pyplot as plt
import matplotlib.font_manager as fm
import numpy as np
from vcdvcd import VCDVCD
import os
import sys

# 配置中文字体，避免乱码
# 尝试使用系统中文字体
font_paths = [
    '/Library/Fonts/SimHei.ttf',                     # macOS Homebrew
    '/System/Library/Fonts/Hiragino Sans GB.ttc',    # macOS - 日文字体但支持中文
    '/System/Library/Fonts/STHeiti Light.ttc',       # macOS
    '/System/Library/Fonts/PingFang.ttc',            # macOS
    '/System/Library/Fonts/Arial Unicode.ttf',       # macOS
    '/usr/share/fonts/opentype/noto/NotoSansCJK-Regular.ttc',  # Linux
    'C:\\Windows\\Fonts\\SimHei.ttf',                # Windows
    'C:\\Windows\\Fonts\\msyh.ttc',                  # Windows 微软雅黑
]

# 寻找可用的中文字体
available_fonts = []
for font_path in font_paths:
    if os.path.exists(font_path):
        try:
            fm.fontManager.addfont(font_path)
            font_name = fm.FontProperties(fname=font_path).get_name()
            available_fonts.append(font_name)
            print(f"✓ 加载字体: {font_path}")
        except Exception as e:
            print(f"✗ 加载字体失败 {font_path}: {e}")
            continue

# 如果找不到系统字体，尝试使用系统字体名称
if available_fonts:
    possible_fonts = available_fonts + ['Hiragino Sans GB', 'SimHei', 'STHeiti', 'DejaVu Sans', 'Arial']
else:
    # 在 macOS 上使用这些系统字体名称
    possible_fonts = ['Hiragino Sans GB', 'SimHei', 'STHeiti', 'PingFang SC', 'Arial Unicode MS', 'DejaVu Sans', 'Arial']

# 设置 matplotlib 配置
plt.rcParams['font.sans-serif'] = possible_fonts
plt.rcParams['axes.unicode_minus'] = False  # 正确显示负号
plt.rcParams['figure.dpi'] = 100

def analyze_vcd_files():
    """分析 VCD 文件并提取统计信息"""

    standalone_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_simple_edge_ai.vcd'
    integrated_vcd = '/Users/tongxiaojun/ecos-top/top/run/wave_enhanced.vcd'

    print("\n=== 读取 VCD 文件 ===\n")

    # 读取单独版本
    print("读取单独版本波形...")
    try:
        vcd1 = VCDVCD(standalone_vcd)
        signals1 = list(vcd1.references_to_ids.keys())
        print(f"✓ 单独版本信号数: {len(signals1)}")
    except Exception as e:
        print(f"✗ 读取单独版本失败: {e}")
        return None, None, None, None

    # 读取集成版本
    print("读取集成版本波形...")
    try:
        vcd2 = VCDVCD(integrated_vcd)
        signals2 = list(vcd2.references_to_ids.keys())
        print(f"✓ 集成版本信号数: {len(signals2)}")
    except Exception as e:
        print(f"✗ 读取集成版本失败: {e}")
        return None, None, None, None

    return vcd1, vcd2, signals1, signals2

def create_comparison_chart(vcd1, vcd2, signals1, signals2):
    """创建详细的对比图表"""

    print("\n=== 生成对比图表 ===\n")

    fig, ((ax1, ax2), (ax3, ax4)) = plt.subplots(2, 2, figsize=(16, 10))
    fig.suptitle('SimpleEdgeAiSoC 波形对比分析', fontsize=16, fontweight='bold', y=0.995)

    # ==================== 图1: 信号数量对比 ====================
    print("生成图表 1: 信号数量对比...")
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

    bars1 = ax1.bar(x - width/2, standalone_counts, width, label='单独版本', alpha=0.8, color='#5DADE2')
    bars2 = ax1.bar(x + width/2, integrated_counts, width, label='集成版本', alpha=0.8, color='#F5B041')

    # 在柱子上显示数值
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            ax1.text(bar.get_x() + bar.get_width()/2., height,
                    f'{int(height)}',
                    ha='center', va='bottom', fontsize=9)

    ax1.set_xlabel('信号类型', fontsize=11, fontweight='bold')
    ax1.set_ylabel('信号数量', fontsize=11, fontweight='bold')
    ax1.set_title('信号数量对比', fontsize=12, fontweight='bold', pad=10)
    ax1.set_xticks(x)
    ax1.set_xticklabels(categories)
    ax1.legend(fontsize=10)
    ax1.grid(True, alpha=0.3, axis='y')
    ax1.set_axisbelow(True)

    # ==================== 图2: 仿真时间对比 ====================
    print("生成图表 2: 仿真时间对比...")
    sim_times = [vcd1.endtime - vcd1.begintime, vcd2.endtime - vcd2.begintime]
    versions = ['单独版本', '集成版本']

    bars = ax2.bar(versions, sim_times, alpha=0.8, color=['#5DADE2', '#F5B041'], width=0.5)

    # 在柱子上显示数值
    for i, (bar, time) in enumerate(zip(bars, sim_times)):
        height = bar.get_height()
        ax2.text(bar.get_x() + bar.get_width()/2., height,
                f'{int(time):,} ps',
                ha='center', va='bottom', fontsize=10, fontweight='bold')

    ax2.set_ylabel('仿真时间 (ps)', fontsize=11, fontweight='bold')
    ax2.set_title('仿真时间对比', fontsize=12, fontweight='bold', pad=10)
    ax2.grid(True, alpha=0.3, axis='y')
    ax2.set_axisbelow(True)

    # ==================== 图3: 时钟信号波形对比 ====================
    print("生成图表 3: 时钟信号波形对比...")
    try:
        clk1 = None
        clk2 = None

        # 寻找时钟信号
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
            times1 = [change[0] for change in clk1_data.tv[:40]]
            values1 = [int(change[1]) for change in clk1_data.tv[:40]]

            clk2_data = vcd2[clk2]
            times2 = [change[0] for change in clk2_data.tv[:40]]
            values2 = [int(change[1]) for change in clk2_data.tv[:40]]

            ax3.plot(times1, values1, 'b-', label='单独版本时钟', drawstyle='steps-post', linewidth=2)
            ax3.plot(times2, values2, 'r-', label='集成版本时钟', drawstyle='steps-post',
                    alpha=0.7, linewidth=2)
            ax3.set_xlabel('时间 (ps)', fontsize=11, fontweight='bold')
            ax3.set_ylabel('时钟值', fontsize=11, fontweight='bold')
            ax3.set_title('时钟信号对比', fontsize=12, fontweight='bold', pad=10)
            ax3.legend(fontsize=10)
            ax3.grid(True, alpha=0.3)
        else:
            ax3.text(0.5, 0.5, '未找到可对比的时钟信号', ha='center', va='center',
                    transform=ax3.transAxes, fontsize=12)
            ax3.set_title('时钟信号对比', fontsize=12, fontweight='bold', pad=10)

    except Exception as e:
        ax3.text(0.5, 0.5, f'时钟对比错误: {str(e)[:50]}', ha='center', va='center',
                transform=ax3.transAxes, fontsize=11)
        ax3.set_title('时钟信号对比', fontsize=12, fontweight='bold', pad=10)

    # ==================== 图4: 问题诊断 ====================
    print("生成图表 4: 问题诊断...")
    issues = []

    # 检查信号数量差异
    if len(signals2) < len(signals1):
        signal_diff = len(signals1) - len(signals2)
        issues.append(f"⚠ 集成版本信号数量少于单独版本 ({signal_diff} 个)")

    # 检查仿真时间
    time_ratio = (vcd2.endtime - vcd2.begintime) / (vcd1.endtime - vcd1.begintime) if (vcd1.endtime - vcd1.begintime) > 0 else 0
    if time_ratio < 1:
        issues.append(f"⚠ 集成版本仿真时间较短 ({time_ratio:.2f}x)")

    # 检查 UART 信号
    uart_in_standalone = any('uart' in s.lower() for s in signals1)
    uart_in_integrated = any('uart' in s.lower() for s in signals2)

    if uart_in_standalone and not uart_in_integrated:
        issues.append("⚠ 集成版本缺少 UART 信号")

    # 检查时钟信号
    clk_in_standalone = any('clk' in s.lower() or 'clock' in s.lower() for s in signals1)
    clk_in_integrated = any('clk' in s.lower() or 'clock' in s.lower() for s in signals2)

    if clk_in_standalone and not clk_in_integrated:
        issues.append("⚠ 集成版本缺少时钟信号")

    if not issues:
        issues.append("✅ 未发现明显问题")

    ax4.text(0.05, 0.95, "诊断结果:", fontsize=13, fontweight='bold',
            transform=ax4.transAxes, va='top', family='monospace')

    for i, issue in enumerate(issues):
        y_pos = 0.85 - i * 0.15
        ax4.text(0.05, y_pos, issue, fontsize=11, transform=ax4.transAxes,
                va='top', family='monospace', wrap=True)

    ax4.set_xlim(0, 1)
    ax4.set_ylim(0, 1)
    ax4.axis('off')
    ax4.set_title('问题诊断', fontsize=12, fontweight='bold', pad=10)

    plt.tight_layout()

    # 保存图表
    output_path = '/Users/tongxiaojun/ecos-top/waveform_comparison_chinese.png'
    plt.savefig(output_path, dpi=300, bbox_inches='tight', facecolor='white')
    print(f"✓ 对比图表已保存: {output_path}")

    plt.close()

def main():
    """主函数"""
    print("=" * 50)
    print("SimpleEdgeAiSoC 波形对比分析 - 报告生成器")
    print("=" * 50)

    # 分析 VCD 文件
    vcd1, vcd2, signals1, signals2 = analyze_vcd_files()

    if vcd1 is None or vcd2 is None:
        print("\n✗ 无法读取 VCD 文件，退出")
        sys.exit(1)

    # 生成对比图表
    create_comparison_chart(vcd1, vcd2, signals1, signals2)

    print("\n" + "=" * 50)
    print("✓ 报告生成完成!")
    print("=" * 50)

if __name__ == "__main__":
    main()
