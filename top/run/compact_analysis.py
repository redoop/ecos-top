#!/usr/bin/env python3

import sys
import re

def analyze_compact_signals(vcd_file):
    """分析VCD文件中的Compact加速器信号"""
    
    print("=== Compact加速器接口波形分析 ===\n")
    
    # 要分析的Compact加速器信号
    compact_signals = {
        'compact_irq': [],
        'compact_addr': [],
        'compact_wdata': [],
        'compact_rdata': [],
        'compact_wen': [],
        'compact_ren': [],
        'compact_valid': [],
        'compact_state': [],
        'compact_ctrl': [],
        'compact_status': []
    }
    
    signal_ids = {}
    current_time = 0
    
    try:
        with open(vcd_file, 'r') as f:
            in_header = True
            
            for line_num, line in enumerate(f, 1):
                line = line.strip()
                
                if line.startswith('$enddefinitions'):
                    in_header = False
                    continue
                
                if in_header:
                    # 解析信号定义
                    if line.startswith('$var'):
                        parts = line.split()
                        if len(parts) >= 5:
                            signal_id = parts[3]
                            signal_name = parts[4]
                            
                            # 查找Compact相关信号
                            if 'compact' in signal_name.lower():
                                for key in compact_signals.keys():
                                    if key.replace('_', '') in signal_name.lower():
                                        signal_ids[signal_id] = key
                                        print(f"找到Compact信号: {signal_name} -> {key}")
                
                else:
                    # 解析信号变化
                    if line.startswith('#'):
                        current_time = int(line[1:])
                    elif line and not line.startswith('$'):
                        # 信号变化格式: 值+信号ID
                        match = re.match(r'([01xz]+)(.+)', line)
                        if match:
                            value = match.group(1)
                            sig_id = match.group(2)
                            
                            if sig_id in signal_ids:
                                signal_name = signal_ids[sig_id]
                                compact_signals[signal_name].append((current_time, value))
                
                # 限制处理行数以避免内存问题
                if line_num > 1000000:
                    break
    
    except Exception as e:
        print(f"读取VCD文件错误: {e}")
        return
    
    # 分析结果
    print(f"\n=== Compact加速器信号活动分析 ===")
    
    for signal_name, changes in compact_signals.items():
        if changes:
            print(f"\n{signal_name.upper()}:")
            print(f"  信号变化次数: {len(changes)}")
            print(f"  首次变化时间: {changes[0][0]} ps")
            print(f"  最后变化时间: {changes[-1][0]} ps")
            
            # 显示前几次变化
            print("  前5次变化:")
            for i, (time, value) in enumerate(changes[:5]):
                print(f"    {time} ps: {value}")
            
            if len(changes) > 5:
                print("  ...")
        else:
            print(f"\n{signal_name.upper()}: 无信号变化")
    
    # 检查接口活动
    print(f"\n=== Compact加速器接口活动评估 ===")
    
    active_signals = sum(1 for changes in compact_signals.values() if changes)
    total_signals = len(compact_signals)
    
    print(f"活跃信号数量: {active_signals}/{total_signals}")
    
    if active_signals >= 3:
        print("✅ Compact加速器接口显示活跃信号，接口连接成功")
    elif active_signals >= 1:
        print("⚠️  Compact加速器接口部分活跃，可能存在连接问题")
    else:
        print("❌ Compact加速器接口无活动，接口连接失败")
    
    # 检查关键信号
    key_signals = ['compact_irq', 'compact_wen', 'compact_ren', 'compact_valid']
    active_key_signals = sum(1 for sig in key_signals if compact_signals[sig])
    
    print(f"关键控制信号活跃数: {active_key_signals}/{len(key_signals)}")
    
    if compact_signals['compact_irq']:
        print("✅ 检测到Compact中断信号活动")
    
    if compact_signals['compact_wen'] or compact_signals['compact_ren']:
        print("✅ 检测到Compact读写控制信号活动")
    
    if compact_signals['compact_valid']:
        print("✅ 检测到Compact有效信号活动")

if __name__ == "__main__":
    vcd_file = "/opt/github/ecos-top/top/run/soc_tb.vcd"
    analyze_compact_signals(vcd_file)
