// UART输入矩阵计算GPIO输出端到端测试
module uart_gpio_matrix_test;
    
    // UART输入矩阵数据 (2x2矩阵A和B)
    reg [7:0] matrix_a_data [0:3] = {8'h01, 8'h02, 8'h03, 8'h04}; // [[1,2],[3,4]]
    reg [7:0] matrix_b_data [0:3] = {8'h05, 8'h06, 8'h07, 8'h08}; // [[5,6],[7,8]]
    
    // 预期结果: A*B = [[19,22],[43,50]]
    reg [31:0] expected_result [0:3] = {32'h13, 32'h16, 32'h2B, 32'h32};
    
    initial begin
        $display("=== UART输入矩阵计算GPIO输出测试 ===");
        $display("矩阵A: [[1,2],[3,4]]");
        $display("矩阵B: [[5,6],[7,8]]");
        $display("预期结果: [[19,22],[43,50]]");
        
        // 通过UART发送矩阵数据到内存
        send_matrix_via_uart();
        
        // 触发矩阵计算
        trigger_matrix_calculation();
        
        // 检查GPIO输出结果
        verify_gpio_output();
        
        $finish;
    end
    
    task send_matrix_via_uart();
        $display("[%0t] 通过UART发送矩阵数据", $time);
        // 发送矩阵A到地址0x1000
        // 发送矩阵B到地址0x2000
    endtask
    
    task trigger_matrix_calculation();
        $display("[%0t] 触发矩阵计算", $time);
        // 发送计算指令
    endtask
    
    task verify_gpio_output();
        $display("[%0t] 验证GPIO输出结果", $time);
        // 检查GPIO输出是否匹配预期结果
    endtask
    
endmodule
