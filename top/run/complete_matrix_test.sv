`timescale 1ns / 1ps

module complete_matrix_test;

    // 时钟和复位
    reg clk;
    reg rst_n;
    
    // UART接口
    reg uart_rx;
    wire uart_tx;
    
    // GPIO接口
    wire [31:0] gpio_out;
    
    // LCD SPI接口
    wire lcd_sclk;
    wire lcd_mosi;
    wire lcd_cs;
    wire lcd_dc;
    wire lcd_rst;
    
    // 测试数据
    reg [7:0] matrix_a [0:3] = {8'h01, 8'h02, 8'h03, 8'h04}; // [[1,2],[3,4]]
    reg [7:0] matrix_b [0:3] = {8'h05, 8'h06, 8'h07, 8'h08}; // [[5,6],[7,8]]
    reg [31:0] expected_result = 32'h13; // 19 = 1*5 + 2*7
    
    // VCD波形输出
    initial begin
        $dumpfile("complete_matrix_test.vcd");
        $dumpvars(0, complete_matrix_test);
    end
    
    // 时钟生成
    initial begin
        clk = 0;
        forever #20 clk = ~clk; // 25MHz
    end
    
    // 复位序列
    initial begin
        rst_n = 0;
        uart_rx = 1;
        #100 rst_n = 1;
        #200;
        
        $display("=== 完整矩阵计算测试开始 ===");
        
        // 1. UART加载程序和数据
        uart_load_program();
        #1000;
        
        uart_load_matrix_data();
        #1000;
        
        // 2. 触发矩阵计算
        trigger_calculation();
        #2000;
        
        // 3. 验证GPIO输出
        verify_gpio_output();
        #1000;
        
        // 4. 验证LCD输出
        verify_lcd_output();
        #1000;
        
        $display("=== 测试完成 ===");
        $finish;
    end
    
    // UART程序加载任务
    task uart_load_program();
        begin
            $display("[%0t] 通过UART加载矩阵计算程序", $time);
            
            // 发送程序加载命令 [0xA5][LOAD_PROG][SIZE][ADDR][DATA]
            uart_send_byte(8'hA5);  // 命令头
            uart_send_byte(8'h01);  // 加载程序命令
            uart_send_byte(8'h20);  // 程序大小32字节
            uart_send_byte(8'h00);  // 地址0x0100
            uart_send_byte(8'h01);
            uart_send_byte(8'h00);
            uart_send_byte(8'h00);
            
            // 发送矩阵计算程序指令
            uart_send_byte(8'h37); uart_send_byte(8'h05); uart_send_byte(8'h00); uart_send_byte(8'h10); // lui a0, 0x1000
            uart_send_byte(8'h37); uart_send_byte(8'h06); uart_send_byte(8'h00); uart_send_byte(8'h20); // lui a1, 0x2000
            uart_send_byte(8'h37); uart_send_byte(8'h07); uart_send_byte(8'h00); uart_send_byte(8'h30); // lui a2, 0x3000
            uart_send_byte(8'h03); uart_send_byte(8'h29); uart_send_byte(8'h05); uart_send_byte(8'h00); // lw s2, 0(a0)
            uart_send_byte(8'h83); uart_send_byte(8'h29); uart_send_byte(8'h85); uart_send_byte(8'h00); // lw s3, 8(a1)
            uart_send_byte(8'h33); uart_send_byte(8'h0B); uart_send_byte(8'h59); uart_send_byte(8'h02); // mul s6, s2, s3
            uart_send_byte(8'h23); uart_send_byte(8'h20); uart_send_byte(8'h17); uart_send_byte(8'h01); // sw s8, 0(a2)
            uart_send_byte(8'h6F); uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00); // j 0
            
            $display("[%0t] 程序加载完成", $time);
        end
    endtask
    
    // UART矩阵数据加载任务
    task uart_load_matrix_data();
        begin
            $display("[%0t] 通过UART加载矩阵数据", $time);
            
            // 加载矩阵A到0x1000
            uart_send_byte(8'hA5);  // 命令头
            uart_send_byte(8'h02);  // 加载数据命令
            uart_send_byte(8'h10);  // 数据大小16字节
            uart_send_byte(8'h00); uart_send_byte(8'h10); uart_send_byte(8'h00); uart_send_byte(8'h00); // 地址0x1000
            
            // 发送矩阵A数据
            for (int i = 0; i < 4; i++) begin
                uart_send_byte(matrix_a[i]);
                uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00); // 32位对齐
            end
            
            // 加载矩阵B到0x2000
            uart_send_byte(8'hA5);  // 命令头
            uart_send_byte(8'h02);  // 加载数据命令
            uart_send_byte(8'h10);  // 数据大小16字节
            uart_send_byte(8'h00); uart_send_byte(8'h20); uart_send_byte(8'h00); uart_send_byte(8'h00); // 地址0x2000
            
            // 发送矩阵B数据
            for (int i = 0; i < 4; i++) begin
                uart_send_byte(matrix_b[i]);
                uart_send_byte(8'h00); uart_send_byte(8'h00); uart_send_byte(8'h00); // 32位对齐
            end
            
            $display("[%0t] 矩阵数据加载完成", $time);
        end
    endtask
    
    // 触发计算任务
    task trigger_calculation();
        begin
            $display("[%0t] 触发矩阵计算", $time);
            
            // 发送计算启动命令
            uart_send_byte(8'hA5);  // 命令头
            uart_send_byte(8'h03);  // 执行命令
            uart_send_byte(8'h00); uart_send_byte(8'h01); uart_send_byte(8'h00); uart_send_byte(8'h00); // 执行地址0x0100
            
            $display("[%0t] 计算命令已发送", $time);
        end
    endtask
    
    // GPIO输出验证任务
    task verify_gpio_output();
        begin
            $display("[%0t] 验证GPIO输出结果", $time);
            
            // 等待计算完成并检查GPIO输出
            #500;
            if (gpio_out == expected_result) begin
                $display("[%0t] ✓ GPIO输出正确: 0x%08x (期望: 0x%08x)", $time, gpio_out, expected_result);
            end else begin
                $display("[%0t] ✗ GPIO输出错误: 0x%08x (期望: 0x%08x)", $time, gpio_out, expected_result);
            end
        end
    endtask
    
    // LCD输出验证任务
    task verify_lcd_output();
        begin
            $display("[%0t] 验证LCD SPI输出", $time);
            
            // 监控LCD SPI信号
            if (lcd_sclk !== 1'bx && lcd_mosi !== 1'bx) begin
                $display("[%0t] ✓ LCD SPI信号正常", $time);
            end else begin
                $display("[%0t] ✗ LCD SPI信号异常", $time);
            end
        end
    endtask
    
    // UART字节发送任务
    task uart_send_byte(input [7:0] data);
        integer i;
        begin
            // 起始位
            uart_rx = 0;
            #8680; // 115200波特率位时间
            
            // 数据位 (LSB first)
            for (i = 0; i < 8; i = i + 1) begin
                uart_rx = data[i];
                #8680;
            end
            
            // 停止位
            uart_rx = 1;
            #8680;
        end
    endtask
    
    // 信号监控
    always @(posedge clk) begin
        if (gpio_out !== 32'h0) begin
            $display("[%0t] GPIO输出变化: 0x%08x", $time, gpio_out);
        end
    end
    
    always @(posedge lcd_sclk) begin
        $display("[%0t] LCD SPI时钟上升沿, 数据: %b", $time, lcd_mosi);
    end

endmodule
