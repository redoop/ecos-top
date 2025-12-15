#!/usr/bin/env python3
import matplotlib.pyplot as plt
import matplotlib.font_manager as fm
import numpy as np
from vcdvcd import VCDVCD
import os

def setup_chinese_font():
    """设置中文字体"""
    try:
        # 尝试使用系统中文字体
        chinese_fonts = ['PingFang SC', 'Hiragino Sans GB', 'STHeiti', 'SimHei']
        for font in chinese_fonts:
            if font in [f.name for f in fm.fontManager.ttflist]:
                plt.rcParams['font.sans-serif'] = [font]
                plt.rcParams['axes.unicode_minus'] = False
                return font
    except:
        pass
    # 如果没有中文字体，使用英文
    plt.rcParams['font.sans-serif'] = ['Arial', 'DejaVu Sans']
    return 'Arial'

def analyze_vcd_file(vcd_file):
    """分析VCD文件并生成详细的波形图"""
    if not os.path.exists(vcd_file):
        print(f"VCD file not found: {vcd_file}")
        return False
        
    try:
        vcd = VCDVCD(vcd_file)
        signals = list(vcd.references_to_ids.keys())
        
        print(f"VCD Analysis:")
        print(f"- Total signals: {len(signals)}")
        print(f"- Simulation time range: {vcd.begintime} - {vcd.endtime}")
        
        # 选择重要信号
        clock_signals = [s for s in signals if 'clk' in s.lower() or 'clock' in s.lower()]
        reset_signals = [s for s in signals if 'rst' in s.lower() or 'reset' in s.lower()]
        other_signals = [s for s in signals if s not in clock_signals and s not in reset_signals]
        
        selected_signals = []
        selected_signals.extend(clock_signals[:2])
        selected_signals.extend(reset_signals[:2])
        selected_signals.extend(other_signals[:6])
        
        if not selected_signals:
            selected_signals = signals[:8]
            
        print(f"- Selected signals for plotting: {len(selected_signals)}")
        
        return vcd, selected_signals
        
    except Exception as e:
        print(f"Error analyzing VCD file: {e}")
        return False

def create_waveform_plot(vcd, signals, output_file):
    """创建波形图"""
    font_name = setup_chinese_font()
    
    fig, axes = plt.subplots(len(signals), 1, figsize=(15, 2*len(signals)))
    if len(signals) == 1:
        axes = [axes]
    
    colors = plt.cm.Set3(np.linspace(0, 1, len(signals)))
    
    for i, signal in enumerate(signals):
        try:
            signal_data = vcd[signal]
            times = [change[0] for change in signal_data.tv]
            values = [change[1] for change in signal_data.tv]
            
            # 处理不同类型的信号值
            numeric_values = []
            for val in values:
                if isinstance(val, str):
                    if val in ['0', '1']:
                        numeric_values.append(int(val))
                    elif val == 'x':
                        numeric_values.append(0.5)
                    elif val == 'z':
                        numeric_values.append(-0.1)
                    else:
                        # 尝试转换为整数（用于多位信号）
                        try:
                            if val.startswith('b'):
                                numeric_values.append(int(val[1:], 2))
                            elif val.startswith('h'):
                                numeric_values.append(int(val[1:], 16))
                            else:
                                numeric_values.append(int(val))
                        except:
                            numeric_values.append(0)
                else:
                    numeric_values.append(val)
            
            # 绘制波形
            axes[i].plot(times, numeric_values, drawstyle='steps-post', 
                        color=colors[i], linewidth=1.5)
            
            # 设置标签和格式
            signal_name = signal.split('.')[-1]
            if len(signal_name) > 25:
                signal_name = signal_name[:22] + '...'
            axes[i].set_ylabel(signal_name, fontsize=10)
            axes[i].grid(True, alpha=0.3)
            axes[i].set_xlim(times[0] if times else 0, times[-1] if times else 1000)
            
            # 为数字信号添加特殊格式
            if all(v in [0, 1, 0.5, -0.1] for v in numeric_values):
                axes[i].set_ylim(-0.2, 1.2)
                axes[i].set_yticks([0, 0.5, 1])
                axes[i].set_yticklabels(['0', 'X', '1'])
            
        except Exception as e:
            print(f"Error processing signal {signal}: {e}")
            axes[i].text(0.5, 0.5, f'Error: {signal}', 
                        transform=axes[i].transAxes, ha='center')
    
    # 设置标题和标签
    if font_name in ['PingFang SC', 'Hiragino Sans GB', 'STHeiti', 'SimHei']:
        plt.suptitle('项目波形图', fontsize=16, fontweight='bold')
        axes[-1].set_xlabel('时间 (ps)', fontsize=12)
    else:
        plt.suptitle('Project Waveform', fontsize=16, fontweight='bold')
        axes[-1].set_xlabel('Time (ps)', fontsize=12)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight', facecolor='white')
    print(f"Waveform plot saved as: {output_file}")
    
    return True

def main():
    vcd_file = '/Users/tongxiaojun/ecos-top/top/run/wave.vcd'
    output_file = '/Users/tongxiaojun/ecos-top/project_waveform.png'
    
    print("Generating project waveform visualization...")
    
    result = analyze_vcd_file(vcd_file)
    if result:
        vcd, signals = result
        create_waveform_plot(vcd, signals, output_file)
        print("Waveform generation completed successfully!")
    else:
        print("Failed to generate waveform plot.")

if __name__ == "__main__":
    main()
