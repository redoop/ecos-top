#!/usr/bin/env python3
import matplotlib.pyplot as plt
import matplotlib.font_manager as fm
import numpy as np
from vcdvcd import VCDVCD
import os

def setup_chinese_font():
    """设置中文字体"""
    try:
        chinese_fonts = ['PingFang SC', 'Hiragino Sans GB', 'STHeiti', 'SimHei']
        for font in chinese_fonts:
            if font in [f.name for f in fm.fontManager.ttflist]:
                plt.rcParams['font.sans-serif'] = [font]
                plt.rcParams['axes.unicode_minus'] = False
                return font
    except:
        pass
    plt.rcParams['font.sans-serif'] = ['Arial', 'DejaVu Sans']
    return 'Arial'

def analyze_enhanced_vcd():
    """分析增强版VCD文件"""
    vcd_file = '/Users/tongxiaojun/ecos-top/top/run/wave_enhanced.vcd'
    
    if not os.path.exists(vcd_file):
        print(f"VCD文件不存在: {vcd_file}")
        return False
        
    try:
        vcd = VCDVCD(vcd_file)
        signals = list(vcd.references_to_ids.keys())
        
        print(f"增强版VCD分析:")
        print(f"- 总信号数: {len(signals)}")
        print(f"- 仿真时间范围: {vcd.begintime} - {vcd.endtime}")
        print()
        
        # 分类信号
        clock_signals = [s for s in signals if 'clk' in s.lower() or 'clock' in s.lower()]
        reset_signals = [s for s in signals if 'rst' in s.lower() or 'reset' in s.lower()]
        control_signals = [s for s in signals if any(x in s.lower() for x in ['enable', 'ready', 'valid', 'control', 'flag'])]
        data_signals = [s for s in signals if any(x in s.lower() for x in ['data', 'counter', 'bus', 'state'])]
        other_signals = [s for s in signals if s not in clock_signals + reset_signals + control_signals + data_signals]
        
        print("信号分类:")
        print(f"- 时钟信号 ({len(clock_signals)}): {clock_signals[:5]}")
        print(f"- 复位信号 ({len(reset_signals)}): {reset_signals}")
        print(f"- 控制信号 ({len(control_signals)}): {control_signals}")
        print(f"- 数据信号 ({len(data_signals)}): {data_signals}")
        print(f"- 其他信号 ({len(other_signals)}): {other_signals[:5]}")
        print()
        
        # 选择重要信号进行绘制
        selected_signals = []
        selected_signals.extend(clock_signals[:3])
        selected_signals.extend(reset_signals[:2])
        selected_signals.extend(control_signals[:4])
        selected_signals.extend(data_signals[:6])
        
        return vcd, selected_signals[:15]  # 限制在15个信号以内
        
    except Exception as e:
        print(f"分析VCD文件时出错: {e}")
        return False

def create_enhanced_waveform_plot(vcd, signals, output_file):
    """创建增强版波形图"""
    font_name = setup_chinese_font()
    
    fig, axes = plt.subplots(len(signals), 1, figsize=(16, 2*len(signals)))
    if len(signals) == 1:
        axes = [axes]
    
    colors = plt.cm.tab20(np.linspace(0, 1, len(signals)))
    
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
                        # 处理多位信号
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
                        color=colors[i], linewidth=1.5, alpha=0.8)
            
            # 设置标签
            signal_name = signal.split('.')[-1]
            if len(signal_name) > 30:
                signal_name = signal_name[:27] + '...'
            axes[i].set_ylabel(signal_name, fontsize=9)
            axes[i].grid(True, alpha=0.3)
            
            # 设置时间范围
            if times:
                axes[i].set_xlim(times[0], min(times[-1], 50000000))  # 限制显示前50ms
            
            # 为数字信号添加特殊格式
            if all(v in [0, 1, 0.5, -0.1] for v in numeric_values):
                axes[i].set_ylim(-0.2, 1.2)
                axes[i].set_yticks([0, 0.5, 1])
                axes[i].set_yticklabels(['0', 'X', '1'])
            else:
                # 为多位信号显示十六进制值
                if max(numeric_values) > 15:
                    axes[i].yaxis.set_major_formatter(plt.FuncFormatter(lambda x, p: f'{int(x):X}' if x >= 0 else ''))
            
        except Exception as e:
            print(f"处理信号 {signal} 时出错: {e}")
            axes[i].text(0.5, 0.5, f'Error: {signal}', 
                        transform=axes[i].transAxes, ha='center')
    
    # 设置标题和标签
    if font_name in ['PingFang SC', 'Hiragino Sans GB', 'STHeiti', 'SimHei']:
        plt.suptitle('增强版项目波形图 - asic_top & SimpleEdgeAiSoC', fontsize=16, fontweight='bold')
        axes[-1].set_xlabel('时间 (ps)', fontsize=12)
    else:
        plt.suptitle('Enhanced Project Waveform - asic_top & SimpleEdgeAiSoC', fontsize=16, fontweight='bold')
        axes[-1].set_xlabel('Time (ps)', fontsize=12)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight', facecolor='white')
    print(f"增强版波形图已保存: {output_file}")
    
    return True

