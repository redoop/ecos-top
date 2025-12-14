#!/bin/bash

# RTL vs 网表仿真波形对比查看脚本
# 使用GTKWave同时打开两个仿真的波形文件进行对比

echo "=============================================="
echo "🔬 RTL vs 网表仿真波形对比查看工具"
echo "=============================================="

# 检查文件是否存在
RTL_VCD="soc_tb.vcd"
NETLIST_VCD="work/asic_top_netlist.vcd"

if [ ! -f "$RTL_VCD" ]; then
    echo "❌ RTL仿真波形文件不存在: $RTL_VCD"
    exit 1
fi

if [ ! -f "$NETLIST_VCD" ]; then
    echo "❌ 网表仿真波形文件不存在: $NETLIST_VCD"
    exit 1
fi

# 显示文件信息
echo "📊 文件信息:"
echo "   RTL仿真:  $(ls -lh $RTL_VCD | awk '{print $5}') - $RTL_VCD"
echo "   网表仿真: $(ls -lh $NETLIST_VCD | awk '{print $5}') - $NETLIST_VCD"
echo ""

# 检查GTKWave是否可用
GTKWAVE_CMD=""
if command -v gtkwave >/dev/null 2>&1; then
    GTKWAVE_CMD="gtkwave"
elif [ -f "/opt/oss-cad-suite/bin/gtkwave" ]; then
    GTKWAVE_CMD="/opt/oss-cad-suite/bin/gtkwave"
else
    echo "❌ 未找到GTKWave工具"
    echo "   请安装GTKWave或确保oss-cad-suite已安装"
    exit 1
fi

echo "🛠️  使用GTKWave: $GTKWAVE_CMD"
echo ""

# 提供选择菜单
echo "请选择查看方式:"
echo "1) 查看RTL仿真波形"
echo "2) 查看网表仿真波形"  
echo "3) 并排对比两个波形 (推荐)"
echo "4) 查看对比报告"
echo "5) 退出"
echo ""

read -p "请输入选择 (1-5): " choice

case $choice in
    1)
        echo "🔍 打开RTL仿真波形..."
        $GTKWAVE_CMD -T "RTL Simulation - asic_top" "$RTL_VCD" &
        echo "✅ RTL仿真波形已打开"
        ;;
    2)
        echo "🔍 打开网表仿真波形..."
        echo "⚠️  注意: 网表仿真文件较大 (131MB)，可能需要较长加载时间"
        $GTKWAVE_CMD -T "Netlist Simulation - asic_top" "$NETLIST_VCD" &
        echo "✅ 网表仿真波形已打开"
        ;;
    3)
        echo "🔍 并排打开两个波形进行对比..."
        echo "   正在打开RTL仿真波形..."
        $GTKWAVE_CMD -T "RTL Simulation" "$RTL_VCD" &
        sleep 2
        echo "   正在打开网表仿真波形..."
        echo "   ⚠️  网表文件较大，请耐心等待..."
        $GTKWAVE_CMD -T "Netlist Simulation" "$NETLIST_VCD" &
        echo "✅ 两个波形窗口已打开，可以进行对比分析"
        echo ""
        echo "💡 对比建议:"
        echo "   1. 设置相同的时间范围 (0-11.4μs)"
        echo "   2. 重点对比顶层接口信号"
        echo "   3. 检查时钟、复位、IP选择信号"
        echo "   4. 验证关键时序点的一致性"
        ;;
    4)
        echo "📄 查看对比报告..."
        if [ -f "rtl_vs_netlist_comparison_report.html" ]; then
            if command -v open >/dev/null 2>&1; then
                open rtl_vs_netlist_comparison_report.html
                echo "✅ HTML报告已在浏览器中打开"
            else
                echo "📄 HTML报告位置: rtl_vs_netlist_comparison_report.html"
            fi
        fi
        
        if [ -f "RTL_vs_Netlist_Comparison_Summary.md" ]; then
            echo "📄 Markdown报告位置: RTL_vs_Netlist_Comparison_Summary.md"
            echo ""
            echo "📋 快速摘要:"
            echo "   RTL仿真文件:  320 KB"
            echo "   网表仿真文件: 131 MB (409倍差异)"
            echo "   仿真时间:     0-11.4μs"
            echo "   验证状态:     ✅ 两个仿真都成功完成"
        fi
        ;;
    5)
        echo "👋 退出"
        exit 0
        ;;
    *)
        echo "❌ 无效选择"
        exit 1
        ;;
esac

echo ""
echo "=============================================="
echo "🎯 关键对比信号建议:"
echo "=============================================="
echo "⏰ 时钟信号:"
echo "   - sys_clk_i_pad (系统时钟输入)"
echo "   - sys_clk_o_pad (系统时钟输出)"
echo ""
echo "🔄 复位信号:"
echo "   - rst_n_pad (复位输入)"
echo ""
echo "🎛️  IP选择信号:"
echo "   - ip_sel_pad0, ip_sel_pad1, ip_sel_pad2"
echo ""
echo "📡 IO端口信号:"
echo "   - io_pad0 ~ io_pad81 (双向IO)"
echo ""
echo "⏱️  关键时间点:"
echo "   - 0ns: 仿真开始"
echo "   - 200ns: 复位释放"
echo "   - 600ns: IP选择=001"
echo "   - 1000ns: IP选择=010"  
echo "   - 1400ns: IP选择=100"
echo "   - 11400ns: 仿真结束"
echo ""
echo "💡 使用GTKWave的搜索功能快速定位这些信号进行对比"
echo "=============================================="