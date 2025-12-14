#!/usr/bin/env python3
"""
GTKWave + Claude 波形助教
功能：
1. 自动打开 GTKWave 加载波形文件
2. 截图当前屏幕
3. 发送给 Claude 分析波形
4. 语音播报分析结果（可选）

使用方法：
    python waveform_tutor.py --vcd wave.vcd --question "这个时钟信号正常吗？"
    python waveform_tutor.py --screenshot  # 只截图分析当前屏幕
"""

import os
import sys
import time
import base64
import argparse
import subprocess
from pathlib import Path

# 检查依赖
def check_dependencies():
    """检查并安装必要的依赖"""
    required = ['anthropic', 'pillow']
    missing = []

    for pkg in required:
        try:
            __import__(pkg.replace('-', '_'))
        except ImportError:
            missing.append(pkg)

    if missing:
        print(f"正在安装依赖: {', '.join(missing)}")
        subprocess.run([sys.executable, '-m', 'pip', 'install'] + missing,
                      capture_output=True)

    # macOS 截图使用系统命令，不需要额外依赖

check_dependencies()

import anthropic
from PIL import Image

# ============ 配置 ============
GTKWAVE_PATH = "/opt/homebrew/bin/gtkwave"
SCREENSHOT_PATH = "/tmp/waveform_screenshot.png"
DEFAULT_VCD = "/Users/tongxiaojun/ecos-top/top/run/wave.vcd"

# API 配置 (可通过环境变量或命令行参数覆盖)
DEFAULT_API_BASE = "https://api.anthropic.com"  # 官方地址
# 常用代理地址示例:
# - https://api.anthropic.com (官方)
# - https://your-proxy.com/v1 (自建代理)
# - https://openrouter.ai/api/v1 (OpenRouter)

# ============ 核心功能 ============

