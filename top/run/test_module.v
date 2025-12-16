module test_module (
    input  wire clk,
    input  wire rst_n,
    input  wire [7:0] data_in,
    output reg  [7:0] data_out,
    output reg  valid
);

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        data_out <= 8'h00;
        valid <= 1'b0;
    end else begin
        data_out <= data_in + 1;
        valid <= 1'b1;
    end
end

endmodule
