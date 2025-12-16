#!/usr/bin/env python3

import sys
import re

def analyze_vcd(filename):
    """Analyze VCD file for BitNet matrix calculation signals"""
    
    signals = {}
    time_values = {}
    current_time = 0
    
    # Key signals to monitor
    key_signals = [
        'ctrl_reg', 'status_reg', 'matrix_size_reg', 
        'error_code_reg', 'perf_cycles_reg',
        'bitnet_start', 'bitnet_done', 'bitnet_error'
    ]
    
    print("=== BitNet Matrix Calculation Analysis ===\n")
    
    try:
        with open(filename, 'r') as f:
            in_header = True
            
            for line in f:
                line = line.strip()
                
                # Parse variable definitions
                if line.startswith('$var'):
                    parts = line.split()
                    if len(parts) >= 5:
                        var_type, size, identifier, name = parts[1], parts[2], parts[3], parts[4]
                        # Look for BitNet related signals
                        if any(key in name.lower() for key in key_signals):
                            signals[identifier] = {
                                'name': name,
                                'size': int(size),
                                'values': []
                            }
                
                # End of header
                elif line.startswith('$enddefinitions'):
                    in_header = False
                    print(f"Found {len(signals)} relevant signals:")
                    for sig_id, sig_info in signals.items():
                        print(f"  {sig_info['name']} ({sig_info['size']} bits)")
                    print()
                
                # Parse time changes
                elif line.startswith('#') and not in_header:
                    current_time = int(line[1:])
                
                # Parse value changes
                elif not in_header and len(line) > 0:
                    # Binary values: b<value> <identifier>
                    if line.startswith('b'):
                        parts = line.split()
                        if len(parts) == 2:
                            value, identifier = parts[0][1:], parts[1]
                            if identifier in signals:
                                signals[identifier]['values'].append((current_time, value))
                    
                    # Single bit values: <0/1><identifier>
                    elif len(line) >= 2 and line[0] in '01':
                        value, identifier = line[0], line[1:]
                        if identifier in signals:
                            signals[identifier]['values'].append((current_time, value))
    
    except FileNotFoundError:
        print(f"Error: VCD file '{filename}' not found")
        return False
    except Exception as e:
        print(f"Error reading VCD file: {e}")
        return False
    
    # Analyze signal patterns
    print("=== Signal Analysis ===")
    
    matrix_tests = []
    errors = []
    
    for sig_id, sig_info in signals.items():
        name = sig_info['name']
        values = sig_info['values']
        
        if not values:
            continue
            
        print(f"\n{name}:")
        
        # Show key transitions
        for i, (time, value) in enumerate(values[:10]):  # Show first 10 transitions
            if 'status' in name.lower():
                status_map = {'0': 'IDLE', '1': 'RUNNING', '10': 'DONE', '11': 'ERROR'}
                status_str = status_map.get(value, value)
                print(f"  {time:>12} ns: {status_str}")
            elif 'error' in name.lower() and value != '0':
                errors.append((time, name, value))
                print(f"  {time:>12} ns: ERROR {value}")
            else:
                print(f"  {time:>12} ns: {value}")
        
        if len(values) > 10:
            print(f"  ... ({len(values)-10} more transitions)")
    
    # Summary
    print(f"\n=== Summary ===")
    print(f"Total simulation time: {current_time} ns")
    print(f"Monitored signals: {len(signals)}")
    
    if errors:
        print(f"ERRORS DETECTED: {len(errors)}")
        for time, signal, value in errors:
            print(f"  {time} ns: {signal} = {value}")
        return False
    else:
        print("No errors detected in monitored signals")
        return True

if __name__ == "__main__":
    filename = "soc_tb.vcd"
    success = analyze_vcd(filename)
    sys.exit(0 if success else 1)
