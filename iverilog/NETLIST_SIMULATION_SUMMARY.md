# asic_top 网表仿真运行摘要

## 📋 项目信息

- **项目名称**: SimpleEdgeAiSoC ASIC 设计网表仿真
- **网表文件**: asic_top_V1210.syn.v (Synopsys DC Ultra 综合)
- **设计工艺**: P65 (1200nm)
- **运行日期**: 2025年12月11日

## 🗂️ 目录结构

```
iverilog/
├── netlist/              # 网表和工艺库文件
│   ├── asic_top_V1210.syn.v          (23 MB - 综合网表)
│   ├── ics55_LLSC_H7CL.v             (909 KB - 标准单元库)
│   ├── ics55_LLSC_H7CR.v             (905 KB - 标准单元库)
│   └── icsIOA_N55_3P3.v              (3.5 KB - IO 库)
├── tb/                   # Testbench 文件
│   └── asic_top_netlist_tb.sv        (简化的网表仿真 testbench)
├── sim/                  # 仿真脚本（预留）
├── work/                 # 仿真输出文件
│   ├── asic_top_netlist              (199 MB - 编译后的可执行文件)
│   ├── asic_top_netlist.vcd          (波形文件，仿真中生成)
│   ├── compile.log                   (编译日志)
│   └── simulation.log                (仿真日志)
├── Makefile              # Makefile 仿真脚本
└── run_sim.sh            # 主仿真运行脚本
```

## ⚙️ 工具配置

### iverilog 版本
- **版本**: Icarus Verilog 12.0 (stable)
- **安装方式**: Homebrew
- **路径**: `/opt/homebrew/bin/iverilog`
- **vvp**: Icarus Verilog runtime version 12.0

### 编译参数
```bash
iverilog -g2009 -Wall \
    -o work/asic_top_netlist \
    netlist/ics55_LLSC_H7CL.v \
    netlist/ics55_LLSC_H7CR.v \
    netlist/icsIOA_N55_3P3.v \
    netlist/asic_top_V1210.syn.v \
    tb/asic_top_netlist_tb.sv
```

## 📊 编译结果

| 项目 | 结果 |
|-----|------|
| 编译状态 | ✅ 成功 |
| 编译时间 | ~2-3 分钟 |
| 可执行文件大小 | 199 MB |
| 编译警告 | ~8000 条 timescale 警告（正常） |
| 编译错误 | 0 条 |

### 编译警告说明
- 主要警告类型: `timescale inherited from another file`
- 原因: 网表中多个模块从库文件继承 timescale
- 影响: 不影响仿真功能（正常）

## ▶️ 仿真状态

| 项目 | 状态 |
|-----|------|
| 仿真状态 | 🔄 运行中 |
| 开始时间 | 2025年12月11日 18:42 |
| 预期运行时间 | 3-10 分钟（取决于系统性能） |
| 模拟时间 | 10,000 ns |
| VCD 文件输出 | 等待中... |

## 🧪 Testbench 功能

简化的 testbench 设计用于基本的网表功能验证：

```verilog
// 时钟: 25 MHz (40ns 周期)
// 复位序列:
//   - t=0ns: 复位 hold (rst_n = 0)
//   - t=200ns: 复位释放 (rst_n = 1)

// IP 选择测试:
//   - t=200-600ns: IP_sel = 3'b000 (default)
//   - t=600-1000ns: IP_sel = 3'b001 (IP1 - SimpleEdgeAiSoC)
//   - t=1000-1400ns: IP_sel = 3'b010 (IP2 - YSYX SoC)
//   - t=1400-10000ns: IP_sel = 3'b100 (IP4)

// 波形跟踪:
//   - $dumpvars: 记录 testbench 和 DUT 的所有信号
//   - VCD 文件: work/asic_top_netlist.vcd
```

## 📈 网表统计

### 模块信息
- **顶层模块**: asic_top
- **总信号数**: 30+ (顶层)
- **内部信号数**: 数百万条（网表）

### 端口概览
```
输入:
  - ip_sel_pad[2:0]   : IP 选择（3 bit）
  - sys_clk_i_pad     : 系统时钟输入
  - rst_n_pad         : 异步复位

输出:
  - sys_clk_o_pad     : 时钟输出

IO 端口:
  - io_pad[81:0]      : 82 个 IO 管脚
```

### 使用的标准单元

编译后统计的标准单元类型：
- **基本逻辑门**: AND2, OR2, NAND2, NOR2, XOR2, XNOR2, MUX...
- **复杂逻辑**: OAI21, OAI22, OAI31, OAI32, AOI21...
- **时序单元**: DFFX, SDFFX, SDFFRX, SDFFTRX
- **特殊单元**: TIEHI, TIELO, BUFX, INVX
- **存储/缓存**: 存储编译器生成的缓存结构

总估计门数: > 100,000 个门单元

## 🔄 后续步骤

### 1. 等待仿真完成
```bash
# 监控仿真进度
tail -f work/simulation.log
ls -lh work/asic_top_netlist.vcd
```

### 2. 查看波形（仿真完成后）
```bash
# 使用 GTKWave 查看
gtkwave work/asic_top_netlist.vcd

# 或使用 Homebrew 安装的 GTKWave
open -a GTKWave work/asic_top_netlist.vcd
```

### 3. 分析波形
- 验证时钟生成
- 检查复位序列
- 确认 IP 选择信号的响应
- 监测 IO 端口活动

## 🛠️ 故障排除

### 如果仿真卡住:
1. 检查 VCD 文件大小: `ls -lh work/asic_top_netlist.vcd`
2. 查看仿真日志: `cat work/simulation.log`
3. 检查内存使用: `top -p $(pgrep vvp)`

### 如果编译失败:
1. 清理工作目录: `make -C iverilog clean`
2. 重新运行: `bash iverilog/run_sim.sh`
3. 检查编译日志: `cat work/compile.log | tail -100`

## 📝 使用建议

### 快速运行
```bash
cd /Users/tongxiaojun/ecos-top/iverilog
bash run_sim.sh
```

### 使用 Makefile
```bash
cd /Users/tongxiaojun/ecos-top/iverilog

# 仅编译
make compile

# 编译并仿真
make all

# 查看仿真结果
make show-results

# 查看波形
make view

# 清理
make clean

# 帮助
make help
```

## 📌 注意事项

1. **网表大小**: 23 MB 的网表文件很大，编译需要 2-3 分钟
2. **内存需求**: 编译和仿真可能需要 2-4 GB 内存
3. **工艺库依赖**: 必须包含 P65 标准单元库文件
4. **Timescale 警告**: 大量警告是正常的，不影响功能

## 📞 相关文件

- **综合脚本**: `/Users/tongxiaojun/ecos-top/top/asic_top_V1210.syn.v` (原始)
- **RTL 设计**: `/Users/tongxiaojun/ecos-top/top/asic_top.sv`
- **工艺库**: `/Users/tongxiaojun/ecos-top/top/lib/`
- **项目根目录**: `/Users/tongxiaojun/ecos-top/`

---

**运行摘要生成时间**: 2025年12月11日 18:45 UTC
