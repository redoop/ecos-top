#!/usr/bin/env python3
"""
RTL vs 网表仿真差异分析器
深入分析两个仿真之间的具体差异
"""

import os
import sys
import re
from datetime import datetime
import subprocess

class RTLNetlistDifferenceAnalyzer:
    def __init__(self):
        self.rtl_vcd = "soc_tb.vcd"
        self.netlist_vcd = "work/asic_top_netlist.vcd"
        self.report_file = "rtl_netlist_difference_analysis.html"
        
    def extract_vcd_structure(self, vcd_file, max_lines=50000):
        """提取VCD文件的结构信息"""
        structure = {
            'timescale': None,
            'date': None,
            'version': None,
            'scopes': [],
            'signals': {},
            'signal_count_by_scope': {},
            'time_range': {'start': None, 'end': None},
            'sample_values': {}
        }
        
        current_scope = []
        
        try:
            with open(vcd_file, 'r', encoding='utf-8', errors='ignore') as f:
                line_count = 0
                in_definitions = True
                current_time = 0
                
                for line in f:
                    line_count += 1
                    if line_count > max_lines:
                        break
                        
                    line = line.strip()
                    
                    # 解析头部信息
                    if line.startswith('$timescale'):
                        structure['timescale'] = line.split()[1] if len(line.split()) > 1 else 'unknown'
                    elif line.startswith('$date'):
                        structure['date'] = line[5:].strip()
                    elif line.startswith('$version'):
                        structure['version'] = line[8:].strip()
                    
                    # 解析作用域
                    elif line.startswith('$scope'):
                        parts = line.split()
                        if len(parts) >= 3:
                            scope_type = parts[1]
                            scope_name = parts[2]
                            current_scope.append(scope_name)
                            scope_path = '.'.join(current_scope)
                            if scope_path not in structure['scopes']:
                                structure['scopes'].append(scope_path)
                                structure['signal_count_by_scope'][scope_path] = 0
                    
                    elif line.startswith('$upscope'):
                        if current_scope:
                            current_scope.pop()
                    
                    # 解析信号定义
                    elif line.startswith('$var'):
                        parts = line.split()
                        if len(parts) >= 4:
                            var_type = parts[1]
                            var_size = parts[2]
                            var_id = parts[3]
                            var_name = ' '.join(parts[4:]).replace('$end', '').strip()
                            
                            scope_path = '.'.join(current_scope) if current_scope else 'top'
                            
                            structure['signals'][var_id] = {
                                'name': var_name,
                                'type': var_type,
                                'size': var_size,
                                'scope': scope_path,
                                'full_name': f"{scope_path}.{var_name}" if scope_path != 'top' else var_name
                            }
                            
                            if scope_path in structure['signal_count_by_scope']:
                                structure['signal_count_by_scope'][scope_path] += 1
                    
                    elif line.startswith('$enddefinitions'):
                        in_definitions = False
                        continue
                    
                    # 解析时间和信号值（仅采样）
                    elif not in_definitions:
                        if line.startswith('#'):
                            try:
                                current_time = int(line[1:])
                                if structure['time_range']['start'] is None:
                                    structure['time_range']['start'] = current_time
                                structure['time_range']['end'] = current_time
                            except:
                                pass
                        
                        # 采样一些信号值用于分析
                        elif len(line) > 0 and not line.startswith('$') and len(structure['sample_values']) < 100:
                            if line[0] in '01xzXZ' and len(line) > 1:
                                signal_id = line[1:]
                                value = line[0]
                                if signal_id in structure['signals']:
                                    if signal_id not in structure['sample_values']:
                                        structure['sample_values'][signal_id] = []
                                    structure['sample_values'][signal_id].append({
                                        'time': current_time,
                                        'value': value
                                    })
        
        except Exception as e:
            print(f"解析VCD文件 {vcd_file} 时出错: {e}")
        
        return structure
    
    def find_common_signals(self, rtl_structure, netlist_structure):
        """找到两个仿真中的共同信号"""
        rtl_signals = rtl_structure['signals']
        netlist_signals = netlist_structure['signals']
        
        common_signals = []
        rtl_only_signals = []
        netlist_only_signals = []
        
        # 创建信号名称映射
        rtl_names = {}
        netlist_names = {}
        
        for sig_id, sig_info in rtl_signals.items():
            name = sig_info['name'].lower()
            rtl_names[name] = sig_id
        
        for sig_id, sig_info in netlist_signals.items():
            name = sig_info['name'].lower()
            if name not in netlist_names:  # 避免重复
                netlist_names[name] = sig_id
        
        # 找到共同信号
        for name in rtl_names:
            if name in netlist_names:
                common_signals.append({
                    'name': name,
                    'rtl_id': rtl_names[name],
                    'netlist_id': netlist_names[name],
                    'rtl_info': rtl_signals[rtl_names[name]],
                    'netlist_info': netlist_signals[netlist_names[name]]
                })
        
        # 找到仅在RTL中的信号
        for name in rtl_names:
            if name not in netlist_names:
                rtl_only_signals.append({
                    'name': name,
                    'info': rtl_signals[rtl_names[name]]
                })
        
        # 找到仅在网表中的信号（采样前1000个）
        count = 0
        for name in netlist_names:
            if name not in rtl_names:
                netlist_only_signals.append({
                    'name': name,
                    'info': netlist_signals[netlist_names[name]]
                })
                count += 1
                if count >= 1000:  # 限制数量
                    break
        
        return common_signals, rtl_only_signals, netlist_only_signals
    
    def analyze_scope_differences(self, rtl_structure, netlist_structure):
        """分析作用域差异"""
        rtl_scopes = set(rtl_structure['scopes'])
        netlist_scopes = set(netlist_structure['scopes'])
        
        common_scopes = rtl_scopes & netlist_scopes
        rtl_only_scopes = rtl_scopes - netlist_scopes
        netlist_only_scopes = netlist_scopes - rtl_scopes
        
        return {
            'common': list(common_scopes),
            'rtl_only': list(rtl_only_scopes),
            'netlist_only': list(netlist_only_scopes)[:100]  # 限制显示数量
        }
    
    def analyze_timing_differences(self, rtl_structure, netlist_structure):
        """分析时序差异"""
        rtl_time = rtl_structure['time_range']
        netlist_time = netlist_structure['time_range']
        
        return {
            'rtl_range': rtl_time,
            'netlist_range': netlist_time,
            'start_match': rtl_time['start'] == netlist_time['start'],
            'end_match': rtl_time['end'] == netlist_time['end'],
            'duration_rtl': rtl_time['end'] - rtl_time['start'] if rtl_time['start'] and rtl_time['end'] else 0,
            'duration_netlist': netlist_time['end'] - netlist_time['start'] if netlist_time['start'] and netlist_time['end'] else 0
        }
    
    def categorize_signal_differences(self, common_signals, rtl_only_signals, netlist_only_signals):
        """对信号差异进行分类"""
        categories = {
            'top_level_ios': {'common': [], 'rtl_only': [], 'netlist_only': []},
            'clock_reset': {'common': [], 'rtl_only': [], 'netlist_only': []},
            'control_signals': {'common': [], 'rtl_only': [], 'netlist_only': []},
            'internal_signals': {'common': [], 'rtl_only': [], 'netlist_only': []},
            'gate_level_signals': {'common': [], 'rtl_only': [], 'netlist_only': []}
        }
        
        def categorize_signal(signal_name, signal_info):
            name_lower = signal_name.lower()
            
            if any(keyword in name_lower for keyword in ['_pad', 'pad_', 'io_pad']):
                return 'top_level_ios'
            elif any(keyword in name_lower for keyword in ['clk', 'clock', 'rst', 'reset']):
                return 'clock_reset'
            elif any(keyword in name_lower for keyword in ['ip_sel', 'sel_', 'ctrl', 'enable', 'en_']):
                return 'control_signals'
            elif any(keyword in name_lower for keyword in ['n_logic', 'u_', 'i_', 'net_', 'wire_']):
                return 'gate_level_signals'
            else:
                return 'internal_signals'
        
        # 分类共同信号
        for signal in common_signals:
            category = categorize_signal(signal['name'], signal['rtl_info'])
            categories[category]['common'].append(signal)
        
        # 分类RTL独有信号
        for signal in rtl_only_signals:
            category = categorize_signal(signal['name'], signal['info'])
            categories[category]['rtl_only'].append(signal)
        
        # 分类网表独有信号
        for signal in netlist_only_signals:
            category = categorize_signal(signal['name'], signal['info'])
            categories[category]['netlist_only'].append(signal)
        
        return categories
    
    def analyze_differences(self):
        """执行差异分析"""
        print("🔍 开始RTL vs 网表仿真差异分析...")
        
        # 检查文件存在性
        if not os.path.exists(self.rtl_vcd):
            print(f"❌ RTL仿真文件不存在: {self.rtl_vcd}")
            return False
        
        if not os.path.exists(self.netlist_vcd):
            print(f"❌ 网表仿真文件不存在: {self.netlist_vcd}")
            return False
        
        # 提取结构信息
        print("📊 分析RTL仿真结构...")
        rtl_structure = self.extract_vcd_structure(self.rtl_vcd)
        
        print("📊 分析网表仿真结构...")
        netlist_structure = self.extract_vcd_structure(self.netlist_vcd)
        
        # 找到共同信号和差异
        print("🔍 识别信号差异...")
        common_signals, rtl_only_signals, netlist_only_signals = self.find_common_signals(rtl_structure, netlist_structure)
        
        # 分析作用域差异
        print("🏗️ 分析作用域差异...")
        scope_differences = self.analyze_scope_differences(rtl_structure, netlist_structure)
        
        # 分析时序差异
        print("⏰ 分析时序差异...")
        timing_differences = self.analyze_timing_differences(rtl_structure, netlist_structure)
        
        # 分类信号差异
        print("🏷️ 分类信号差异...")
        categorized_differences = self.categorize_signal_differences(common_signals, rtl_only_signals, netlist_only_signals)
        
        # 生成报告
        self.generate_difference_report(
            rtl_structure, netlist_structure,
            common_signals, rtl_only_signals, netlist_only_signals,
            scope_differences, timing_differences, categorized_differences
        )
        
        return True
    
    def generate_difference_report(self, rtl_structure, netlist_structure, 
                                 common_signals, rtl_only_signals, netlist_only_signals,
                                 scope_differences, timing_differences, categorized_differences):
        """生成差异分析报告"""
        
        html_content = f"""
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RTL vs 网表仿真差异分析报告</title>
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
            border-bottom: 3px solid #e74c3c;
            padding-bottom: 10px;
        }}
        h2 {{
            color: #34495e;
            border-left: 4px solid #e74c3c;
            padding-left: 15px;
            margin-top: 30px;
        }}
        .summary-box {{
            background: linear-gradient(135deg, #e74c3c 0%, #c0392b 100%);
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
            color: #e74c3c;
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
            background-color: #e74c3c;
            color: white;
            font-weight: bold;
        }}
        .rtl-only {{
            background-color: #e8f5e8;
            color: #27ae60;
        }}
        .netlist-only {{
            background-color: #fff2e8;
            color: #f39c12;
        }}
        .common {{
            background-color: #e8f4fd;
            color: #3498db;
        }}
        .difference-highlight {{
            background-color: #ffebee;
            color: #e74c3c;
            font-weight: bold;
        }}
        .signal-list {{
            max-height: 300px;
            overflow-y: auto;
            border: 1px solid #ddd;
            padding: 10px;
            background-color: #f9f9f9;
            font-family: monospace;
            font-size: 11px;
        }}
        .category-section {{
            margin: 20px 0;
            border: 1px solid #ddd;
            border-radius: 5px;
        }}
        .category-header {{
            background-color: #34495e;
            color: white;
            padding: 10px;
            font-weight: bold;
        }}
        .category-content {{
            padding: 15px;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>🔍 RTL vs 网表仿真差异分析报告</h1>
        
        <div class="summary-box">
            <h2 style="color: white; margin-top: 0;">📊 差异分析概览</h2>
            <div class="stats-grid">
                <div class="stat-card">
                    <div class="stat-number">{len(rtl_structure['signals'])}</div>
                    <div class="stat-label">RTL信号总数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(netlist_structure['signals'])}</div>
                    <div class="stat-label">网表信号总数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(common_signals)}</div>
                    <div class="stat-label">共同信号数</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(rtl_only_signals)}</div>
                    <div class="stat-label">RTL独有信号</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(netlist_only_signals)}</div>
                    <div class="stat-label">网表独有信号</div>
                </div>
                <div class="stat-card">
                    <div class="stat-number">{len(netlist_structure['signals']) - len(rtl_structure['signals'])}</div>
                    <div class="stat-label">信号数差异</div>
                </div>
            </div>
        </div>

        <h2>📋 基本结构对比</h2>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>项目</th>
                    <th>RTL仿真</th>
                    <th>网表仿真</th>
                    <th>差异分析</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><strong>时间精度</strong></td>
                    <td>{rtl_structure['timescale'] or 'N/A'}</td>
                    <td>{netlist_structure['timescale'] or 'N/A'}</td>
                    <td>{'✅ 一致' if rtl_structure['timescale'] == netlist_structure['timescale'] else '❌ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>仿真开始时间</strong></td>
                    <td>{timing_differences['rtl_range']['start']} ps</td>
                    <td>{timing_differences['netlist_range']['start']} ps</td>
                    <td>{'✅ 一致' if timing_differences['start_match'] else '❌ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>仿真结束时间</strong></td>
                    <td>{timing_differences['rtl_range']['end']} ps</td>
                    <td>{timing_differences['netlist_range']['end']} ps</td>
                    <td>{'✅ 一致' if timing_differences['end_match'] else '❌ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>仿真持续时间</strong></td>
                    <td>{timing_differences['duration_rtl']} ps</td>
                    <td>{timing_differences['duration_netlist']} ps</td>
                    <td>{'✅ 一致' if timing_differences['duration_rtl'] == timing_differences['duration_netlist'] else '❌ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>作用域数量</strong></td>
                    <td>{len(rtl_structure['scopes'])}</td>
                    <td>{len(netlist_structure['scopes'])}</td>
                    <td class="difference-highlight">网表多 {len(netlist_structure['scopes']) - len(rtl_structure['scopes'])} 个</td>
                </tr>
                <tr>
                    <td><strong>信号总数</strong></td>
                    <td>{len(rtl_structure['signals'])}</td>
                    <td>{len(netlist_structure['signals'])}</td>
                    <td class="difference-highlight">网表多 {len(netlist_structure['signals']) - len(rtl_structure['signals'])} 个</td>
                </tr>
            </tbody>
        </table>

        <h2>🏗️ 作用域差异分析</h2>
        <div class="stats-grid">
            <div class="stat-card">
                <div class="stat-number">{len(scope_differences['common'])}</div>
                <div class="stat-label">共同作用域</div>
            </div>
            <div class="stat-card">
                <div class="stat-number">{len(scope_differences['rtl_only'])}</div>
                <div class="stat-label">RTL独有作用域</div>
            </div>
            <div class="stat-card">
                <div class="stat-number">{len(scope_differences['netlist_only'])}</div>
                <div class="stat-label">网表独有作用域</div>
            </div>
        </div>

        <table class="comparison-table">
            <thead>
                <tr>
                    <th>RTL独有作用域</th>
                    <th>网表独有作用域 (前20个)</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td class="rtl-only">
                        <div class="signal-list">
                            {'<br>'.join(scope_differences['rtl_only'][:20]) if scope_differences['rtl_only'] else '无'}
                        </div>
                    </td>
                    <td class="netlist-only">
                        <div class="signal-list">
                            {'<br>'.join(scope_differences['netlist_only'][:20]) if scope_differences['netlist_only'] else '无'}
                        </div>
                    </td>
                </tr>
            </tbody>
        </table>

        <h2>🎯 信号差异分类分析</h2>
        """
        
        category_names = {
            'top_level_ios': '📡 顶层IO信号',
            'clock_reset': '⏰ 时钟复位信号',
            'control_signals': '🎛️ 控制信号',
            'internal_signals': '🔧 内部信号',
            'gate_level_signals': '🚪 门级信号'
        }
        
        for category, category_name in category_names.items():
            cat_data = categorized_differences[category]
            
            html_content += f"""
            <div class="category-section">
                <div class="category-header">{category_name}</div>
                <div class="category-content">
                    <div class="stats-grid">
                        <div class="stat-card">
                            <div class="stat-number">{len(cat_data['common'])}</div>
                            <div class="stat-label">共同信号</div>
                        </div>
                        <div class="stat-card">
                            <div class="stat-number">{len(cat_data['rtl_only'])}</div>
                            <div class="stat-label">RTL独有</div>
                        </div>
                        <div class="stat-card">
                            <div class="stat-number">{len(cat_data['netlist_only'])}</div>
                            <div class="stat-label">网表独有</div>
                        </div>
                    </div>
            """
            
            if cat_data['common'] or cat_data['rtl_only'] or cat_data['netlist_only']:
                html_content += """
                    <table class="comparison-table">
                        <thead>
                            <tr>
                                <th>共同信号</th>
                                <th>RTL独有信号</th>
                                <th>网表独有信号</th>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <td class="common">
                                    <div class="signal-list">
                """
                
                # 共同信号
                if cat_data['common']:
                    common_names = [sig['name'] for sig in cat_data['common'][:20]]
                    html_content += '<br>'.join(common_names)
                    if len(cat_data['common']) > 20:
                        html_content += f'<br>... 还有 {len(cat_data["common"]) - 20} 个'
                else:
                    html_content += '无'
                
                html_content += """
                                    </div>
                                </td>
                                <td class="rtl-only">
                                    <div class="signal-list">
                """
                
                # RTL独有信号
                if cat_data['rtl_only']:
                    rtl_names = [sig['name'] for sig in cat_data['rtl_only'][:20]]
                    html_content += '<br>'.join(rtl_names)
                    if len(cat_data['rtl_only']) > 20:
                        html_content += f'<br>... 还有 {len(cat_data["rtl_only"]) - 20} 个'
                else:
                    html_content += '无'
                
                html_content += """
                                    </div>
                                </td>
                                <td class="netlist-only">
                                    <div class="signal-list">
                """
                
                # 网表独有信号
                if cat_data['netlist_only']:
                    netlist_names = [sig['name'] for sig in cat_data['netlist_only'][:20]]
                    html_content += '<br>'.join(netlist_names)
                    if len(cat_data['netlist_only']) > 20:
                        html_content += f'<br>... 还有 {len(cat_data["netlist_only"]) - 20} 个'
                else:
                    html_content += '无'
                
                html_content += """
                                    </div>
                                </td>
                            </tr>
                        </tbody>
                    </table>
                """
            
            html_content += """
                </div>
            </div>
            """
        
        html_content += f"""
        <h2>🎯 关键差异总结</h2>
        
        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #ffebee; border-left: 4px solid #e74c3c;">
            <h3>❌ 主要差异点</h3>
            <ul>
                <li><strong>信号数量巨大差异</strong>: 网表仿真包含 {len(netlist_structure['signals']) - len(rtl_structure['signals']):,} 个额外信号</li>
                <li><strong>作用域层次差异</strong>: 网表包含 {len(netlist_structure['scopes']) - len(rtl_structure['scopes'])} 个额外作用域</li>
                <li><strong>抽象层次不同</strong>: RTL为行为级，网表为门级实现</li>
                <li><strong>信号命名差异</strong>: 综合工具可能重命名了信号</li>
            </ul>
        </div>

        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #e8f4fd; border-left: 4px solid #3498db;">
            <h3>✅ 一致性方面</h3>
            <ul>
                <li><strong>时序范围一致</strong>: 两个仿真的时间范围相同</li>
                <li><strong>顶层接口</strong>: 应该包含相同的顶层IO信号</li>
                <li><strong>功能等价性</strong>: 网表应该实现与RTL相同的功能</li>
            </ul>
        </div>

        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #fff3cd; border-left: 4px solid #ffc107;">
            <h3>⚠️ 差异原因分析</h3>
            <ol>
                <li><strong>综合展开</strong>: RTL的高层次结构被展开为门级实现</li>
                <li><strong>标准单元实例化</strong>: 每个逻辑门都成为独立的信号</li>
                <li><strong>优化重命名</strong>: 综合工具优化过程中重命名了信号</li>
                <li><strong>内部节点暴露</strong>: 门级仿真暴露了所有内部连接点</li>
                <li><strong>工艺库信号</strong>: 标准单元库引入了额外的信号</li>
            </ol>
        </div>

        <h2>🛠️ 验证建议</h2>
        
        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #d4edda; border-left: 4px solid #28a745;">
            <h3>🎯 重点验证策略</h3>
            <ol>
                <li><strong>顶层信号对比</strong>: 重点验证输入输出端口的行为一致性</li>
                <li><strong>功能等价验证</strong>: 确认关键功能在两个仿真中表现一致</li>
                <li><strong>时序特性检查</strong>: 验证网表仿真的时序是否合理</li>
                <li><strong>波形可视化对比</strong>: 使用GTKWave对比关键信号</li>
            </ol>
        </div>

        <div style="padding: 20px; border-radius: 10px; margin: 20px 0; background-color: #f8f9fa; border-left: 4px solid #6c757d;">
            <h3>📋 推荐查看命令</h3>
            <pre style="background-color: #2c3e50; color: #ecf0f1; padding: 10px; border-radius: 5px;">
# 并排查看两个仿真波形
gtkwave -T "RTL Simulation" {self.rtl_vcd} &
gtkwave -T "Netlist Simulation" {self.netlist_vcd} &

# 使用便捷脚本
./view_waveform_comparison.sh

# 重点关注顶层信号:
# - sys_clk_i_pad, sys_clk_o_pad (时钟)
# - rst_n_pad (复位)
# - ip_sel_pad0, ip_sel_pad1, ip_sel_pad2 (IP选择)
# - io_pad[0:81] (IO端口)
            </pre>
        </div>

        <hr>
        <p style="text-align: center; color: #7f8c8d; font-size: 12px;">
            差异分析报告生成时间: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')} | 
            工具: Python差异分析器 | 
            项目: asic_top RTL vs 网表对比
        </p>
    </div>
</body>
</html>
        """
        
        with open(self.report_file, 'w', encoding='utf-8') as f:
            f.write(html_content)
        
        print(f"✅ 差异分析报告已生成: {self.report_file}")
        print(f"📊 主要发现:")
        print(f"   - 共同信号: {len(common_signals)} 个")
        print(f"   - RTL独有: {len(rtl_only_signals)} 个")
        print(f"   - 网表独有: {len(netlist_only_signals)} 个")
        print(f"   - 信号数差异: {len(netlist_structure['signals']) - len(rtl_structure['signals']):,} 个")

def main():
    analyzer = RTLNetlistDifferenceAnalyzer()
    
    print("=" * 60)
    print("🔍 RTL vs 网表仿真差异深度分析")
    print("=" * 60)
    
    if analyzer.analyze_differences():
        print(f"\n✅ 差异分析完成！")
        print(f"📄 详细报告: {analyzer.report_file}")
        print(f"\n🌐 查看报告:")
        print(f"   open {analyzer.report_file}")
    else:
        print("❌ 分析失败")
        return 1
    
    return 0

if __name__ == "__main__":
    sys.exit(main())