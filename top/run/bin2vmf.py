#!/usr/bin/env python3

import sys
import struct

def bin2vmf(bin_file, vmf_file):
    with open(bin_file, 'rb') as f:
        data = f.read()
    
    with open(vmf_file, 'w') as f:
        f.write("// VMF file for VCS simulation\n")
        f.write("// Generated from RISC-V 32-bit binary\n\n")
        
        addr = 0
        for i in range(0, len(data), 4):
            # 按4字节对齐读取
            if i + 4 <= len(data):
                word = struct.unpack('<I', data[i:i+4])[0]
            else:
                # 不足4字节时补零
                padded = data[i:] + b'\x00' * (4 - (len(data) - i))
                word = struct.unpack('<I', padded)[0]
            
            f.write(f"@{addr:08X} {word:08X}\n")
            addr += 4

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 bin2vmf.py <input.bin> <output.vmf>")
        sys.exit(1)
    
    bin2vmf(sys.argv[1], sys.argv[2])