def open_gtkwave(vcd_file: str, save_file: str = None):
    """打开 GTKWave 并加载 VCD 文件"""
    cmd = [GTKWAVE_PATH, vcd_file]
    if save_file:
        cmd.extend(['-a', save_file])

    print(f"正在打开 GTKWave: {vcd_file}")
    process = subprocess.Popen(cmd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    time.sleep(3)  # 等待 GTKWave 启动
    return process

def take_screenshot() -> str:
    """截取屏幕"""
    # macOS 使用 screencapture 命令
    subprocess.run(['screencapture', '-x', SCREENSHOT_PATH], check=True)
    print(f"截图已保存: {SCREENSHOT_PATH}")
    return SCREENSHOT_PATH

def image_to_base64(image_path: str) -> str:
    """将图片转换为 base64"""
    with open(image_path, "rb") as f:
        return base64.standard_b64encode(f.read()).decode("utf-8")

def analyze_waveform(screenshot_path: str, question: str = None, api_base: str = None) -> str:
    """使用 Claude 分析波形图"""

    api_key = os.environ.get("ANTHROPIC_API_KEY")
    if not api_key:
        return "错误: 请设置 ANTHROPIC_API_KEY 环境变量\nexport ANTHROPIC_API_KEY='你的API密钥'"

    # API 地址优先级: 参数 > 环境变量 > 默认值
    base_url = api_base or os.environ.get("ANTHROPIC_API_BASE") or DEFAULT_API_BASE

    # 创建客户端
    if base_url and base_url != "https://api.anthropic.com":
        client = anthropic.Anthropic(api_key=api_key, base_url=base_url)
        print(f"使用 API 地址: {base_url}")
    else:
        client = anthropic.Anthropic(api_key=api_key)

    image_data = image_to_base64(screenshot_path)

    # 构建提示词
    base_prompt = """你是一位经验丰富的数字电路工程师和波形分析专家。请分析这张 GTKWave 波形图。

请用中文回答，包括以下内容：

1. **信号识别**：识别图中显示的所有信号名称
2. **时钟分析**：如果有时钟信号，分析其频率和周期
3. **信号关系**：分析各信号之间的时序关系
4. **波形特征**：指出任何异常或值得注意的波形特征
5. **功能推断**：根据波形推断这段逻辑可能在做什么

请像老师教学生一样，用通俗易懂的语言解释。"""

    if question:
        base_prompt += f"\n\n用户特别想了解：{question}"

    print("正在分析波形图...")

    response = client.messages.create(
        model="claude-sonnet-4-20250514",
        max_tokens=4096,
        messages=[{
            "role": "user",
            "content": [
                {
                    "type": "image",
                    "source": {
                        "type": "base64",
                        "media_type": "image/png",
                        "data": image_data,
                    },
                },
                {
                    "type": "text",
                    "text": base_prompt
                }
            ],
        }]
    )

    return response.content[0].text

def text_to_speech(text: str):
    """使用 macOS 系统语音朗读文本"""
    # 使用中文语音
    subprocess.run(['say', '-v', 'Ting-Ting', text[:500]])  # 限制长度避免太长

def interactive_mode(vcd_file: str = None, api_base: str = None):
    """交互模式：持续问答"""
    print("\n" + "="*50)
    print("  GTKWave 波形助教 - 交互模式")
    print("="*50)
    print("\n命令:")
    print("  screenshot / s  - 截图并分析")
    print("  open <file>     - 打开新的 VCD 文件")
    print("  voice on/off    - 开启/关闭语音播报")
    print("  api <url>       - 更改 API 地址")
    print("  quit / q        - 退出")
    print("\n直接输入问题，将基于当前截图回答\n")

    # 显示当前 API 配置
    current_api = api_base or os.environ.get("ANTHROPIC_API_BASE") or DEFAULT_API_BASE
    print(f"当前 API 地址: {current_api}\n")

    gtkwave_process = None
    voice_enabled = False

    if vcd_file:
        gtkwave_process = open_gtkwave(vcd_file)

    while True:
        try:
            user_input = input("\n🎓 请输入问题或命令: ").strip()

            if not user_input:
                continue

            if user_input.lower() in ['quit', 'q', 'exit']:
                print("再见！")
                break

            if user_input.lower() in ['screenshot', 's']:
                take_screenshot()
                result = analyze_waveform(SCREENSHOT_PATH, api_base=api_base)
                print("\n" + "="*50)
                print(result)
                print("="*50)
                if voice_enabled:
                    text_to_speech(result)
                continue

            if user_input.lower().startswith('open '):
                new_file = user_input[5:].strip()
                if os.path.exists(new_file):
                    if gtkwave_process:
                        gtkwave_process.terminate()
                    gtkwave_process = open_gtkwave(new_file)
                else:
                    print(f"文件不存在: {new_file}")
                continue

            if user_input.lower().startswith('api '):
                api_base = user_input[4:].strip()
                print(f"API 地址已更改为: {api_base}")
                continue

            if user_input.lower() == 'voice on':
                voice_enabled = True
                print("语音播报已开启")
                continue

            if user_input.lower() == 'voice off':
                voice_enabled = False
                print("语音播报已关闭")
                continue

            # 用户提问 - 截图后分析
            take_screenshot()
            result = analyze_waveform(SCREENSHOT_PATH, user_input, api_base=api_base)
            print("\n" + "="*50)
            print(result)
            print("="*50)
            if voice_enabled:
                text_to_speech(result)

        except KeyboardInterrupt:
            print("\n再见！")
            break
        except Exception as e:
            print(f"错误: {e}")

    if gtkwave_process:
        gtkwave_process.terminate()

def main():
    parser = argparse.ArgumentParser(description='GTKWave + Claude 波形助教')
    parser.add_argument('--vcd', type=str, help='VCD 波形文件路径')
    parser.add_argument('--screenshot', action='store_true', help='只截图分析当前屏幕')
    parser.add_argument('--question', '-q', type=str, help='具体问题')
    parser.add_argument('--interactive', '-i', action='store_true', help='交互模式')
    parser.add_argument('--voice', '-v', action='store_true', help='启用语音播报')
    parser.add_argument('--list', '-l', action='store_true', help='列出可用的 VCD 文件')
    parser.add_argument('--api-base', '--api', type=str,
                       help='API 地址 (默认: https://api.anthropic.com)')
    parser.add_argument('--model', '-m', type=str, default='claude-sonnet-4-20250514',
                       help='模型名称 (默认: claude-sonnet-4-20250514)')

    args = parser.parse_args()

    # 设置 API 地址到环境变量（方便后续使用）
    if args.api_base:
        os.environ["ANTHROPIC_API_BASE"] = args.api_base

    # 列出 VCD 文件
    if args.list:
        vcd_files = list(Path('/Users/tongxiaojun/ecos-top').rglob('*.vcd'))
        print("\n可用的 VCD 文件:")
        for i, f in enumerate(vcd_files, 1):
            size = f.stat().st_size / 1024 / 1024
            print(f"  {i}. {f} ({size:.1f} MB)")
        return

    # 交互模式
    if args.interactive:
        interactive_mode(args.vcd, api_base=args.api_base)
        return

    # 只截图分析
    if args.screenshot:
        take_screenshot()
        result = analyze_waveform(SCREENSHOT_PATH, args.question, api_base=args.api_base)
        print("\n" + result)
        if args.voice:
            text_to_speech(result)
        return

    # 打开 VCD 文件并分析
    vcd_file = args.vcd or DEFAULT_VCD
    if not os.path.exists(vcd_file):
        print(f"文件不存在: {vcd_file}")
        print("使用 --list 查看可用的 VCD 文件")
        return

    process = open_gtkwave(vcd_file)

    print("\nGTKWave 已打开，请调整波形视图后按 Enter 截图分析...")
    input()

    take_screenshot()
    result = analyze_waveform(SCREENSHOT_PATH, args.question, api_base=args.api_base)
    print("\n" + result)

    if args.voice:
        text_to_speech(result)

    print("\n按 Enter 关闭 GTKWave...")
    input()
    process.terminate()

if __name__ == "__main__":
    main()
