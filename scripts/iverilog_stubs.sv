// Stub modules for iverilog RTL simulation compatibility
// Provides complete PAD module implementations with proper X handling

// PAD power enable stub - improved with proper signal handling
module P65_1233_PWE (
    input  wire E,
    input  wire XIN,
    output wire XOUT,
    output wire XC
);
    // Simple pass-through for clock signals
    assign XOUT = E ? XIN : 1'b0;
    assign XC = E ? XIN : 1'b0;
endmodule

// PAD bidirectional mux stub - improved with proper tri-state handling
module P65_1233_PBMUX (
    inout  wire PAD,
    output wire C,
    output wire A,
    input  wire IE,
    input  wire CS,
    input  wire I,
    input  wire OE,
    input  wire OD,
    input  wire PU,
    input  wire PD,
    input  wire DS0,
    input  wire DS1
);
    // Input path: PAD -> C when IE is enabled
    assign C = IE ? PAD : 1'b0;
    
    // Output path: I -> PAD when OE is enabled
    assign PAD = OE ? I : 1'bz;
    
    // A output (not used in most cases)
    assign A = 1'b0;
    
    // Add weak pull-up/pull-down when pad is floating
    assign (weak1, weak0) PAD = PU ? 1'b1 : (PD ? 1'b0 : 1'bz);
    
endmodule

// tc_clk_buf is already defined in ../top/lib/tc_clk.sv, so we don't need it here