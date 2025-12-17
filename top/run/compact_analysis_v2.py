#!/usr/bin/env python3

import sys
import re

def analyze_compact_signals(vcd_file):
    """分析VCD文件中的Compact加速器信号"""
    
    print("=== Compact加速器接口波形分析 ===\n")
    
    # Compact信号ID映射（从VCD文件中提取）
    compact_signal_ids = {
        '"Y': 'ip1_io_compact_irq',
        '"c': 'ip1_io_compact_addr', 
        '"d': 'ip1_io_compact_wdata',
        '"e': 'ip1_io_compact_rdata',
        '"f': 'ip1_io_compact_wen',
        '"g': 'ip1_io_compact_ren', 
        '"h': 'ip1_io_compact_valid',
        '#E': 'io_compact_irq',
        '#Q': '_compactAccel_io_reg_rdata',
        '#R': '_compactAccel_io_irq',
        '#U': '_decoder_io_compact_addr',
        '#V': '_decoder_io_compact_wdata', 
        '#W': '_decoder_io_compact_wen',
        '#X': '_decoder_io_compact_ren',
        '#Y': '_decoder_io_compact_valid'
    }
    
    signal_changes = {name: [] for name in compact_signal_ids.values()}
    current_time = 0
    
    try:
        with open(vcd_file, 'r') as f:
            in_data_section = False
            
            for line_num, line in enumerate(f, 1):
                line = line.strip()
                
                if line.startswith('$enddefinitions'):
                    in_data_section = True
                    continue
                
                if in_data_section:
                    if line.startswith('#'):
                        current_time = int(line[1:])
                    elif line and not line.startswith('$'):
                        # 解析信号变化
                        # 格式1: 0"Y (单bit信号)
                        # 格式2: b00000000000000000000000000000000 "c (多bit信号)
                        
                        if line.startswith('b'):
                            # 多bit信号
                            parts = line.split()
                            if len(parts) >= 2:
                                value = parts[0][1:]  # 去掉'b'前缀
                                sig_id = parts[1]
                                if sig_id in compact_signal_ids:
                                    signal_name = compact_signal_ids[sig_id]
                                    # 转换为十六进制便于阅读
                                    try:
                                        hex_val = hex(int(value, 2)) if value != 'x' * len(value) else 'x'
                                        signal_changes[signal_name].append((current_time, hex_val))
                                    except:
                                        signal_changes[signal_name].append((current_time, value))
                        else:
                            # 单bit信号
                            if len(line) >= 2:
                                value = line[0]
                                sig_id = line[1:]
                                if sig_id in compact_signal_ids:
                                    signal_name = compact_signal_ids[sig_id]
                                    signal_changes[signal_name].append((current_time, value))
                
                # 限制处理以避免内存问题
                if line_num > 2000000:
                    break
    
    except Exception as e:
        print(f"读取VCD文件错误: {e}")
        return
    
    # 分析结果
    print(f"=== Compact加速器信号活动分析 ===")
    
    active_signals = 0
    for signal_name, changes in signal_changes.items():
        if changes:
            active_signals += 1
            print(f"\n{signal_name}:")
            print(f"  信号变化次数: {len(changes)}")
            print(f"  首次变化时间: {changes[0][0]} ps")
            print(f"  最后变化时间: {changes[-1][0]} ps")
            
            # 显示关键变化
            print("  关键变化:")
            non_zero_changes = [(t, v) for t, v in changes if v not in ['0', '0x0', 'x']]
            if non_zero_changes:
                for i, (time, value) in enumerate(non_zero_changes[:3]):
                    print(f"    {time} ps: {value}")
            else:
                print("    仅有零值变化")
    
    # 总体评估
    print(f"\n=== Compact加速器接口评估 ===")
    total_signals = len([s for s in signal_changes.keys() if signal_changes[s]])
    
    print(f"活跃信号数量: {active_signals}/{len(compact_signal_ids)}")
    
    # 检查关键信号活动
    key_signals = ['_compactAccel_io_irq', '_decoder_io_compact_wen', '_decoder_io_compact_ren', '_decoder_io_compact_valid']
    active_key = sum(1 for sig in key_signals if signal_changes.get(sig, []))
    
    print(f"关键控制信号活跃: {active_key}/{len(key_signals)}")
    
    if signal_changes.get('_compactAccel_io_irq', []):
        print("✅ 检测到Compact加速器中断信号活动")
    
    if signal_changes.get('_decoder_io_compact_wen', []) or signal_changes.get('_decoder_io_compact_ren', []):
        print("✅ 检测到Compact读写控制信号活动")
    
    if signal_changes.get('_decoder_io_compact_valid', []):
        print("✅ 检测到Compact有效信号活动")
    
    # 最终判断
    if active_signals >= 5:
        print("\n🎉 Compact加速器接口连接成功，信号活跃正常")
    elif active_signals >= 2:
        print("\n⚠️  Compact加速器接口部分工作，可能存在配置问题")
    else:
        print("\n❌ Compact加速器接口连接失败或未激活")

if __name__ == "__main__":
    vcd_file = "/opt/github/ecos-top/top/run/soc_tb.vcd"
    analyze_compact_signals(vcd_file)
