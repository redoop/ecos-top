// Simplified N25Qxxx module for Verilator compatibility
module N25Qxxx (
    input S,
    input C_,
    inout HOLD_DQ3,
    inout DQ0,
    inout DQ1,
    input Vcc,
    inout Vpp_W_DQ2
);

// Simple behavioral model - just tie off signals
assign DQ0 = 1'bz;
assign DQ1 = 1'bz;
assign HOLD_DQ3 = 1'bz;
assign Vpp_W_DQ2 = 1'bz;

initial begin
    $display("N25Qxxx: Simple flash model initialized");
end

endmodule
