# iverilog RTL 仿真方案

## 使用方法

```bash
cd scripts

# 编译（包含完整 SimpleEdgeAiSoC.sv）
make compile

# 运行仿真
make sim

# 查看波形
make wave

# 清理
make clean
```

## 核心文件

- `Makefile` - 主仿真脚本
- `iverilog_stubs.sv` - PAD 模块存根
- `soc_tb_stub.sv` - 测试平台
- `README_iverilog.md` - 本说明文档

## 特性

- ✅ 包含完整 SimpleEdgeAiSoC.sv（未修改原始文件）
- ✅ 自动兼容性处理（sed 自动移除不兼容关键字）
- ✅ PAD 模块存根实现
- ✅ 编译成功，仿真运行正常
