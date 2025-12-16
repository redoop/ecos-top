#!/bin/bash

echo "开始VCS测试..."

# 编译
vcs -full64 +v2k -sverilog -timescale=1ns/10ps \
    -debug_acc+all \
    +define+FSDB \
    test_module.v test_tb.v \
    -o test_simv \
    -l compile_test.log

if [ $? -eq 0 ]; then
    echo "编译成功"
    
    # 运行仿真
    ./test_simv -l sim_test.log
    
    if [ $? -eq 0 ]; then
        echo "仿真完成"
        echo "查看 sim_test.log 获取仿真结果"
    else
        echo "仿真失败"
    fi
else
    echo "编译失败，查看 compile_test.log"
fi
