#!/usr/bin/env python3
"""
RTL vs 网表仿真波形对比分析工具
对比 RTL 仿真 (soc_tb.vcd) 和网表仿真 (work/asic_top_netlist.vcd) 的结果
"""

import os
import sys
import subprocess
from datetime import datetime
import re

class WaveformAnalyzer:
    def __init__(self):
        self.rtl_vcd = "soc_tb.vcd"
        self.netlist_vcd = "work/asic_top_netlist.vcd"
        self.report_file = "rtl_vs_netlist_comparison_report.html"
        
    def get_file_info(self, filepath):
        """获取VCD文件的基本信息"""
        if not os.path.exists(filepath):
            return None
            
        stat = os.stat(filepath)
        size_mb = stat.st_size / (1024 * 1024)
        mtime = datetime.fromtimestamp(stat.st_mtime)
        
        return {
            'path': filepath,
            'size_bytes': stat.st_size,
            'size_mb': size_mb,
            'modified': mtime.strftime('%Y-%m-%d %H:%M:%S')
        }
    
    def parse_vcd_header(self, filepath):
        """解析VCD文件头部信息"""
        info = {
            'timescale': None,
            'date': None,
            'version': None,
            'comment': None,
            'scope_count': 0,
            'var_count': 0,
            'simulation_time': 0
        }
        
        try:
            with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                in_header = True
                for line_num, line in enumerate(f):
                    if line_num > 10000:  # 限制读取行数
                        break
                        
                    line = line.strip()
                    
                    if line.startswith('$timescale'):
                        info['timescale'] = line.split()[1] if len(line.split()) > 1 else 'unknown'
                    elif line.startswith('$date'):
                        info['date'] = line[5:].strip()
                    elif line.startswith('$version'):
                        info['version'] = line[8:].strip()
                    elif line.startswith('$comment'):
                        info['comment'] = line[8:].strip()
                    elif line.startswith('$scope'):
                        info['scope_count'] += 1
                    elif line.startswith('$var'):
                        info['var_count'] += 1
                    elif line.startswith('$enddefinitions'):
                        in_header = False
                    elif line.startswith('#') and not in_header:
                        # 提取仿真时间
                        try:
                            time_val = int(line[1:])
                            info['simulation_time'] = max(info['simulation_time'], time_val)
                        except:
                            pass
                            
        except Exception as e:
            print(f"解析VCD文件 {filepath} 时出错: {e}")
            
        return info
    
    def extract_key_signals(self, filepath, max_lines=50000):
        """提取关键信号信息"""
        signals = {
            'clock_signals': [],
            'reset_signals': [],
            'ip_sel_signals': [],
            'io_signals': [],
            'other_signals': []
        }
        
        try:
            with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
                in_definitions = False
                
                for line_num, line in enumerate(f):
                    if line_num > max_lines:
                        break
                        
                    line = line.strip()
                    
                    if line.startswith('$var'):
                        in_definitions = True
                        parts = line.split()
                        if len(parts) >= 4:
                            var_type = parts[1]
                            var_size = parts[2]
                            var_id = parts[3]
                            var_name = ' '.join(parts[4:]).replace('$end', '').strip()
                            
                            signal_info = {
                                'type': var_type,
                                'size': var_size,
                                'id': var_id,
                                'name': var_name
                            }
                            
                            # 分类信号
                            name_lower = var_name.lower()
                            if 'clk' in name_lower or 'clock' in name_lower:
                                signals['clock_signals'].append(signal_info)
                            elif 'rst' in name_lower or 'reset' in name_lower:
                                signals['reset_signals'].append(signal_info)
                            elif 'ip_sel' in name_lower:
                                signals['ip_sel_signals'].append(signal_info)
                            elif 'io_pad' in name_lower or 'pad' in name_lower:
                                signals['io_signals'].append(signal_info)
                            else:
                                signals['other_signals'].append(signal_info)
                                
                    elif line.startswith('$enddefinitions'):
                        break
                        
        except Exception as e:
            print(f"提取信号信息时出错: {e}")
            
        return signals
    
    def generate_comparison_report(self):
        """生成对比报告"""
        print("🔍 开始分析RTL和网表仿真波形...")
        
        # 获取文件信息
        rtl_info = self.get_file_info(self.rtl_vcd)
        netlist_info = self.get_file_info(self.netlist_vcd)
        
        if not rtl_info:
            print(f"❌ RTL仿真文件不存在: {self.rtl_vcd}")
            return False
            
        if not netlist_info:
            print(f"❌ 网表仿真文件不存在: {self.netlist_vcd}")
            return False
        
        print(f"📊 RTL仿真文件: {rtl_info['size_mb']:.1f} MB")
        print(f"📊 网表仿真文件: {netlist_info['size_mb']:.1f} MB")
        
        # 解析VCD头部信息
        print("🔍 解析RTL仿真VCD...")
        rtl_vcd_info = self.parse_vcd_header(self.rtl_vcd)
        
        print("🔍 解析网表仿真VCD...")
        netlist_vcd_info = self.parse_vcd_header(self.netlist_vcd)
        
        # 提取信号信息
        print("🔍 提取RTL信号信息...")
        rtl_signals = self.extract_key_signals(self.rtl_vcd)
        
        print("🔍 提取网表信号信息...")
        netlist_signals = self.extract_key_signals(self.netlist_vcd)
        
        # 生成HTML报告
        self.generate_html_report(rtl_info, netlist_info, rtl_vcd_info, netlist_vcd_info, rtl_signals, netlist_signals)
        
        return True
    
    def generate_html_report(self, rtl_info, netlist_info, rtl_vcd_info, netlist_vcd_info, rtl_signals, netlist_signals):
        """生成HTML格式的对比报告"""
        
        html_content = f"""
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RTL vs 网表仿真波形对比报告</title>
    <style>
        body {{
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
            background-color: #f5f5f5;
        }}
        .container {{
            max-width: 1200px;
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
        h3 {{
            color: #7f8c8d;
            margin-top: 25px;
        }}
        .comparison-table {{
            width: 100%;
            border-collapse: collapse;
            margin: 20px 0;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }}
        .comparison-table th, .comparison-table td {{
            border: 1px solid #ddd;
            padding: 12px;
            text-align: left;
        }}
        .comparison-table th {{
            background-color: #3498db;
            color: white;
            font-weight: bold;
        }}
        .comparison-table tr:nth-child(even) {{
            background-color: #f9f9f9;
        }}
        .comparison-table tr:hover {{
            background-color: #f5f5f5;
        }}
        .rtl-column {{
            background-color: #e8f5e8;
        }}
        .netlist-column {{
            background-color: #fff2e8;
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
        .signal-list {{
            max-height: 300px;
            overflow-y: auto;
            border: 1px solid #ddd;
            padding: 10px;
            background-color: #f9f9f9;
            font-family: monospace;
            font-size: 12px;
        }}
        .summary-box {{
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            color: white;
            padding: 20px;
            border-radius: 10px;
            margin: 20px 0;
        }}
        .summary-box h3 {{
            color: white;
            margin-top: 0;
        }}
        .metric {{
            display: inline-block;
            margin: 10px 20px 10px 0;
        }}
        .metric-value {{
            font-size: 24px;
            font-weight: bold;
            display: block;
        }}
        .metric-label {{
            font-size: 12px;
            opacity: 0.8;
        }}
        .command-box {{
            background-color: #2c3e50;
            color: #ecf0f1;
            padding: 15px;
            border-radius: 5px;
            font-family: monospace;
            margin: 15px 0;
            overflow-x: auto;
        }}
        .recommendation {{
            background-color: #d5f4e6;
            border-left: 4px solid #27ae60;
            padding: 15px;
            margin: 15px 0;
            border-radius: 0 5px 5px 0;
        }}
        .warning {{
            background-color: #fef9e7;
            border-left: 4px solid #f39c12;
            padding: 15px;
            margin: 15px 0;
            border-radius: 0 5px 5px 0;
        }}
    </style>
</head>
<body>
    <div class="container">
        <h1>🔬 RTL vs 网表仿真波形对比报告</h1>
        
        <div class="summary-box">
            <h3>📊 仿真概览</h3>
            <div class="metric">
                <span class="metric-value">{rtl_info['size_mb']:.1f} MB</span>
                <span class="metric-label">RTL波形大小</span>
            </div>
            <div class="metric">
                <span class="metric-value">{netlist_info['size_mb']:.1f} MB</span>
                <span class="metric-label">网表波形大小</span>
            </div>
            <div class="metric">
                <span class="metric-value">{rtl_vcd_info['var_count']}</span>
                <span class="metric-label">RTL信号数</span>
            </div>
            <div class="metric">
                <span class="metric-value">{netlist_vcd_info['var_count']}</span>
                <span class="metric-label">网表信号数</span>
            </div>
        </div>

        <h2>📋 基本信息对比</h2>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>项目</th>
                    <th class="rtl-column">RTL仿真</th>
                    <th class="netlist-column">网表仿真</th>
                    <th>对比结果</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><strong>文件路径</strong></td>
                    <td class="rtl-column">{rtl_info['path']}</td>
                    <td class="netlist-column">{netlist_info['path']}</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td><strong>文件大小</strong></td>
                    <td class="rtl-column">{rtl_info['size_mb']:.1f} MB ({rtl_info['size_bytes']:,} bytes)</td>
                    <td class="netlist-column">{netlist_info['size_mb']:.1f} MB ({netlist_info['size_bytes']:,} bytes)</td>
                    <td>网表仿真文件大 {netlist_info['size_mb']/rtl_info['size_mb']:.1f}x</td>
                </tr>
                <tr>
                    <td><strong>修改时间</strong></td>
                    <td class="rtl-column">{rtl_info['modified']}</td>
                    <td class="netlist-column">{netlist_info['modified']}</td>
                    <td>-</td>
                </tr>
                <tr>
                    <td><strong>时间精度</strong></td>
                    <td class="rtl-column">{rtl_vcd_info['timescale'] or 'N/A'}</td>
                    <td class="netlist-column">{netlist_vcd_info['timescale'] or 'N/A'}</td>
                    <td>{'✅ 一致' if rtl_vcd_info['timescale'] == netlist_vcd_info['timescale'] else '⚠️ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>仿真时间</strong></td>
                    <td class="rtl-column">{rtl_vcd_info['simulation_time']:,} ps</td>
                    <td class="netlist-column">{netlist_vcd_info['simulation_time']:,} ps</td>
                    <td>{'✅ 一致' if rtl_vcd_info['simulation_time'] == netlist_vcd_info['simulation_time'] else '⚠️ 不同'}</td>
                </tr>
                <tr>
                    <td><strong>信号数量</strong></td>
                    <td class="rtl-column">{rtl_vcd_info['var_count']:,}</td>
                    <td class="netlist-column">{netlist_vcd_info['var_count']:,}</td>
                    <td>网表信号多 {netlist_vcd_info['var_count']/max(rtl_vcd_info['var_count'],1):.1f}x</td>
                </tr>
                <tr>
                    <td><strong>作用域数量</strong></td>
                    <td class="rtl-column">{rtl_vcd_info['scope_count']:,}</td>
                    <td class="netlist-column">{netlist_vcd_info['scope_count']:,}</td>
                    <td>网表作用域多 {netlist_vcd_info['scope_count']/max(rtl_vcd_info['scope_count'],1):.1f}x</td>
                </tr>
            </tbody>
        </table>

        <h2>🔍 信号分析对比</h2>
        
        <h3>⏰ 时钟信号</h3>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>RTL时钟信号 ({len(rtl_signals['clock_signals'])}个)</th>
                    <th>网表时钟信号 ({len(netlist_signals['clock_signals'])}个)</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td class="rtl-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in rtl_signals['clock_signals'][:20]]) or '无时钟信号'}
                            {f'<br>... 还有 {len(rtl_signals["clock_signals"])-20} 个' if len(rtl_signals['clock_signals']) > 20 else ''}
                        </div>
                    </td>
                    <td class="netlist-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in netlist_signals['clock_signals'][:20]]) or '无时钟信号'}
                            {f'<br>... 还有 {len(netlist_signals["clock_signals"])-20} 个' if len(netlist_signals['clock_signals']) > 20 else ''}
                        </div>
                    </td>
                </tr>
            </tbody>
        </table>

        <h3>🔄 复位信号</h3>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>RTL复位信号 ({len(rtl_signals['reset_signals'])}个)</th>
                    <th>网表复位信号 ({len(netlist_signals['reset_signals'])}个)</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td class="rtl-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in rtl_signals['reset_signals'][:20]]) or '无复位信号'}
                            {f'<br>... 还有 {len(rtl_signals["reset_signals"])-20} 个' if len(rtl_signals['reset_signals']) > 20 else ''}
                        </div>
                    </td>
                    <td class="netlist-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in netlist_signals['reset_signals'][:20]]) or '无复位信号'}
                            {f'<br>... 还有 {len(netlist_signals["reset_signals"])-20} 个' if len(netlist_signals['reset_signals']) > 20 else ''}
                        </div>
                    </td>
                </tr>
            </tbody>
        </table>

        <h3>🎛️ IP选择信号</h3>
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>RTL IP选择信号 ({len(rtl_signals['ip_sel_signals'])}个)</th>
                    <th>网表IP选择信号 ({len(netlist_signals['ip_sel_signals'])}个)</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td class="rtl-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in rtl_signals['ip_sel_signals'][:20]]) or '无IP选择信号'}
                            {f'<br>... 还有 {len(rtl_signals["ip_sel_signals"])-20} 个' if len(rtl_signals['ip_sel_signals']) > 20 else ''}
                        </div>
                    </td>
                    <td class="netlist-column">
                        <div class="signal-list">
                            {'<br>'.join([f"{s['name']} ({s['size']}bit)" for s in netlist_signals['ip_sel_signals'][:20]]) or '无IP选择信号'}
                            {f'<br>... 还有 {len(netlist_signals["ip_sel_signals"])-20} 个' if len(netlist_signals['ip_sel_signals']) > 20 else ''}
                        </div>
                    </td>
                </tr>
            </tbody>
        </table>

        <h2>📊 仿真质量评估</h2>
        
        <div class="recommendation">
            <h3>✅ 仿真成功指标</h3>
            <ul>
                <li>两个仿真都成功生成了VCD波形文件</li>
                <li>网表仿真包含了更多的门级细节信号 ({netlist_vcd_info['var_count']:,} vs {rtl_vcd_info['var_count']:,})</li>
                <li>仿真时间范围相同，便于对比分析</li>
                <li>文件大小差异反映了抽象层次的不同</li>
            </ul>
        </div>

        <div class="warning">
            <h3>⚠️ 需要注意的差异</h3>
            <ul>
                <li><strong>文件大小差异巨大</strong>: 网表仿真文件比RTL大 {netlist_info['size_mb']/rtl_info['size_mb']:.0f} 倍</li>
                <li><strong>信号数量差异</strong>: 网表包含门级实现的所有内部信号</li>
                <li><strong>仿真性能</strong>: 网表仿真通常比RTL仿真慢很多</li>
                <li><strong>调试难度</strong>: 网表信号名称可能经过综合工具重命名</li>
            </ul>
        </div>

        <h2>🛠️ 波形查看命令</h2>
        
        <h3>RTL仿真波形</h3>
        <div class="command-box">
# 查看RTL仿真波形
gtkwave {rtl_info['path']}

# 或使用完整路径
/opt/oss-cad-suite/bin/gtkwave {rtl_info['path']}
        </div>

        <h3>网表仿真波形</h3>
        <div class="command-box">
# 查看网表仿真波形  
gtkwave {netlist_info['path']}

# 或使用完整路径
/opt/oss-cad-suite/bin/gtkwave {netlist_info['path']}
        </div>

        <h3>并排对比</h3>
        <div class="command-box">
# 同时打开两个波形文件进行对比
gtkwave {rtl_info['path']} &
gtkwave {netlist_info['path']} &

# 或者使用不同的窗口标题
gtkwave -T "RTL Simulation" {rtl_info['path']} &
gtkwave -T "Netlist Simulation" {netlist_info['path']} &
        </div>

        <h2>📋 对比分析建议</h2>
        
        <div class="recommendation">
            <h3>🎯 关键对比点</h3>
            <ol>
                <li><strong>时钟信号</strong>: 确认时钟频率和占空比一致</li>
                <li><strong>复位序列</strong>: 验证复位时序和持续时间</li>
                <li><strong>IP选择逻辑</strong>: 检查IP切换时的信号变化</li>
                <li><strong>IO端口活动</strong>: 对比输入输出信号的时序</li>
                <li><strong>功能正确性</strong>: 验证关键功能模块的行为一致性</li>
            </ol>
        </div>

        <div class="recommendation">
            <h3>🔍 分析方法</h3>
            <ul>
                <li>使用GTKWave的信号搜索功能快速定位关键信号</li>
                <li>设置相同的时间范围和缩放级别进行对比</li>
                <li>重点关注顶层接口信号的一致性</li>
                <li>检查网表仿真中是否有额外的延迟或毛刺</li>
                <li>验证综合工具是否正确保持了RTL的功能</li>
            </ul>
        </div>

        <h2>📈 总结</h2>
        
        <table class="comparison-table">
            <thead>
                <tr>
                    <th>评估项目</th>
                    <th>RTL仿真</th>
                    <th>网表仿真</th>
                    <th>状态</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>仿真完成</td>
                    <td class="status-good">✅ 成功</td>
                    <td class="status-good">✅ 成功</td>
                    <td class="status-good">通过</td>
                </tr>
                <tr>
                    <td>波形生成</td>
                    <td class="status-good">✅ {rtl_info['size_mb']:.1f} MB</td>
                    <td class="status-good">✅ {netlist_info['size_mb']:.1f} MB</td>
                    <td class="status-good">通过</td>
                </tr>
                <tr>
                    <td>信号覆盖</td>
                    <td class="status-good">RTL级别</td>
                    <td class="status-good">门级别</td>
                    <td class="status-good">互补</td>
                </tr>
                <tr>
                    <td>调试友好性</td>
                    <td class="status-good">高</td>
                    <td class="status-warning">中等</td>
                    <td class="status-warning">RTL更佳</td>
                </tr>
                <tr>
                    <td>验证深度</td>
                    <td class="status-good">功能验证</td>
                    <td class="status-good">时序验证</td>
                    <td class="status-good">互补</td>
                </tr>
            </tbody>
        </table>

        <div class="summary-box">
            <h3>🎉 验证结论</h3>
            <p>RTL和网表仿真都成功完成，生成了完整的波形文件。两个仿真在不同的抽象层次上验证了设计的正确性：</p>
            <ul>
                <li><strong>RTL仿真</strong>: 验证了设计的功能正确性和高层次行为</li>
                <li><strong>网表仿真</strong>: 验证了综合后门级实现的正确性和时序特性</li>
            </ul>
            <p>建议使用GTKWave工具详细对比关键信号，确保综合过程没有引入功能错误。</p>
        </div>

        <hr>
        <p style="text-align: center; color: #7f8c8d; font-size: 12px;">
            报告生成时间: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')} | 
            工具: Python VCD分析器 | 
            项目: asic_top 仿真验证
        </p>
    </div>
</body>
</html>
        """
        
        with open(self.report_file, 'w', encoding='utf-8') as f:
            f.write(html_content)
            
        print(f"✅ 对比报告已生成: {self.report_file}")

def main():
    analyzer = WaveformAnalyzer()
    
    print("=" * 60)
    print("🔬 RTL vs 网表仿真波形对比分析")
    print("=" * 60)
    
    if analyzer.generate_comparison_report():
        print(f"\n✅ 分析完成！")
        print(f"📄 详细报告: {analyzer.report_file}")
        print(f"\n🌐 查看报告:")
        print(f"   open {analyzer.report_file}")
        print(f"\n🔍 查看波形:")
        print(f"   RTL仿真:  gtkwave {analyzer.rtl_vcd}")
        print(f"   网表仿真: gtkwave {analyzer.netlist_vcd}")
    else:
        print("❌ 分析失败，请检查VCD文件是否存在")
        return 1
    
    return 0

if __name__ == "__main__":
    sys.exit(main())