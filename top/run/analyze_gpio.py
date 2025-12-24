#!/usr/bin/env python3
import re

# 读取VCD文件并提取GPIO信号变化
gpio_signals = {}
signal_map = {}
current_time = 0

with open('asic_matrix_test.vcd', 'r') as f:
    in_defs = True
    for line in f:
        line = line.strip()
        
        # 解析信号定义
        if in_defs and line.startswith('$var'):
            match = re.match(r'\$var wire \d+ (\S+) (io_pad\d+)', line)
            if match:
                symbol = match.group(1)
                signal = match.group(2)
                signal_map[symbol] = signal
                gpio_signals[signal] = '0'
        
        # 结束定义部分
        if line.startswith('$enddefinitions'):
            in_defs = False
            continue
        
        # 解析时间戳
        if line.startswith('#'):
            current_time = int(line[1:])
            if current_time > 200000000:  # 只看前200ms
                break
        
        # 解析信号变化
        if not in_defs and len(line) > 0 and line[0] in '01xz':
            value = line[0]
            symbol = line[1:]
            if symbol in signal_map:
                sig_name = signal_map[symbol]
                gpio_signals[sig_name] = value
                
                # 检查GPIO输出 (io_pad1-31)
                if sig_name.startswith('io_pad'):
                    try:
                        pad_num = int(sig_name[7:])
                        if 1 <= pad_num <= 31 and value == '1':
                            print(f"Time {current_time}ps: {sig_name} = {value}")
                    except:
                        pass

# 打印最终GPIO状态
print("\n=== Final GPIO State (io_pad1-31) ===")
gpio_value = 0
for i in range(1, 32):
    pad = f'io_pad{i}'
    if pad in gpio_signals and gpio_signals[pad] == '1':
        gpio_value |= (1 << (i-1))
        print(f"{pad} = 1")

print(f"\nGPIO Output Value: 0x{gpio_value:08x} ({gpio_value})")
