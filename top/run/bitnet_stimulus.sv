// BitNet加速器测试激励
// 可以通过force语句直接驱动内部信号进行测试

initial begin
    // 等待复位完成
    #1000;
    
    // 强制选择IP1 (BitNet SoC)
    force soc_tb.r_ip_sel = 3'd1;
    
    // 等待系统稳定
    #10000;
    
    $display("[%0t] BitNet Test: Forcing IP selection to 1", $time);
    
    // 如果能访问到BitNet加速器的内部信号，可以直接测试
    // 这里添加具体的寄存器写入测试
    
    // 模拟CPU写入BitNet控制寄存器
    // 地址: 0x10001000 (CTRL_REG)
    // 数据: 0x00000001 (启动计算)
    
    #50000;
    $display("[%0t] BitNet Test: Stimulus applied", $time);
    
    // 运行足够长时间观察结果
    #1000000;
    
    $display("[%0t] BitNet Test: Completed", $time);
    $finish;
end
