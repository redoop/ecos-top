#!/usr/bin/env python3
import subprocess
import os
import sys

def run_simulation():
    """运行仿真生成VCD文件"""
    os.chdir('/Users/tongxiaojun/ecos-top/top/run')
    
    # 检查是否存在编译好的仿真器
    if os.path.exists('obj_dir/Vsoc_tb'):
        print("运行Verilator仿真...")
        result = subprocess.run(['./obj_dir/Vsoc_tb'], capture_output=True, text=True)
        if result.returncode == 0:
            print("仿真完成")
            return True
        else:
            print(f"仿真失败: {result.stderr}")
            return False
    else:
        print("未找到编译好的仿真器")
        return False

def generate_waveform_plot():
    """使用Python生成波形图"""
    try:
        import matplotlib.pyplot as plt
        import numpy as np
        from vcdvcd import VCDVCD
        
        vcd_file = '/Users/tongxiaojun/ecos-top/top/run/wave.vcd'
        if not os.path.exists(vcd_file):
            print(f"VCD文件不存在: {vcd_file}")
            return False
            
        # 读取VCD文件
        vcd = VCDVCD(vcd_file)
        
        # 获取信号列表
        signals = list(vcd.references_to_ids.keys())
        print(f"找到 {len(signals)} 个信号")
        
        # 选择前几个重要信号进行绘制
        selected_signals = signals[:min(8, len(signals))]
        
        fig, axes = plt.subplots(len(selected_signals), 1, figsize=(12, 2*len(selected_signals)))
        if len(selected_signals) == 1:
            axes = [axes]
            
        for i, signal in enumerate(selected_signals):
            try:
                signal_data = vcd[signal]
                times = [change[0] for change in signal_data.tv]
                values = [change[1] for change in signal_data.tv]
                
                # 转换为数值
                numeric_values = []
                for val in values:
                    try:
                        if val in ['0', '1']:
                            numeric_values.append(int(val))
                        elif val == 'x':
                            numeric_values.append(0.5)
                        else:
                            numeric_values.append(0)
                    except:
                        numeric_values.append(0)
                
                axes[i].plot(times, numeric_values, drawstyle='steps-post')
                axes[i].set_ylabel(signal.split('.')[-1][:20])
                axes[i].grid(True, alpha=0.3)
                
            except Exception as e:
                print(f"处理信号 {signal} 时出错: {e}")
                
        plt.xlabel('时间 (ps)')
        plt.title('项目波形图')
        plt.tight_layout()
        plt.savefig('/Users/tongxiaojun/ecos-top/waveform.png', dpi=300, bbox_inches='tight')
        print("波形图已保存为 waveform.png")
        return True
        
    except ImportError:
        print("需要安装依赖: pip install matplotlib vcdvcd")
        return False
    except Exception as e:
        print(f"生成波形图时出错: {e}")
        return False

def main():
    print("开始生成项目波形图...")
    
    # 运行仿真
    if run_simulation():
        # 生成波形图
        generate_waveform_plot()
    else:
        print("仿真失败，无法生成波形图")

if __name__ == "__main__":
    main()
