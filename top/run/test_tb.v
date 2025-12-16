module test_tb;

reg clk;
reg rst_n;
reg [7:0] data_in;
wire [7:0] data_out;
wire valid;

// 实例化被测模块
test_module dut (
    .clk(clk),
    .rst_n(rst_n),
    .data_in(data_in),
    .data_out(data_out),
    .valid(valid)
);

// 时钟生成
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// 测试激励
initial begin
    $display("VCS Test Started");
    
    // 初始化
    rst_n = 0;
    data_in = 8'h00;
    
    // 复位
    #20 rst_n = 1;
    
    // 测试数据
    #10 data_in = 8'h10;
    #10 data_in = 8'h20;
    #10 data_in = 8'hFF;
    
    // 检查结果
    #10;
    if (data_out == 8'h00 && valid == 1'b1) begin
        $display("PASS: Output = %h, Valid = %b", data_out, valid);
    end else begin
        $display("FAIL: Output = %h, Valid = %b", data_out, valid);
    end
    
    #50;
    $display("VCS Test Completed");
    $finish;
end

// 波形输出
initial begin
    $fsdbDumpfile("test.fsdb");
    $fsdbDumpvars(0, test_tb);
end

endmodule
