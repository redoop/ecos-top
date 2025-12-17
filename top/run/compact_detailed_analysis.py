#!/usr/bin/env python3

import sys
import re

def analyze_compact_detailed(vcd_file):
    """详细分析Compact加速器内部状态"""
    
    print("=== Compact加速器详细波形分析 ===\n")
    
    # Compact加速器内部信号ID
    compact_internal_ids = {
        '&C': 'ctrl',
        '&D': 'status', 
        '&E': 'matrixSize',
        '&F': 'perfCycles',
        '&G': 'state',
        '&H': 'i_index',
        '&I': 'j_index', 
        '&J': 'k_index',
        '&@': '_matrixC_ext_R0_data',
        '&A': '_matrixB_ext_R0_data',
        '&B': '_matrixA_ext_R0_data',
        '#R': 'io_irq',
        '#U': 'io_reg_addr',
        '#V': 'io_reg_wdata',
        '#Q': 'io_reg_rdata',
        '#W': 'io_reg_wen',
        '#X': 'io_reg_ren',
        '#Y': 'io_reg_valid'
    }
    
    signal_changes = {name: [] for name in compact_internal_ids.values()}
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
                        if line.startswith('b'):
                            # 多bit信号
                            parts = line.split()
                            if len(parts) >= 2:
                                value = parts[0][1:]  # 去掉'b'前缀
                                sig_id = parts[1]
                                if sig_id in compact_internal_ids:
                                    signal_name = compact_internal_ids[sig_id]
                                    try:
                                        if signal_name == 'state':
                                            # 状态机状态解码
                                            state_val = int(value, 2) if 'x' not in value else -1
                                            state_names = {0: 'IDLE', 1: 'COMPUTE', 2: 'FINALIZE', 3: 'DONE'}
                                            state_str = state_names.get(state_val, f'UNKNOWN({state_val})')
                                            signal_changes[signal_name].append((current_time, state_str))
                                        else:
                                            hex_val = hex(int(value, 2)) if 'x' not in value else 'x'
                                            signal_changes[signal_name].append((current_time, hex_val))
                                    except:
                                        signal_changes[signal_name].append((current_time, value))
                        else:
                            # 单bit信号
                            if len(line) >= 2:
                                value = line[0]
                                sig_id = line[1:]
                                if sig_id in compact_internal_ids:
                                    signal_name = compact_internal_ids[sig_id]
                                    signal_changes[signal_name].append((current_time, value))
                
                if line_num > 3000000:
                    break
    
    except Exception as e:
        print(f"读取VCD文件错误: {e}")
        return
    
    # 分析状态机活动
    print("=== Compact加速器状态机分析 ===")
    state_changes = signal_changes.get('state', [])
    if state_changes:
        print(f"状态机变化次数: {len(state_changes)}")
        print("状态转换序列:")
        for i, (time, state) in enumerate(state_changes[:10]):
            print(f"  {time:>12} ps: {state}")
        
        # 检查是否有计算活动
        compute_states = [s for t, s in state_changes if 'COMPUTE' in str(s)]
        if compute_states:
            print(f"✅ 检测到 {len(compute_states)} 次COMPUTE状态，矩阵计算正在进行")
        else:
            print("⚠️  未检测到COMPUTE状态")
    else:
        print("❌ 未检测到状态机活动")
    
    # 分析控制寄存器
    print(f"\n=== Compact加速器控制寄存器分析 ===")
    ctrl_changes = signal_changes.get('ctrl', [])
    if ctrl_changes:
        print(f"控制寄存器变化: {len(ctrl_changes)} 次")
        for time, value in ctrl_changes[:5]:
            print(f"  {time:>12} ps: {value}")
    
    # 分析性能计数器
    perf_changes = signal_changes.get('perfCycles', [])
    if perf_changes:
        print(f"\n性能计数器变化: {len(perf_changes)} 次")
        if len(perf_changes) >= 2:
            start_cycles = perf_changes[0][1]
            end_cycles = perf_changes[-1][1]
            print(f"  起始值: {start_cycles}")
            print(f"  结束值: {end_cycles}")
            try:
                if isinstance(end_cycles, str) and end_cycles.startswith('0x'):
                    cycles = int(end_cycles, 16) - int(start_cycles, 16) if start_cycles != 'x' else 0
                    print(f"  计算周期数: {cycles}")
            except:
                pass
    
    # 分析矩阵索引
    print(f"\n=== Compact加速器矩阵索引分析 ===")
    for idx_name in ['i_index', 'j_index', 'k_index']:
        idx_changes = signal_changes.get(idx_name, [])
        if idx_changes:
            print(f"{idx_name} 变化: {len(idx_changes)} 次")
            max_val = 0
            for time, value in idx_changes:
                try:
                    if isinstance(value, str) and value.startswith('0x'):
                        val = int(value, 16)
                        max_val = max(max_val, val)
                except:
                    pass
            if max_val > 0:
                print(f"  最大索引值: {max_val} (矩阵大小约为 {max_val+1})")
    
    # 分析中断信号
    print(f"\n=== Compact加速器中断分析 ===")
    irq_changes = signal_changes.get('io_irq', [])
    if irq_changes:
        print(f"中断信号变化: {len(irq_changes)} 次")
        irq_asserts = [(t, v) for t, v in irq_changes if v == '1']
        if irq_asserts:
            print(f"✅ 检测到 {len(irq_asserts)} 次中断断言")
            for time, _ in irq_asserts[:3]:
                print(f"  中断时间: {time} ps")
        else:
            print("⚠️  未检测到中断断言")
    
    # 总体评估
    print(f"\n=== Compact加速器矩阵计算评估 ===")
    
    # 检查关键活动指标
    has_state_activity = len(state_changes) > 1
    has_index_activity = any(len(signal_changes.get(f'{idx}_index', [])) > 1 for idx in ['i', 'j', 'k'])
    has_perf_counting = len(perf_changes) > 1
    has_interrupt = any(v == '1' for t, v in irq_changes)
    
    active_indicators = sum([has_state_activity, has_index_activity, has_perf_counting, has_interrupt])
    
    print(f"活跃指标: {active_indicators}/4")
    
    if active_indicators >= 3:
        print("🎉 Compact加速器矩阵计算功能正常工作")
    elif active_indicators >= 2:
        print("⚠️  Compact加速器部分功能工作")
    else:
        print("❌ Compact加速器矩阵计算功能未激活")
    
    # 具体功能检查
    if has_state_activity:
        print("✅ 状态机正常运行")
    if has_index_activity:
        print("✅ 矩阵索引正常递增")
    if has_perf_counting:
        print("✅ 性能计数器正常工作")
    if has_interrupt:
        print("✅ 计算完成中断正常")

if __name__ == "__main__":
    vcd_file = "/opt/github/ecos-top/top/run/soc_tb.vcd"
    analyze_compact_detailed(vcd_file)
