// BitNet Interface Connection Test
// Verify that BitNet accelerator interface is properly connected

initial begin
    $display("=== BitNet Interface Connection Test ===");
    
    // Wait for system initialization
    wait(soc_tb.r_ext_rst_n == 1'b1);
    repeat(1000) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    // Select IP1 (BitNet SoC)
    force soc_tb.r_ip_sel = 3'd1;
    repeat(100) @(posedge soc_tb.osc_clk_25m_i_pad);
    
    $display("[%0t] Testing BitNet interface connections...", $time);
    
    // Test BitNet register write
    test_bitnet_write(32'h1000101C, 32'h00000008);  // Matrix size register
    test_bitnet_write(32'h10001000, 32'h00000001);  // Control register - start
    
    // Test BitNet register read
    test_bitnet_read(32'h10001004);  // Status register
    
    $display("[%0t] BitNet interface test completed", $time);
end

// Test BitNet register write
task test_bitnet_write(input [31:0] addr, input [31:0] data);
    $display("[%0t] BitNet Write: Addr=0x%08x, Data=0x%08x", $time, addr, data);
    
    // Drive BitNet interface signals
    force soc_tb.u_asic_top.ip1_io_bitnet_addr = addr;
    force soc_tb.u_asic_top.ip1_io_bitnet_wdata = data;
    force soc_tb.u_asic_top.ip1_io_bitnet_wen = 1'b1;
    force soc_tb.u_asic_top.ip1_io_bitnet_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    force soc_tb.u_asic_top.ip1_io_bitnet_wen = 1'b0;
    force soc_tb.u_asic_top.ip1_io_bitnet_valid = 1'b0;
    
    repeat(5) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask

// Test BitNet register read
task test_bitnet_read(input [31:0] addr);
    reg [31:0] rdata;
    
    $display("[%0t] BitNet Read: Addr=0x%08x", $time, addr);
    
    // Drive BitNet interface signals
    force soc_tb.u_asic_top.ip1_io_bitnet_addr = addr;
    force soc_tb.u_asic_top.ip1_io_bitnet_ren = 1'b1;
    force soc_tb.u_asic_top.ip1_io_bitnet_valid = 1'b1;
    
    @(posedge soc_tb.osc_clk_25m_i_pad);
    
    rdata = soc_tb.u_asic_top.ip1_io_bitnet_rdata;
    $display("[%0t] BitNet Read Data: 0x%08x", $time, rdata);
    
    force soc_tb.u_asic_top.ip1_io_bitnet_ren = 1'b0;
    force soc_tb.u_asic_top.ip1_io_bitnet_valid = 1'b0;
    
    repeat(5) @(posedge soc_tb.osc_clk_25m_i_pad);
endtask
