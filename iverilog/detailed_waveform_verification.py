#!/usr/bin/env python3
"""
详细波形一致性验证工具
对比RTL仿真和网表仿真的关键信号，确认综合正确性
"""

import os
import sys
import re
from datetime import datetime
import subprocess

class WaveformVerifier:
    def __init__(self):
        self.rtl_vcd = "soc_tb.vcd"
        self.netlist_vcd = "work/asic_top_netlist.vcd"
        self.report_file = "waveform_consistency_verification_report.html"
        
        # 关键信号定义
        self.key_signals = {
            'clock_signals': [
                'sys_clk_i_pad',
                'sys_clk_o_pad'
            ],
            'reset_signals': [
                'rst_n_pad'
            ],
            'ip_select_signals': [
                'ip_sel_pad0',
                'ip_sel_pad1', 
                'ip_sel_pad2'
            ],
            'io_signals': [
                'io_pad0', 'io_pad1', 'io_pad2', 'io_pad3', 'io_pad4',
                'io_pad5', 'io_pad6', 'io_pad7', 'io_pad8', 'io_pad9'
            ]
        }
        
        # 关键时间点 (ps)
        self.key_timepoints = [
            0,          # 仿真开始
            200000,     # 复位释放 (200ns)
            600000,     # IP选择=001 (600ns)
            1000000,    # IP选择=010 (1000ns)
            1400000,    # IP选择=100 (1400ns)
            11400000    # 仿真结束 (11400ns)
        ]
    
    def extract_signal_values(self, vcd_file, signal_names, timepoints):
        """从VCD文件中提取指定信号在关键时间点的值"""
        signal_data = {}
        signal_ids = {}
        
        try:
            with open(vcd_file, 'r', encoding='utf-8', errors='ignore') as f:
                # 第一阶段：解析信号定义
                in_definitions = True
                for line in f:
                    line = line.strip()
                    
                    if line.startswith('$var'):
                        parts = line.split()
                        if len(parts) >= 4:
                            var_id = parts[3]
                            var_name = ' '.join(parts[4:]).replace('$end', '').strip()
                            
                            # 检查是否是我们关心的信号
                            for signal in signal_names:
                                if signal in var_name or var_name.endswith(signal):
                                    signal_ids[var_id] = signal
                                    signal_data[signal] = {}
                    
                    elif line.startswith('$enddefinitions'):
                        in_definitions = False
                        break
                
                # 第二阶段：提取信号值
                current_time = 0
                
                # 重新开始读取文件
                f.seek(0)
                in_data_section = False
                
                for line in f:
                    line = line.strip()
                    
                    if line.startswith('$enddefinitions'):
                        in_data_section = True
                        continue
                    
                    if not in_data_section:
                        continue
                    
                    # 时间戳
                    if line.startswith('#'):
                        try:
                            current_time = int(line[1:])
                        except:
                            continue
                    
                    # 信号值变化
                    elif len(line) > 0 and not line.startswith('$'):
                        # 处理不同格式的信号值
                        if line[0] in '01xzXZ':
                            # 单bit信号: 0a, 1b, xa, etc.
                            if len(line) > 1:
                                value = line[0]
                                signal_id = line[1:]
                                if signal_id in signal_ids:
                                    signal_name = signal_ids[signal_id]
                                    signal_data[signal_name][current_time] = value
                        
                        elif line.startswith('b'):
                            # 多bit信号: b0101 a
                            parts = line.split()
                            if len(parts) >= 2:
                                value = parts[0][1:]  # 去掉'b'前缀
                                signal_id = parts[1]
                                if signal_id in signal_ids:
                                    signal_name = signal_ids[signal_id]
                                    signal_data[signal_name][current_time] = value
        
        except Exception as e:
            print(f"提取信号值时出错: {e}")
        
        return signal_data
    
    def get_signal_value_at_time(self, signal_data, signal_name, target_time):
        """获取信号在指定时间点的值"""
        if signal_name not in signal_data:
            return "N/A"
        
        times = signal_data[signal_name]
        if not times:
            return "N/A"
        
        # 找到最接近且不超过目标时间的值
        last_value = "N/A"
        for time_point in sorted(times.keys()):
            if time_point <= target_time:
                last_value = times[time_point]
            else:
                break
        
        return last_value
    
    def compare_signals(self, rtl_data, netlist_data, signal_names, timepoints):
        """对比RTL和网表仿真的信号值"""
        comparison_results = {}
        
        for signal in signal_names:
            comparison_results[signal] = {}
            
            for time_point in timepoints:
                rtl_value = self.get_signal_value_at_time(rtl_data, signal, time_point)
                netlist_value = self.get_signal_value_at_time(netlist_data, signal, time_point)
                
                # 判断是否一致
                consistent = (rtl_value == netlist_value) or (rtl_value == "N/A" and netlist_value == "N/A")
                
                comparison_results[signal][time_point] = {
                    'rtl_value': rtl_value,
                    'netlist_value': netlist_value,
                    'consistent': consistent
                }
        
        return comparison_results
    
    def analyze_consistency(self):
        """执行一致性分析"""
        print("🔍 开始详细波形一致性验证...")
        
        # 检查文件存在性
        if not os.path.exists(self.rtl_vcd):
            print(f"❌ RTL仿真文件不存在: {self.rtl_vcd}")
            return False
        
        if not os.path.exists(self.netlist_vcd):
            print(f"❌ 网表仿真文件不存在: {self.netlist_vcd}")
            return False
        
        # 收集所有关键信号
        all_signals = []
        for category, signals in self.key_signals.items():
            all_signals.extend(signals)
        
        print(f"📊 分析 {len(all_signals)} 个关键信号在 {len(self.key_timepoints)} 个时间点...")
        
        # 提取RTL仿真信号值
        print("🔍 提取RTL仿真信号值...")
        rtl_data = self.extract_signal_values(self.rtl_vcd, all_signals, self.key_timepoints)
        
        # 提取网表仿真信号值
        print("🔍 提取网表仿真信号值...")
        netlist_data = self.extract_signal_values(self.netlist_vcd, all_signals, self.key_timepoints)
        
        # 执行对比
        print("⚖️ 执行信号值对比...")
        comparison_results = self.compare_signals(rtl_data, netlist_data, all_signals, self.key_timepoints)
        
        # 生成报告
        self.generate_verification_report(comparison_results)
        
        return True
    
    def generate_verification_report(self, comparison_results):
        """生成验证报告"""
        
        # 统计一致性
        total_comparisons = 0
        consistent_comparisons = 0
        
        for signal in comparison_results:
            for time_point in comparison_results[signal]:
                total_comparisons += 1
                if comparison_results[signal][time_point]['consistent']:
                    consistent_comparisons += 1
        
        consistency_rate = (consistent_comparisons / total_comparisons * 100) if total_comparisons > 0 else 0
        
        html_content = f"""
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RTL vs 网表仿真波形一致性验证报告</title>
    <style>
        body {{
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
            background-color: #f5f5f5;
        }}
        .container {{
            max-width: 1400px;
            margin: 0 auto;
            background: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 0 20px rgba(0,0,0,0.1);
        }}
        h1 {{
            color: #2c3e50;
            text-align: center;
            border-bottom: 3px solid #3498db;
            padding-bottom: 10px;
        }}
        h2 {{
            color: #34495e;
            border-left: 4px solid #3498db;
            padding-left: 15px;
            margin-top: 30px;
        }}
        .summary-box {{
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            color: white;
            padding: 20px;
            border-radius: 10px;
            margin: 20px 0;
            text-align: center;
        }}
        .consistency-rate {{
            font-size: 48px;
            font-weight: bold;
            margin: 10px 0;
        }}
        .comparison-table {{
            width: 100%;
            border-collapse: collapse;
            margin: 20px 0;
            font-size: 12px;
        }}
        .comparison-table th, .comparison-table td {{
            border: 1px solid #ddd;
            padding: 8px;
            text-align: center;
        }}
        .comparison-table th {{
            background-color: #3498db;
            color: white;
            font-weight: bold;
        }}
        .consistent {{
            background-color: #d5f4e6;
            color: #27ae60;
            font-weight: bold;
        }}
        .inconsistent {{
            background-color: #ffeaa7;
            color: #e17055;
            font-weight: bold;
        }}
        .na-value {{
            background-color: #f8f9fa;
            color: #6c757d;
            font-style: italic;
        }}
        .signal-category {{
            background-color: #ecf0f1;
            font-weight: bold;
            text-align: left;
            padding-left: 15px;
        }}
        .time-header {{
            writing-mode: vertical-rl;
            text-orientation: mixed;
            background-color: #34495e;
            color: white;
            font-weight: bold;
            min-width: 80px;
        }}
        .status-good {{
            color: #27ae60;
            font-weight: bold;
        }}
        .status-warning {{
            color: #f39c12;
            font-weight: bold;
        }}
        .status-error {{
            color: #e74c3c;
            font-weight: bold;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>🔬 RTL vs 网表仿真波形一致性验证报告</h1>
        
        <div class="summary-box">
            <h2 style="color: white; margin-top: 0;">📊 验证结果总览</h2>
            <div class="consistency-rate">{consistency_rate:.1f}%</div>
            <p>信号一致性率</p>
            <p>对比了 {len(comparison_results)} 个关键信号在 {len(self.key_timepoints)} 个时间点的值</p>
            <p>总计 {total_comparisons} 次对比，其中 {consistent_comparisons} 次一致</p>
        </div>

        <h2>📋 详细对比结果</h2>
        
        <table class="comparison-table">
            <thead>
                <tr>
                    <th rowspan="2">信号名称</th>
                    <th rowspan="2">信号类型</th>
        """
        
        # 添加时间点表头
        for time_point in self.key_timepoints:
            time_ns = time_point / 1000  # 转换为ns
            html_content += f'<th class="time-header">{time_ns:.0f}ns</th>'
        
        html_content += """
                </tr>
            </thead>
            <tbody>
        """
        
        # 按类别组织信号
        for category, signals in self.key_signals.items():
            category_names = {
                'clock_signals': '⏰ 时钟信号',
                'reset_signals': '🔄 复位信号', 
                'ip_select_signals': '🎛️ IP选择信号',
                'io_signals': '📡 IO信号'
            }
            
            # 类别标题行
            html_content += f"""
                <tr>
                    <td colspan="{2 + len(self.key_timepoints)}" class="signal-category">
                        {category_names.get(category, category)}
                    </td>
                </tr>
            """
            
            # 信号详细对比
            for signal in signals:
                if signal in comparison_results:
                    html_content += f"""
                        <tr>
                            <td><strong>{signal}</strong></td>
                            <td>{category_names.get(category, category).replace('🎛️ ', '').replace('⏰ ', '').replace('🔄 ', '').replace('📡 ', '')}</td>
                    """
                    
                    for time_point in self.key_timepoints:
                        if time_point in comparison_results[signal]:
                            result = comparison_results[signal][time_point]
                            rtl_val = result['rtl_value']
                            net_val = result['netlist_value']
                            consistent = result['consistent']
                            
                            if rtl_val == "N/A" and net_val == "N/A":
                                cell_class = "na-value"
                                cell_content = "N/A"
                            elif consistent:
                                cell_class = "consistent"
                                cell_content = f"✅<br>RTL: {rtl_val}<br>NET: {net_val}"
                            else:
                                cell_class = "inconsistent"
                                cell_content = f"❌<br>RTL: {rtl_val}<br>NET: {net_val}"
                            
                            html_content += f'<td class="{cell_class}">{cell_content}</td>'
                        else:
                            html_content += '<td class="na-value">N/A</td>'
                    
                    html_content += "</tr>"
        
        html_content += """
            </tbody>
        </table>

        <h2>📊 一致性统计</h2>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>信号类别</th>
                    <th>信号数量</th>
                    <th>对比次数</th>
                    <th>一致次数</th>
                    <th>一致性率</th>
                    <th>状态</th>
                </tr>
            </thead>
            <tbody>
        """
        
        # 按类别统计
        category_names = {
            'clock_signals': '⏰ 时钟信号',
            'reset_signals': '🔄 复位信号', 
            'ip_select_signals': '🎛️ IP选择信号',
            'io_signals': '📡 IO信号'
        }
        
        for category, signals in self.key_signals.items():
            category_total = 0
            category_consistent = 0
            
            for signal in signals:
                if signal in comparison_results:
                    for time_point in comparison_results[signal]:
                        category_total += 1
                        if comparison_results[signal][time_point]['consistent']:
                            category_consistent += 1
            
            category_rate = (category_consistent / category_total * 100) if category_total > 0 else 0
            
            if category_rate >= 95:
                status = '<span class="status-good">✅ 优秀</span>'
            elif category_rate >= 80:
                status = '<span class="status-warning">⚠️ 良好</span>'
            else:
                status = '<span class="status-error">❌ 需要检查</span>'
            
            html_content += f"""
                <tr>
                    <td>{category_names.get(category, category)}</td>
                    <td>{len(signals)}</td>
                    <td>{category_total}</td>
                    <td>{category_consistent}</td>
                    <td>{category_rate:.1f}%</td>
                    <td>{status}</td>
                </tr>
            """
        
        html_content += f"""
            </tbody>
        </table>

        <h2>🎯 验证结论</h2>
        
        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; {'background-color: #d5f4e6; border-left: 4px solid #27ae60;' if consistency_rate >= 95 else 'background-color: #ffeaa7; border-left: 4px solid #f39c12;' if consistency_rate >= 80 else 'background-color: #ffebee; border-left: 4px solid #e74c3c;'}">
            <h3>{'✅ 验证通过' if consistency_rate >= 95 else '⚠️ 需要关注' if consistency_rate >= 80 else '❌ 验证失败'}</h3>
            <p><strong>总体一致性率: {consistency_rate:.1f}%</strong></p>
            
            {'<p>RTL和网表仿真在关键信号上表现出优秀的一致性，综合过程正确保持了设计功能。</p>' if consistency_rate >= 95 else 
             '<p>RTL和网表仿真在大部分信号上保持一致，但存在一些差异需要进一步分析。</p>' if consistency_rate >= 80 else
             '<p>RTL和网表仿真存在显著差异，需要详细检查综合过程和仿真设置。</p>'}
        </div>

        <h2>🛠️ 建议行动</h2>
        
        <div style="background-color: #e8f4fd; padding: 15px; border-radius: 5px; margin: 15px 0;">
            <h3>🔍 进一步分析建议</h3>
            <ul>
                <li>使用GTKWave详细查看不一致的信号波形</li>
                <li>检查综合约束和时序设置</li>
                <li>验证testbench激励的一致性</li>
                <li>分析门级延迟对信号时序的影响</li>
            </ul>
        </div>

        <div style="background-color: #f0f8ff; padding: 15px; border-radius: 5px; margin: 15px 0;">
            <h3>📋 查看波形命令</h3>
            <pre style="background-color: #2c3e50; color: #ecf0f1; padding: 10px; border-radius: 5px;">
# 并排查看两个仿真波形
gtkwave -T "RTL Simulation" {self.rtl_vcd} &
gtkwave -T "Netlist Simulation" {self.netlist_vcd} &

# 或使用便捷脚本
./view_waveform_comparison.sh
            </pre>
        </div>

        <hr>
        <p style="text-align: center; color: #7f8c8d; font-size: 12px;">
            验证报告生成时间: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')} | 
            工具: Python波形验证器 | 
            项目: asic_top 一致性验证
        </p>
    </div>
</body>
</html>
        """
        
        with open(self.report_file, 'w', encoding='utf-8') as f:
            f.write(html_content)
        
        print(f"✅ 一致性验证报告已生成: {self.report_file}")
        print(f"📊 总体一致性率: {consistency_rate:.1f}%")
        
        if consistency_rate >= 95:
            print("🎉 验证通过！RTL和网表仿真高度一致")
        elif consistency_rate >= 80:
            print("⚠️ 大部分信号一致，建议进一步检查差异")
        else:
            print("❌ 发现显著差异，需要详细分析")

def main():
    verifier = WaveformVerifier()
    
    print("=" * 60)
    print("🔬 RTL vs 网表仿真波形一致性详细验证")
    print("=" * 60)
    
    if verifier.analyze_consistency():
        print(f"\n✅ 验证完成！")
        print(f"📄 详细报告: {verifier.report_file}")
        print(f"\n🌐 查看报告:")
        print(f"   open {verifier.report_file}")
    else:
        print("❌ 验证失败，请检查VCD文件")
        return 1
    
    return 0

if __name__ == "__main__":
    sys.exit(main())