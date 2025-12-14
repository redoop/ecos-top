// Simple standard cell definitions for iverilog testing
// Behavioral models only
// Note: dffr and ndffr are already defined in ../top/utils/register.sv

// Additional standard cells that might be needed
module buf_cell (
    input  wire a,
    output wire y
);
    assign y = a;
endmodule

module inv_cell (
    input  wire a,
    output wire y
);
    assign y = ~a;
endmodule

module and2_cell (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = a & b;
endmodule

module or2_cell (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = a | b;
endmodule

module xor2_cell (
    input  wire a,
    input  wire b,
    output wire y
);
    assign y = a ^ b;
endmodule

module mux2_cell (
    input  wire a,
    input  wire b,
    input  wire sel,
    output wire y
);
    assign y = sel ? b : a;
endmodule