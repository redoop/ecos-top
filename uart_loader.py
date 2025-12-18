#!/usr/bin/env python3
import serial
import time
import struct

class UARTLoader:
    def __init__(self, port='/dev/ttyUSB0', baudrate=115200):
        self.ser = serial.Serial(port, baudrate, timeout=1)
        
    def load_program(self, binary_file, start_addr=0x10000):
        """通过UART加载程序到芯片RAM"""
        with open(binary_file, 'rb') as f:
            data = f.read()
        
        print(f"Loading {len(data)} bytes to address 0x{start_addr:08x}")
        
        # 发送加载命令
        self.send_command('LOAD', start_addr, len(data))
        
        # 发送程序数据
        for i in range(0, len(data), 4):
            chunk = data[i:i+4].ljust(4, b'\x00')
            word = struct.unpack('<I', chunk)[0]
            self.ser.write(struct.pack('<I', word))
            time.sleep(0.001)
        
        print("Program loaded successfully")
    
    def send_command(self, cmd, addr, size):
        """发送控制命令"""
        cmd_bytes = cmd.encode('ascii').ljust(4, b'\x00')
        self.ser.write(cmd_bytes)
        self.ser.write(struct.pack('<II', addr, size))
    
    def start_program(self, start_addr=0x10000):
        """启动程序执行"""
        self.send_command('EXEC', start_addr, 0)
        print(f"Starting program at 0x{start_addr:08x}")

if __name__ == "__main__":
    loader = UARTLoader()
    loader.load_program("uart_matrix_simple.bin")
    loader.start_program()
