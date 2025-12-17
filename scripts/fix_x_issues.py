#!/usr/bin/env python3
"""
Script to fix X value issues in SimpleEdgeAiSoC RTL
Patches memory modules and adds proper initialization
"""

import re
import sys

def fix_memory_modules(content):
    """Fix memory modules to prevent X propagation"""
    
    # Fix memory read assignments to return 0 instead of X when not enabled
    patterns = [
        (r'assign R0_data = R0_en \? Memory\[R0_addr\] : 32\'bx;',
         'assign R0_data = R0_en ? Memory[R0_addr] : 32\'h0;'),
        (r'assign R1_data = R1_en \? Memory\[R1_addr\] : 32\'bx;',
         'assign R1_data = R1_en ? Memory[R1_addr] : 32\'h0;'),
        (r'assign R0_data = R0_en \? Memory\[R0_addr\] : 8\'bx;',
         'assign R0_data = R0_en ? Memory[R0_addr] : 8\'h0;'),
        (r'assign R1_data = R1_en \? Memory\[R1_addr\] : 2\'bx;',
         'assign R1_data = R1_en ? Memory[R1_addr] : 2\'h0;'),
        (r'assign R0_data = R0_en \? Memory\[R0_addr\] : 2\'bx;',
         'assign R0_data = R0_en ? Memory[R0_addr] : 2\'h0;'),
    ]
    
    for pattern, replacement in patterns:
        content = re.sub(pattern, replacement, content)
    
    return content

def add_memory_initialization(content):
    """Add memory initialization blocks"""
    
    # Find memory modules and add initialization
    memory_modules = [
        'ip1_matrix_64x32',
        'ip1_activation_256x32', 
        'ip1_weight_256x2',
        'ip1_result_256x32',
        'ip1_ram_16x8'
    ]
    
    for module in memory_modules:
        # Find the module and add initialization
        module_pattern = rf'(module {module}.*?reg \[[^\]]+\] Memory\[0:[^\]]+\];)'
        
        def add_init(match):
            original = match.group(1)
            # Add initialization block after memory declaration
            init_block = '''
  // Initialize memory to prevent X propagation
  initial begin
    for (int i = 0; i < $size(Memory); i++) begin
      Memory[i] = 0;
    end
  end'''
            return original + init_block
        
        content = re.sub(module_pattern, add_init, content, flags=re.DOTALL)
    
    return content

def fix_picorv32_issues(content):
    """Fix PicoRV32 related X issues"""
    
    # Fix register file initialization
    picorv32_init = '''
  // Enhanced register file initialization
  integer i;
  initial begin
    if (REGS_INIT_ZERO) begin
      for (i = 0; i < regfile_size; i = i+1)
        cpuregs[i] = 32'h0;
    end else begin
      // Initialize to prevent X propagation even when REGS_INIT_ZERO is 0
      for (i = 0; i < regfile_size; i = i+1)
        cpuregs[i] = 32'h0;
    end
  end'''
    
    # Replace the existing initialization
    content = re.sub(
        r'integer i;\s*initial begin\s*if \(REGS_INIT_ZERO\) begin\s*for \(i = 0; i < regfile_size; i = i\+1\)\s*cpuregs\[i\] = 0;\s*end\s*end',
        picorv32_init,
        content,
        flags=re.DOTALL
    )
    
    return content

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 fix_x_issues.py input_file output_file")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    
    try:
        with open(input_file, 'r') as f:
            content = f.read()
        
        print("Fixing memory modules...")
        content = fix_memory_modules(content)
        
        print("Adding memory initialization...")
        content = add_memory_initialization(content)
        
        print("Fixing PicoRV32 issues...")
        content = fix_picorv32_issues(content)
        
        with open(output_file, 'w') as f:
            f.write(content)
        
        print(f"Fixed RTL written to {output_file}")
        
    except Exception as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()