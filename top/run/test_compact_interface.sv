// Compact Interface Connection Test
// Verify that Compact accelerator interface is properly connected

initial begin
    $display("=== Compact Interface Connection Test ===");
    
    // Wait for system initialization
    wait(soc_tb.r_ext_rst_n == 1'b1);
    repeat(1000) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    // Select IP1 (Compact SoC)
    force soc_tb.r_ip_sel = 3'd1;
    repeat(100) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    $display("[%0t] Testing Compact interface connections...", $time);
    
    // Test Compact register write
    test_compact_write(32'h1000201C, 32'h00000008);  // Matrix size register
    test_compact_write(32'h10002000, 32'h00000001);  // Control register - start
    
    // Test Compact register read
    test_compact_read(32'h10002004);  // Status register
    
    $display("[%0t] Compact interface test completed", $time);
end

// Test Compact register write
task test_compact_write(input [31:0] addr, input [31:0] data);
    $display("[%0t] Compact Write: Addr=0x%08x, Data=0x%08x", $time, addr, data);
    
    // Drive Compact interface signals
    force soc_tb.u_asic_top.ip1_io_compact_addr = addr;
    force soc_tb.u_asic_top.ip1_io_compact_wdata = data;
    force soc_tb.u_asic_top.ip1_io_compact_wen = 1'b1;
    force soc_tb.u_asic_top.ip1_io_compact_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    force soc_tb.u_asic_top.ip1_io_compact_wen = 1'b0;
    force soc_tb.u_asic_top.ip1_io_compact_valid = 1'b0;
    
    repeat(5) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask

// Test Compact register read
task test_compact_read(input [31:0] addr);
    reg [31:0] rdata;
    
    $display("[%0t] Compact Read: Addr=0x%08x", $time, addr);
    
    // Drive Compact interface signals
    force soc_tb.u_asic_top.ip1_io_compact_addr = addr;
    force soc_tb.u_asic_top.ip1_io_compact_ren = 1'b1;
    force soc_tb.u_asic_top.ip1_io_compact_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    rdata = soc_tb.u_asic_top.ip1_io_compact_rdata;
    $display("[%0t] Compact Read Data: 0x%08x", $time, rdata);
    
    force soc_tb.u_asic_top.ip1_io_compact_ren = 1'b0;
    force soc_tb.u_asic_top.ip1_io_compact_valid = 1'b0;
    
    repeat(5) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask
