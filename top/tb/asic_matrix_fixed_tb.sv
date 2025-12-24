`timescale 1ns / 1ps

module asic_matrix_fixed_tb;

    // Clock and reset
    reg sys_clk_i_pad;
    reg rst_n_pad;
    
    // IP selection
    reg ip_sel_pad0, ip_sel_pad1, ip_sel_pad2;
    
    // IO pads
    wire io_pad0, io_pad1, io_pad2, io_pad3;
    wire [81:0] io_pads;
    
    // Test variables
    reg [7:0] matrix_data [0:3];
    integer matrix_count = 0;
    reg [31:0] rom_data;
    wire is_rom_access;
    
    // ROM bootloader program
    reg [31:0] rom_memory [0:255];
    
    // DUT
    asic_top u_asic_top (
        .ip_sel_pad0(ip_sel_pad0),
        .ip_sel_pad1(ip_sel_pad1), 
        .ip_sel_pad2(ip_sel_pad2),
        .sys_clk_i_pad(sys_clk_i_pad),
        .rst_n_pad(rst_n_pad),
        .io_pad0(io_pad0), .io_pad1(io_pad1), .io_pad2(io_pad2), .io_pad3(io_pad3),
        .io_pad4(io_pads[4]), .io_pad5(io_pads[5]), .io_pad6(io_pads[6]), .io_pad7(io_pads[7]),
        .io_pad8(io_pads[8]), .io_pad9(io_pads[9]), .io_pad10(io_pads[10]), .io_pad11(io_pads[11]),
        .io_pad12(io_pads[12]), .io_pad13(io_pads[13]), .io_pad14(io_pads[14]), .io_pad15(io_pads[15]),
        .io_pad16(io_pads[16]), .io_pad17(io_pads[17]), .io_pad18(io_pads[18]), .io_pad19(io_pads[19]),
        .io_pad20(io_pads[20]), .io_pad21(io_pads[21]), .io_pad22(io_pads[22]), .io_pad23(io_pads[23]),
        .io_pad24(io_pads[24]), .io_pad25(io_pads[25]), .io_pad26(io_pads[26]), .io_pad27(io_pads[27]),
        .io_pad28(io_pads[28]), .io_pad29(io_pads[29]), .io_pad30(io_pads[30]), .io_pad31(io_pads[31]),
        .io_pad32(io_pads[32]), .io_pad33(io_pads[33]), .io_pad34(io_pads[34]), .io_pad35(io_pads[35]),
        .io_pad36(io_pads[36]), .io_pad37(io_pads[37]), .io_pad38(io_pads[38]), .io_pad39(io_pads[39]),
        .io_pad40(io_pads[40]), .io_pad41(io_pads[41]), .io_pad42(io_pads[42]), .io_pad43(io_pads[43]),
        .io_pad44(io_pads[44]), .io_pad45(io_pads[45]), .io_pad46(io_pads[46]), .io_pad47(io_pads[47]),
        .io_pad48(io_pads[48]), .io_pad49(io_pads[49]), .io_pad50(io_pads[50]), .io_pad51(io_pads[51]),
        .io_pad52(io_pads[52]), .io_pad53(io_pads[53]), .io_pad54(io_pads[54]), .io_pad55(io_pads[55]),
        .io_pad56(io_pads[56]), .io_pad57(io_pads[57]), .io_pad58(io_pads[58]), .io_pad59(io_pads[59]),
        .io_pad60(io_pads[60]), .io_pad61(io_pads[61]), .io_pad62(io_pads[62]), .io_pad63(io_pads[63]),
        .io_pad64(io_pads[64]), .io_pad65(io_pads[65]), .io_pad66(io_pads[66]), .io_pad67(io_pads[67]),
        .io_pad68(io_pads[68]), .io_pad69(io_pads[69]), .io_pad70(io_pads[70]), .io_pad71(io_pads[71]),
        .io_pad72(io_pads[72]), .io_pad73(io_pads[73]), .io_pad74(io_pads[74]), .io_pad75(io_pads[75]),
        .io_pad76(io_pads[76]), .io_pad77(io_pads[77]), .io_pad78(io_pads[78]), .io_pad79(io_pads[79]),
        .io_pad80(io_pads[80]), .io_pad81(io_pads[81])
    );

    // Clock generation
    initial begin
        sys_clk_i_pad = 0;
        forever #5 sys_clk_i_pad = ~sys_clk_i_pad;
    end

    // ROM access detection - fixed path
    assign is_rom_access = (u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr < 32'h00000100);

    // ROM data provider - fixed path
    ip1_BootROM bootrom (
        .clock(u_asic_top.ip1_clk_100m),
        .addr(u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr),
        .data(rom_data)
    );

    // ROM injection logic - fixed paths
    always @(posedge sys_clk_i_pad) begin
        if (is_rom_access && u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_valid) begin
            force u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_ready = 1'b1;
            force u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata = rom_data;
        end else begin
            release u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_ready;
            release u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata;
        end
    end

    // UART injection logic - fixed paths
    always @(posedge sys_clk_i_pad) begin
        if (u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_valid && 
            u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_addr == 32'h20000004 && 
            u_asic_top.u_SimpleEdgeAiSoC.riscv.mem_rdata == 32'h00000008 && 
            matrix_count < 4) begin
            #1000;
            force u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_valid = 1;
            force u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_bits = matrix_data[matrix_count];
            #10;
            release u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_valid;
            release u_asic_top.u_SimpleEdgeAiSoC.uart.uart.rxFifo.io_enq_bits;
            $display("Injected matrix[%0d] = %d", matrix_count, matrix_data[matrix_count]);
            matrix_count = matrix_count + 1;
        end
    end

    // Test sequence
    initial begin
        $display("=== ASIC Top + SimpleEdgeAiSoC + Bootloader Matrix Test (Fixed) ===");
        
        // Initialize
        rst_n_pad = 0;
        ip_sel_pad0 = 1; // Select ip_1 (project_2017)
        ip_sel_pad1 = 0;
        ip_sel_pad2 = 0;
        matrix_count = 0;
        
        // Matrix test data
        matrix_data[0] = 8'd1;
        matrix_data[1] = 8'd2;
        matrix_data[2] = 8'd3;
        matrix_data[3] = 8'd4;
        
        $display("IP Selection: ip_1 (project_2017)");
        
        // Reset release
        #100;
        rst_n_pad = 1;
        
        // Monitor GPIO outputs
        fork
            begin
                forever begin
                    @(posedge sys_clk_i_pad);
                    if (u_asic_top.io_pad_o[31:0] != 32'h0) begin
                        $display("Time: %0t, GPIO: 0x%08x (%3d)", $time, u_asic_top.io_pad_o[31:0], u_asic_top.io_pad_o[7:0]);
                    end
                end
            end
        join_none
        
        // Wait for completion
        #550000;
        
        // Final status
        $display("UART Control: 0x%08x", u_asic_top.u_SimpleEdgeAiSoC.uart.uart.control);
        $display("GPIO Output: 0x%08x", u_asic_top.io_pad_o[31:0]);
        $display("Test completed");
        
        $finish;
    end

endmodule
