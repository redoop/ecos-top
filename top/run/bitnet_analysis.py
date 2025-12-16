#!/usr/bin/env python3

def analyze_bitnet_vcd():
    """Analyze BitNet matrix calculation in VCD file"""
    
    signals = {}
    current_time = 0
    
    # Key BitNet signals found in VCD
    target_signals = {
        'io_bitnet_addr', 'io_bitnet_wdata', 'io_bitnet_rdata',
        'io_bitnet_wen', 'io_bitnet_ren', 'io_bitnet_valid',
        'io_bitnet_irq', 'sel_bitnet'
    }
    
    print("=== BitNet Matrix Calculation Analysis ===\n")
    
    with open('soc_tb.vcd', 'r') as f:
        in_header = True
        
        for line in f:
            line = line.strip()
            
            # Parse variable definitions
            if line.startswith('$var') and in_header:
                parts = line.split()
                if len(parts) >= 5:
                    identifier, name = parts[3], parts[4]
                    if name in target_signals:
                        signals[identifier] = {'name': name, 'values': []}
            
            elif line.startswith('$enddefinitions'):
                in_header = False
                print(f"Monitoring {len(signals)} BitNet signals\n")
                break
    
    # Parse value changes
    transactions = []
    
    with open('soc_tb.vcd', 'r') as f:
        for line in f:
            line = line.strip()
            
            if line.startswith('#'):
                current_time = int(line[1:])
            
            elif line and not line.startswith('$'):
                # Parse value changes
                if line.startswith('b'):
                    parts = line.split()
                    if len(parts) == 2:
                        value, identifier = parts[0][1:], parts[1]
                        if identifier in signals:
                            signals[identifier]['values'].append((current_time, value))
                elif len(line) >= 2 and line[0] in '01':
                    value, identifier = line[0], line[1:]
                    if identifier in signals:
                        signals[identifier]['values'].append((current_time, value))
    
    # Analyze BitNet register accesses
    print("=== BitNet Register Access Analysis ===")
    
    addr_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_addr'), None)
    wen_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_wen'), None)
    ren_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_ren'), None)
    wdata_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_wdata'), None)
    rdata_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_rdata'), None)
    irq_sig = next((id for id, info in signals.items() if info['name'] == 'io_bitnet_irq'), None)
    
    # Track register operations
    reg_map = {
        '10001000': 'CTRL_REG',
        '10001004': 'STATUS_REG', 
        '10001008': 'PERF_CYCLES_REG',
        '1000100c': 'SPARSITY_REG',
        '10001010': 'ERROR_CODE_REG',
        '1000101c': 'MATRIX_SIZE_REG',
        '10001020': 'CONFIG_REG'
    }
    
    writes = []
    reads = []
    
    # Collect write operations
    if addr_sig and wen_sig and wdata_sig:
        addr_vals = {t: v for t, v in signals[addr_sig]['values']}
        wen_vals = {t: v for t, v in signals[wen_sig]['values']}
        wdata_vals = {t: v for t, v in signals[wdata_sig]['values']}
        
        for time, wen in signals[wen_sig]['values']:
            if wen == '1':
                addr = addr_vals.get(time, 'unknown')
                wdata = wdata_vals.get(time, 'unknown')
                reg_name = reg_map.get(addr.lower(), f'ADDR_{addr}')
                writes.append((time, reg_name, addr, wdata))
    
    # Collect read operations  
    if addr_sig and ren_sig and rdata_sig:
        for time, ren in signals[ren_sig]['values']:
            if ren == '1':
                addr = next((v for t, v in signals[addr_sig]['values'] if t <= time), 'unknown')
                rdata = next((v for t, v in signals[rdata_sig]['values'] if t >= time), 'unknown')
                reg_name = reg_map.get(addr.lower(), f'ADDR_{addr}')
                reads.append((time, reg_name, addr, rdata))
    
    # Display operations
    print("Write Operations:")
    for time, reg, addr, data in writes[:10]:
        print(f"  {time:>12} ns: {reg:<15} = 0x{data}")
    
    print(f"\nRead Operations:")
    for time, reg, addr, data in reads[:10]:
        print(f"  {time:>12} ns: {reg:<15} = 0x{data}")
    
    # Check for matrix calculation completion
    if irq_sig:
        irq_events = [t for t, v in signals[irq_sig]['values'] if v == '1']
        print(f"\nBitNet IRQ Events: {len(irq_events)}")
        for time in irq_events[:5]:
            print(f"  {time:>12} ns: BitNet operation completed")
    
    # Analysis summary
    print(f"\n=== Analysis Summary ===")
    print(f"Total write operations: {len(writes)}")
    print(f"Total read operations: {len(reads)}")
    
    # Check for expected matrix operations
    matrix_size_writes = [w for w in writes if 'MATRIX_SIZE' in w[1]]
    ctrl_writes = [w for w in writes if 'CTRL' in w[1]]
    status_reads = [r for r in reads if 'STATUS' in r[1]]
    
    print(f"Matrix size configurations: {len(matrix_size_writes)}")
    print(f"Control register writes: {len(ctrl_writes)}")
    print(f"Status register reads: {len(status_reads)}")
    
    # Determine if matrix calculation is working
    if matrix_size_writes and ctrl_writes and (irq_events if irq_sig else True):
        print("\n✓ Matrix calculation appears to be functioning normally")
        print("  - Matrix size configured")
        print("  - Control operations detected")
        if irq_sig and irq_events:
            print("  - Completion interrupts generated")
        return True
    else:
        print("\n✗ Matrix calculation may have issues")
        return False

if __name__ == "__main__":
    analyze_bitnet_vcd()
