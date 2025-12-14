#!/usr/bin/env python3
"""
智能波形分析器 - 自动发现和匹配RTL与网表仿真中的对应信号
"""

import os
import sys
import re
from datetime import datetime

class SmartWaveformAnalyzer:
    def __init__(self):
        self.rtl_vcd = "soc_tb.vcd"
        self.netlist_vcd = "work/asic_top_netlist.vcd"
        self.report_file = "smart_waveform_analysis_report.html"
        
    def discover_signals(self, vcd_file, max_lines=100000):
        """发现VCD文件中的所有信号"""
        signals = {}
        
        try:
            with open(vcd_file, 'r', encoding='utf-8', errors='ignore') as f:
                line_count = 0
                for line in f:
                    line_count += 1
                    if line_count > max_lines:
                        break
                        
                    line = line.strip()
                    
                    if line.startswith('$var'):
                        parts = line.split()
                        if len(parts) >= 4:
                            var_type = parts[1]
                            var_size = parts[2]
                            var_id = parts[3]
                            var_name = ' '.join(parts[4:]).replace('$end', '').strip()
                            
                            signals[var_id] = {
                                'name': var_name,
                                'type': var_type,
                                'size': var_size,
                                'id': var_id
                            }
                    
                    elif line.startswith('$enddefinitions'):
                        break
                        
        except Exception as e:
            print(f"发现信号时出错: {e}")
            
        return signals
    
    def categorize_signals(self, signals):
        """将信号按类型分类"""
        categories = {
            'top_level_inputs': [],
            'top_level_outputs': [],
            'top_level_inouts': [],
            'clock_related': [],
            'reset_related': [],
            'ip_select_related': [],
            'internal_signals': []
        }
        
        for signal_id, signal_info in signals.items():
            name = signal_info['name'].lower()
            
            # 顶层信号识别
            if any(keyword in name for keyword in ['_pad', 'pad_']):
                if 'clk' in name or 'clock' in name:
                    categories['clock_related'].append(signal_info)
                elif 'rst' in name or 'reset' in name:
                    categories['reset_related'].append(signal_info)
                elif 'ip_sel' in name:
                    categories['ip_select_related'].append(signal_info)
                elif any(keyword in name for keyword in ['_i_', '_input', 'sys_clk_i']):
                    categories['top_level_inputs'].append(signal_info)
                elif any(keyword in name for keyword in ['_o_', '_output', 'sys_clk_o']):
                    categories['top_level_outputs'].append(signal_info)
                elif 'io_pad' in name:
                    categories['top_level_inouts'].append(signal_info)
            else:
                categories['internal_signals'].append(signal_info)
        
        return categories
    
    def find_matching_signals(self, rtl_categories, netlist_categories):
        """在RTL和网表仿真中找到匹配的信号"""
        matches = {}
        
        # 定义匹配优先级
        priority_categories = [
            'top_level_inputs',
            'top_level_outputs', 
            'top_level_inouts',
            'clock_related',
            'reset_related',
            'ip_select_related'
        ]
        
        for category in priority_categories:
            rtl_signals = rtl_categories.get(category, [])
            netlist_signals = netlist_categories.get(category, [])
            
            matches[category] = []
            
            for rtl_signal in rtl_signals:
                rtl_name = rtl_signal['name']
                
                # 寻找最佳匹配
                best_match = None
                best_score = 0
                
                for netlist_signal in netlist_signals:
                    netlist_name = netlist_signal['name']
                    
                    # 计算匹配分数
                    score = self.calculate_match_score(rtl_name, netlist_name)
                    
                    if score > best_score and score > 0.7:  # 阈值
                        best_score = score
                        best_match = netlist_signal
                
                if best_match:
                    matches[category].append({
                        'rtl_signal': rtl_signal,
                        'netlist_signal': best_match,
                        'match_score': best_score
                    })
        
        return matches
    
    def calculate_match_score(self, name1, name2):
        """计算两个信号名称的匹配分数"""
        name1 = name1.lower().strip()
        name2 = name2.lower().strip()
        
        # 完全匹配
        if name1 == name2:
            return 1.0
        
        # 去除常见前缀后缀再比较
        clean_name1 = self.clean_signal_name(name1)
        clean_name2 = self.clean_signal_name(name2)
        
        if clean_name1 == clean_name2:
            return 0.95
        
        # 包含关系
        if clean_name1 in clean_name2 or clean_name2 in clean_name1:
            return 0.8
        
        # 编辑距离相似度
        similarity = self.string_similarity(clean_name1, clean_name2)
        return similarity
    
    def clean_signal_name(self, name):
        """清理信号名称，去除常见的前缀后缀"""
        # 去除常见的层次路径
        name = re.sub(r'^.*\.', '', name)
        
        # 去除常见的前缀后缀
        prefixes_suffixes = ['tb.', 'dut.', 'u_', 'i_', 'o_', '_i', '_o', '_pad', 'pad_']
        
        for ps in prefixes_suffixes:
            if name.startswith(ps):
                name = name[len(ps):]
            if name.endswith(ps):
                name = name[:-len(ps)]
        
        return name.strip('_')
    
    def string_similarity(self, s1, s2):
        """计算字符串相似度"""
        if not s1 or not s2:
            return 0.0
        
        # 简单的编辑距离相似度
        max_len = max(len(s1), len(s2))
        if max_len == 0:
            return 1.0
        
        # 计算公共子序列长度
        common = 0
        for i, char in enumerate(s1):
            if i < len(s2) and char == s2[i]:
                common += 1
        
        return common / max_len
    
    def extract_signal_transitions(self, vcd_file, signal_ids, max_lines=200000):
        """提取指定信号的状态转换"""
        signal_data = {}
        
        # 初始化信号数据
        for signal_id in signal_ids:
            signal_data[signal_id] = []
        
        try:
            with open(vcd_file, 'r', encoding='utf-8', errors='ignore') as f:
                current_time = 0
                in_data_section = False
                line_count = 0
                
                for line in f:
                    line_count += 1
                    if line_count > max_lines:
                        break
                        
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
                        signal_id = None
                        value = None
                        
                        if line[0] in '01xzXZ':
                            # 单bit信号
                            if len(line) > 1:
                                value = line[0]
                                signal_id = line[1:]
                        elif line.startswith('b'):
                            # 多bit信号
                            parts = line.split()
                            if len(parts) >= 2:
                                value = parts[0][1:]  # 去掉'b'前缀
                                signal_id = parts[1]
                        
                        if signal_id in signal_ids:
                            signal_data[signal_id].append({
                                'time': current_time,
                                'value': value
                            })
        
        except Exception as e:
            print(f"提取信号转换时出错: {e}")
        
        return signal_data
    
    def analyze_waveforms(self):
        """执行智能波形分析"""
        print("🔍 开始智能波形分析...")
        
        # 发现信号
        print("📊 发现RTL仿真信号...")
        rtl_signals = self.discover_signals(self.rtl_vcd)
        print(f"   发现 {len(rtl_signals)} 个RTL信号")
        
        print("📊 发现网表仿真信号...")
        netlist_signals = self.discover_signals(self.netlist_vcd)
        print(f"   发现 {len(netlist_signals)} 个网表信号")
        
        # 分类信号
        print("🏷️ 分类RTL信号...")
        rtl_categories = self.categorize_signals(rtl_signals)
        
        print("🏷️ 分类网表信号...")
        netlist_categories = self.categorize_signals(netlist_signals)
        
        # 寻找匹配
        print("🔗 寻找匹配信号...")
        matches = self.find_matching_signals(rtl_categories, netlist_categories)
        
        # 生成报告
        self.generate_analysis_report(rtl_categories, netlist_categories, matches)
        
        return True
    
    def generate_analysis_report(self, rtl_categories, netlist_categories, matches):
        """生成分析报告"""
        
        # 统计匹配情况
        total_matches = sum(len(matches[cat]) for cat in matches)
        
        html_content = f"""
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>智能波形分析报告</title>
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
        }}
        .stats-grid {{
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
            gap: 20px;
            margin: 20px 0;
        }}
        .stat-card {{
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
            text-align: center;
        }}
        .stat-number {{
            font-size: 36px;
            font-weight: bold;
            color: #3498db;
        }}
        .stat-label {{
            color: #7f8c8d;
            margin-top: 5px;
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
            text-align: left;
        }}
        .comparison-table th {{
            background-color: #3498db;
            color: white;
            font-weight: bold;
        }}
        .match-score-high {{
            background-color: #d5f4e6;
            color: #27ae60;
            font-weight: bold;
        }}
        .match-score-medium {{
            background-color: #ffeaa7;
            color: #f39c12;
            font-weight: bold;
        }}
        .match-score-low {{
            background-color: #ffebee;
            color: #e74c3c;
            font-weight: bold;
        }}
        .category-header {{
            background-color: #ecf0f1;
            font-weight: bold;
            text-align: center;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>🧠 智能波形分析报告</h1>
        
        <div class="summary-box">
            <h2 style="color: white; margin-top: 0;">📊 信号发现与匹配概览</h2>
            <div class="stats-grid">
                <div class="stat-card">
                    <div class="stat-number">{len([s for cat in rtl_categories.values() for s in cat])}</div>
                    <div class="stat-label">RTL信号总数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len([s for cat in netlist_categories.values() for s in cat])}</div>
                    <div class="stat-label">网表信号总数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{total_matches}</div>
                    <div class="stat-label">成功匹配数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(rtl_categories['top_level_inputs']) + len(rtl_categories['top_level_outputs']) + len(rtl_categories['top_level_inouts'])}</div>
                    <div class="stat-label">RTL顶层信号</div>
                </div>
            </div>
        </div>

        <h2>📋 信号分类统计</h2>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>信号类别</th>
                    <th>RTL信号数</th>
                    <th>网表信号数</th>
                    <th>匹配数</th>
                    <th>匹配率</th>
                </tr>
            </thead>
            <tbody>
        """
        
        category_names = {
            'top_level_inputs': '📥 顶层输入',
            'top_level_outputs': '📤 顶层输出',
            'top_level_inouts': '🔄 顶层双向',
            'clock_related': '⏰ 时钟相关',
            'reset_related': '🔄 复位相关',
            'ip_select_related': '🎛️ IP选择相关',
            'internal_signals': '🔧 内部信号'
        }
        
        for category in category_names:
            rtl_count = len(rtl_categories.get(category, []))
            netlist_count = len(netlist_categories.get(category, []))
            match_count = len(matches.get(category, []))
            match_rate = (match_count / rtl_count * 100) if rtl_count > 0 else 0
            
            html_content += f"""
                <tr>
                    <td>{category_names[category]}</td>
                    <td>{rtl_count}</td>
                    <td>{netlist_count}</td>
                    <td>{match_count}</td>
                    <td>{match_rate:.1f}%</td>
                </tr>
            """
        
        html_content += """
            </tbody>
        </table>

        <h2>🔗 详细信号匹配结果</h2>
        """
        
        for category in category_names:
            if category in matches and matches[category]:
                html_content += f"""
                <h3>{category_names[category]}</h3>
                <table class="comparison-table">
                    <thead>
                        <tr>
                            <th>RTL信号名称</th>
                            <th>网表信号名称</th>
                            <th>匹配分数</th>
                            <th>信号类型</th>
                            <th>位宽</th>
                        </tr>
                    </thead>
                    <tbody>
                """
                
                for match in matches[category]:
                    rtl_sig = match['rtl_signal']
                    net_sig = match['netlist_signal']
                    score = match['match_score']
                    
                    if score >= 0.9:
                        score_class = "match-score-high"
                    elif score >= 0.7:
                        score_class = "match-score-medium"
                    else:
                        score_class = "match-score-low"
                    
                    html_content += f"""
                        <tr>
                            <td><code>{rtl_sig['name']}</code></td>
                            <td><code>{net_sig['name']}</code></td>
                            <td class="{score_class}">{score:.2f}</td>
                            <td>{rtl_sig['type']}</td>
                            <td>{rtl_sig['size']}</td>
                        </tr>
                    """
                
                html_content += """
                    </tbody>
                </table>
                """
        
        html_content += f"""
        <h2>🎯 分析结论</h2>
        
        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #e8f4fd; border-left: 4px solid #3498db;">
            <h3>📊 信号匹配情况</h3>
            <ul>
                <li><strong>总匹配数</strong>: {total_matches} 对信号</li>
                <li><strong>顶层信号匹配</strong>: 重点关注输入输出信号的对应关系</li>
                <li><strong>时钟复位信号</strong>: 关键系统信号的匹配情况</li>
                <li><strong>IP选择信号</strong>: 控制逻辑信号的对应关系</li>
            </ul>
        </div>

        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #f0f8ff; border-left: 4px solid #2196f3;">
            <h3>🔍 下一步验证建议</h3>
            <ol>
                <li><strong>重点验证顶层信号</strong>: 确保输入输出端口的行为一致</li>
                <li><strong>时序对比</strong>: 使用GTKWave对比匹配信号的时序</li>
                <li><strong>功能验证</strong>: 验证关键控制信号的逻辑正确性</li>
                <li><strong>延迟分析</strong>: 检查网表仿真中的传播延迟</li>
            </ol>
        </div>

        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #f9f9f9; border-left: 4px solid #666;">
            <h3>🛠️ 推荐查看命令</h3>
            <pre style="background-color: #2c3e50; color: #ecf0f1; padding: 10px; border-radius: 5px;">
# 使用GTKWave查看匹配的信号
gtkwave -T "RTL Simulation" {self.rtl_vcd} &
gtkwave -T "Netlist Simulation" {self.netlist_vcd} &

# 使用便捷脚本
./view_waveform_comparison.sh
            </pre>
        </div>

        <hr>
        <p style="text-align: center; color: #7f8c8d; font-size: 12px;">
            智能分析报告生成时间: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')} | 
            工具: Python智能波形分析器 | 
            项目: asic_top 信号匹配分析
        </p>
    </div>
</body>
</html>
        """
        
        with open(self.report_file, 'w', encoding='utf-8') as f:
            f.write(html_content)
        
        print(f"✅ 智能分析报告已生成: {self.report_file}")
        print(f"🔗 发现 {total_matches} 对匹配信号")

def main():
    analyzer = SmartWaveformAnalyzer()
    
    print("=" * 60)
    print("🧠 智能波形分析 - 自动信号发现与匹配")
    print("=" * 60)
    
    if analyzer.analyze_waveforms():
        print(f"\n✅ 智能分析完成！")
        print(f"📄 详细报告: {analyzer.report_file}")
        print(f"\n🌐 查看报告:")
        print(f"   open {analyzer.report_file}")
    else:
        print("❌ 分析失败")
        return 1
    
    return 0

if __name__ == "__main__":
    sys.exit(main())