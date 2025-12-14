// Patch for soc_tb.sv to make it Verilator compatible
// Replace FSDB dump calls with VCD dump calls

initial begin
    if ($test$plusargs("dump_all")) begin
        $dumpfile("soc_tb.vcd");
        $dumpvars(0, soc_tb);
    end
end
