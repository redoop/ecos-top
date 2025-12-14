#!/bin/bash
# GTKWave 波形助教 快速启动脚本

# 颜色定义
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

echo -e "${GREEN}"
echo "╔════════════════════════════════════════════╗"
echo "║     GTKWave + Claude 波形助教              ║"
echo "╚════════════════════════════════════════════╝"
echo -e "${NC}"

# API 地址配置
API_BASE_URL=""

# 检查 API Base URL
if [ -z "$ANTHROPIC_API_BASE" ]; then
    echo -e "${CYAN}API 地址配置:${NC}"
    echo "  1. 官方地址 (https://api.anthropic.com)"
    echo "  2. 自定义地址"
    echo ""
    read -p "请选择 [1/2] (默认1): " api_choice

    case $api_choice in
        2)
            read -p "请输入 API 地址: " custom_api
            if [ -n "$custom_api" ]; then
                export ANTHROPIC_API_BASE="$custom_api"
                API_BASE_URL="$custom_api"
                echo -e "${GREEN}已设置 API 地址: $custom_api${NC}"
            fi
            ;;
        *)
            echo "使用官方 API 地址"
            ;;
    esac
    echo ""
fi

# 检查 API Key
if [ -z "$ANTHROPIC_API_KEY" ]; then
    echo -e "${YELLOW}警告: 未设置 ANTHROPIC_API_KEY${NC}"
    echo ""
    echo "请先设置 API 密钥:"
    echo "  export ANTHROPIC_API_KEY='你的密钥'"
    echo ""
    echo "获取密钥: https://console.anthropic.com/"
    echo ""
    read -p "请输入你的 API Key (或按 Enter 跳过): " api_key
    if [ -n "$api_key" ]; then
        export ANTHROPIC_API_KEY="$api_key"
    else
        echo "未设置 API Key，程序可能无法正常工作"
    fi
fi

# 进入项目目录
cd /Users/tongxiaojun/ecos-top

# 显示可用的 VCD 文件
echo ""
echo "可用的波形文件:"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
ls -lh top/run/*.vcd 2>/dev/null | awk '{print "  " $NF " (" $5 ")"}'
echo ""

# 显示当前配置
echo -e "${CYAN}当前配置:${NC}"
if [ -n "$ANTHROPIC_API_BASE" ]; then
    echo "  API 地址: $ANTHROPIC_API_BASE"
else
    echo "  API 地址: https://api.anthropic.com (官方)"
fi
echo ""

# 选择模式
echo "请选择模式:"
echo "  1. 交互模式 (推荐) - 持续问答"
echo "  2. 快速截图分析 - 分析当前屏幕"
echo "  3. 打开指定 VCD 文件"
echo ""
read -p "请选择 [1/2/3]: " mode

# 构建 API 参数
API_PARAM=""
if [ -n "$API_BASE_URL" ]; then
    API_PARAM="--api-base $API_BASE_URL"
fi

case $mode in
    1)
        echo ""
        read -p "要自动打开 VCD 文件吗？输入文件名或按 Enter 跳过: " vcd_file
        if [ -n "$vcd_file" ]; then
            python3 waveform_tutor.py -i --vcd "$vcd_file" $API_PARAM
        else
            python3 waveform_tutor.py -i $API_PARAM
        fi
        ;;
    2)
        echo ""
        read -p "请输入你的问题 (或按 Enter 使用默认分析): " question
        if [ -n "$question" ]; then
            python3 waveform_tutor.py --screenshot -q "$question" $API_PARAM
        else
            python3 waveform_tutor.py --screenshot $API_PARAM
        fi
        ;;
    3)
        echo ""
        read -p "请输入 VCD 文件路径: " vcd_file
        python3 waveform_tutor.py --vcd "$vcd_file" $API_PARAM
        ;;
    *)
        echo "默认进入交互模式..."
        python3 waveform_tutor.py -i $API_PARAM
        ;;
esac