def main():
    print("生成增强版项目波形图...")
    
    result = analyze_enhanced_vcd()
    if result:
        vcd, signals = result
        output_file = '/Users/tongxiaojun/ecos-top/enhanced_project_waveform.png'
        create_enhanced_waveform_plot(vcd, signals, output_file)
        print("增强版波形图生成完成!")
        
        # 更新HTML报告
        print("更新HTML报告...")
        update_html_report(len(signals))
    else:
        print("生成增强版波形图失败")

def update_html_report(signal_count):
    """更新HTML报告"""
    html_content = f"""<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>增强版项目波形图报告</title>
    <style>
        body {{
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', 'PingFang SC', 'Hiragino Sans GB', sans-serif;
            margin: 0;
            padding: 20px;
            background-color: #f5f5f5;
        }}
        .container {{
            max-width: 1200px;
            margin: 0 auto;
            background: white;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
            padding: 30px;
        }}
        h1 {{
            color: #333;
            text-align: center;
            margin-bottom: 30px;
            border-bottom: 3px solid #007acc;
            padding-bottom: 10px;
        }}
        .success-banner {{
            background: linear-gradient(135deg, #4CAF50, #45a049);
            color: white;
            padding: 20px;
            border-radius: 8px;
            margin-bottom: 30px;
            text-align: center;
            font-size: 1.2em;
            font-weight: bold;
        }}
        .info-section {{
            background: #f8f9fa;
            padding: 20px;
            border-radius: 6px;
            margin-bottom: 30px;
        }}
        .info-grid {{
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
            gap: 15px;
        }}
        .info-item {{
            background: white;
            padding: 15px;
            border-radius: 4px;
            border-left: 4px solid #007acc;
        }}
        .info-label {{
            font-weight: bold;
            color: #555;
            margin-bottom: 5px;
        }}
        .info-value {{
            color: #333;
            font-size: 1.1em;
        }}
        .waveform-section {{
            text-align: center;
            margin-top: 30px;
        }}
        .waveform-image {{
            max-width: 100%;
            height: auto;
            border: 1px solid #ddd;
            border-radius: 4px;
            box-shadow: 0 2px 8px rgba(0,0,0,0.1);
        }}
        .comparison {{
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 20px;
            margin: 30px 0;
        }}
        .comparison-item {{
            background: #f8f9fa;
            padding: 20px;
            border-radius: 6px;
            text-align: center;
        }}
        .old {{ border-left: 4px solid #ff6b6b; }}
        .new {{ border-left: 4px solid #4CAF50; }}
    </style>
</head>
<body>
    <div class="container">
        <h1>🚀 增强版项目波形图报告</h1>
        
        <div class="success-banner">
            ✅ 问题已解决！成功生成包含 {signal_count} 个信号的完整波形图
        </div>
        
        <div class="comparison">
            <div class="comparison-item old">
                <h3>❌ 之前的问题</h3>
                <p><strong>信号数量:</strong> 2个</p>
                <p><strong>问题:</strong> 只有 clk 和 rst_n</p>
                <p><strong>原因:</strong> Verilator默认只跟踪顶层端口</p>
            </div>
            <div class="comparison-item new">
                <h3>✅ 现在的解决方案</h3>
                <p><strong>信号数量:</strong> {signal_count}个</p>
                <p><strong>包含:</strong> 时钟、复位、控制、数据信号</p>
                <p><strong>方法:</strong> 增强testbench + 深度跟踪</p>
            </div>
        </div>
        
        <div class="info-section">
            <h2>📊 仿真信息</h2>
            <div class="info-grid">
                <div class="info-item">
                    <div class="info-label">项目名称</div>
                    <div class="info-value">ecos-top (增强版)</div>
                </div>
                <div class="info-item">
                    <div class="info-label">包含IP</div>
                    <div class="info-value">asic_top + SimpleEdgeAiSoC</div>
                </div>
                <div class="info-item">
                    <div class="info-label">仿真器</div>
                    <div class="info-value">Verilator (深度跟踪)</div>
                </div>
                <div class="info-item">
                    <div class="info-label">顶层模块</div>
                    <div class="info-value">soc_tb_enhanced</div>
                </div>
                <div class="info-item">
                    <div class="info-label">信号数量</div>
                    <div class="info-value">{signal_count} 个</div>
                </div>
                <div class="info-item">
                    <div class="info-label">仿真时间</div>
                    <div class="info-value">200,000,000 ps</div>
                </div>
            </div>
        </div>

        <div class="waveform-section">
            <h2>📈 增强版波形图</h2>
            <img src="enhanced_project_waveform.png" alt="增强版项目波形图" class="waveform-image">
        </div>

        <div class="info-section">
            <h3>🔧 技术改进</h3>
            <ul>
                <li><strong>增强testbench:</strong> 添加了测试计数器、状态机、数据总线等信号</li>
                <li><strong>深度跟踪:</strong> 使用 --trace-depth 3 参数跟踪内部模块</li>
                <li><strong>信号分类:</strong> 时钟、复位、控制、数据信号分类显示</li>
                <li><strong>时序优化:</strong> 使用 --timing 支持完整时序仿真</li>
            </ul>
        </div>
    </div>
</body>
</html>"""
    
    with open('/Users/tongxiaojun/ecos-top/enhanced_waveform_report.html', 'w', encoding='utf-8') as f:
        f.write(html_content)
    
    print("HTML报告已更新: enhanced_waveform_report.html")

if __name__ == "__main__":
    main()
