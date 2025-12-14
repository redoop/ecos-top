// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_edge_ai_tb_fixed__Syms.h"


VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_init_sub__TOP__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_init_sub__TOP__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("simple_edge_ai_tb_fixed", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+465,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+463,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"uart_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"uart_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"gpio_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"gpio_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+18,0,"lcd_spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"lcd_spi_mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"lcd_spi_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"lcd_spi_dc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"lcd_spi_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"lcd_backlight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"compact_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"bitnet_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"uart_tx_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"uart_rx_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"flash_spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"flash_spi_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flash_spi_mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"flash_spi_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"psram_spi_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"psram_spi_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"psram_spi_mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"psram_spi_miso",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"psram_spi_sio2_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"psram_spi_sio2_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"psram_spi_sio2_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"psram_spi_sio3_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"psram_spi_sio3_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"psram_spi_sio3_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_SimpleEdgeAiSoC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_lcd_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_lcd_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_lcd_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_lcd_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_lcd_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_lcd_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"io_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"io_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+24,0,"io_trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"io_compact_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_bitnet_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_uart_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_uart_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_flash_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_flash_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_flash_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_flash_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_psram_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_psram_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_psram_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_psram_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_psram_spi_sio2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_psram_spi_sio2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_psram_spi_sio2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_psram_spi_sio3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_psram_spi_sio3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_psram_spi_sio3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bitnetAccel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"config_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"matrixSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"perfCycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"sparsitySkipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"errorCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"finalizeCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("activation_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+64,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("result_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+68,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"isLastElement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("weight_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+76,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("compactAccel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"io_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"matrixSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"perfCycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+87,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("matrixA_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+92,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+95,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("matrixB_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+92,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+98,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("matrixC_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+99,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+102,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"io_cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"io_cpu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_cpu_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_cpu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_compact_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_compact_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"io_compact_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"io_compact_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_compact_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_compact_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_bitnet_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_bitnet_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_bitnet_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"io_bitnet_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_bitnet_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_bitnet_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_uart_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_uart_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_uart_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"io_uart_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_uart_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_uart_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_lcd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_lcd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"io_lcd_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"io_lcd_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_lcd_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_lcd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_lcd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_gpio_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"io_gpio_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"io_gpio_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_gpio_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_gpio_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_flash_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_flash_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"io_flash_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"io_flash_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_flash_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_flash_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_psram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_psram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"io_psram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"io_psram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_psram_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sel_compact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sel_bitnet",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sel_uart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sel_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"sel_gpio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sel_flash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sel_psram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("flash", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"cmdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"addrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+136,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+137,0,"busyReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"doneReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"spiCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+29,0,"spiClkReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+141,0,"bitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"csReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"mosiReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"spiClkLast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"startReq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+145,0,"spiPosEdge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"spiNegEdge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gpio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"io_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"io_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+17,0,"gpioOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_reg_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_lcd_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_lcd_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_lcd_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_lcd_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_lcd_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_lcd_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"spiCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+18,0,"spiClkReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"spiShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"spiBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"spiDC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"spiCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"txData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+154,0,"txValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"txIsData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memAdapter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"io_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"io_mem_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"io_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+104,0,"io_reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_reg_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_reg_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_reg_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("psram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"io_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_spi_sio2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_spi_sio2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_spi_sio2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_spi_sio3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"io_spi_sio3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"io_spi_sio3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"cmdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"addrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+159,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"ctrlReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"statusReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"configReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+164,0,"clkDiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"spiClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"spiClkEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"bitCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+168,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"dataOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"mosiReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"csReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"sio2OutReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"sio2OeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"sio3OutReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"sio3OeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("riscv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"ENABLE_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"ENABLE_COUNTERS64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"ENABLE_REGS_16_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"ENABLE_REGS_DUALPORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"LATCHED_MEM_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"TWO_STAGE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"BARREL_SHIFTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"TWO_CYCLE_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"TWO_CYCLE_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"COMPRESSED_ISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"CATCH_MISALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"CATCH_ILLINSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_FAST_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"ENABLE_IRQ_QREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"ENABLE_IRQ_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"ENABLE_TRACE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+468,0,"REGS_INIT_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+469,0,"MASKED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"LATCHED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"PROGADDR_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"PROGADDR_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"STACKADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+463,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+472,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+474,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+181,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+476,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+477,0,"irq_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+478,0,"irq_buserror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+479,0,"irqregs_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+479,0,"regfile_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+480,0,"regindex_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+468,0,"WITH_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+481,0,"TRACE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+483,0,"TRACE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+485,0,"TRACE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+183,0,"count_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+185,0,"count_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+187,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"reg_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+191,0,"next_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"dbg_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"dbg_insn_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"dbg_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"dbg_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"dbg_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"dbg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"dbg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"dbg_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"dbg_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"irq_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"irq_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"irq_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpuregs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+487,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+488,0,"pcpi_mul_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"pcpi_mul_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+488,0,"pcpi_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pcpi_mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pcpi_div_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"pcpi_div_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+488,0,"pcpi_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pcpi_div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pcpi_int_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"pcpi_int_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+488,0,"pcpi_int_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"pcpi_int_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+233,0,"mem_wordsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"mem_rdata_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"mem_do_prefetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"mem_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"mem_la_secondword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"mem_la_firstword_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"last_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"mem_la_firstword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"mem_la_firstword_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"clear_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"mem_16bit_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"mem_rdata_latched_noshuffle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"mem_rdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+488,0,"mem_la_use_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"mem_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"instr_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"instr_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"instr_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"instr_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"instr_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"instr_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"instr_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"instr_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"instr_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"instr_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"instr_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instr_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"instr_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"instr_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"instr_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"instr_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"instr_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"instr_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"instr_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"instr_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"instr_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"instr_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"instr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"instr_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"instr_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"instr_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"instr_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"instr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"instr_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"instr_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"instr_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"instr_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"instr_rdcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"instr_rdcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"instr_rdinstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"instr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"instr_ecall_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"instr_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"instr_getq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"instr_setq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"instr_retirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"instr_maskirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"instr_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"instr_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"instr_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"decoded_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+296,0,"decoded_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+297,0,"decoded_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+298,0,"decoded_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"decoded_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"decoder_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"decoder_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"decoder_pseudo_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"decoder_pseudo_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"compressed_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"is_lui_auipc_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"is_lb_lh_lw_lbu_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"is_slli_srli_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"is_jalr_addi_slti_sltiu_xori_ori_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"is_sb_sh_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"is_sll_srl_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"is_lui_auipc_jal_jalr_addi_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"is_slti_blt_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"is_sltiu_bltu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"is_beq_bne_blt_bge_bltu_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"is_lbu_lhu_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"is_alu_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"is_alu_reg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"is_rdcycle_rdcycleh_rdinstr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+320,0,"new_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+322,0,"dbg_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+324,0,"dbg_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"dbg_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+326,0,"dbg_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+327,0,"dbg_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+328,0,"dbg_rs1val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"dbg_rs2val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+330,0,"dbg_rs1val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"dbg_rs2val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+332,0,"q_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+334,0,"q_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"q_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"q_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+337,0,"q_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+338,0,"q_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+339,0,"dbg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"launch_next_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"dbg_valid_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+342,0,"cached_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+344,0,"cached_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"cached_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"cached_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+347,0,"cached_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+348,0,"cached_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+490,0,"cpu_state_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+491,0,"cpu_state_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+492,0,"cpu_state_ld_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"cpu_state_ld_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+494,0,"cpu_state_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+495,0,"cpu_state_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+496,0,"cpu_state_stmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+497,0,"cpu_state_ldmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"cpu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,0,"irq_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+351,0,"dbg_ascii_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+355,0,"set_mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"set_mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"set_mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"latched_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"latched_stalu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"latched_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"latched_compr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"latched_trace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"latched_is_lu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"latched_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"latched_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"latched_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+367,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"pcpi_timeout_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+368,0,"pcpi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+369,0,"next_irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"do_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+371,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"alu_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+373,0,"alu_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"alu_out_0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"alu_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"alu_wait_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"alu_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"alu_shl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"alu_shr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+380,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"clear_prefetched_high_word_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"cpuregs_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"cpuregs_wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"cpuregs_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"cpuregs_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"decoded_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"baudDiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"baudCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+391,0,"baudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"txState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+393,0,"txBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,0,"txShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+16,0,"txReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"rxState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+396,0,"rxBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+397,0,"rxShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+398,0,"rxSync_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"rxSync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"rxBaudCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+401,0,"rxBaudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rxFifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+405,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"enq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+409,0,"deq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+410,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+500,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+407,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+414,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+415+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+431,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("txFifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+463,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+435,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"enq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+439,0,"deq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+440,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+439,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+500,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+444,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+445+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+461,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+462,0,"rxHalfBaudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_init_top(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_init_top\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsimple_edge_ai_tb_fixed___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_edge_ai_tb_fixed___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_edge_ai_tb_fixed___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_register(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_register\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsimple_edge_ai_tb_fixed___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsimple_edge_ai_tb_fixed___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsimple_edge_ai_tb_fixed___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsimple_edge_ai_tb_fixed___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_const_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_const_0\n"); );
    // Body
    Vsimple_edge_ai_tb_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_edge_ai_tb_fixed___024root*>(voidSelf);
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsimple_edge_ai_tb_fixed___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_const_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_const_0_sub_0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullDouble(oldp+465,(10.0));
    bufp->fullBit(oldp+467,(1U));
    bufp->fullBit(oldp+468,(0U));
    bufp->fullIData(oldp+469,(0U),32);
    bufp->fullIData(oldp+470,(0xffffffffU),32);
    bufp->fullIData(oldp+471,(0x00000010U),32);
    bufp->fullBit(oldp+472,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wr));
    bufp->fullIData(oldp+473,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_rd),32);
    bufp->fullBit(oldp+474,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wait));
    bufp->fullBit(oldp+475,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_ready));
    bufp->fullIData(oldp+476,(0U),32);
    bufp->fullIData(oldp+477,(1U),32);
    bufp->fullIData(oldp+478,(2U),32);
    bufp->fullIData(oldp+479,(0x00000020U),32);
    bufp->fullIData(oldp+480,(5U),32);
    bufp->fullQData(oldp+481,(0x0000000100000000ULL),36);
    bufp->fullQData(oldp+483,(0x0000000200000000ULL),36);
    bufp->fullQData(oldp+485,(0x0000000800000000ULL),36);
    bufp->fullIData(oldp+487,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__i),32);
    bufp->fullBit(oldp+488,(0U));
    bufp->fullSData(oldp+489,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_16bit_buffer),16);
    bufp->fullCData(oldp+490,(0x80U),8);
    bufp->fullCData(oldp+491,(0x40U),8);
    bufp->fullCData(oldp+492,(0x20U),8);
    bufp->fullCData(oldp+493,(0x10U),8);
    bufp->fullCData(oldp+494,(8U),8);
    bufp->fullCData(oldp+495,(4U),8);
    bufp->fullCData(oldp+496,(2U),8);
    bufp->fullCData(oldp+497,(1U),8);
    bufp->fullCData(oldp+498,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout_counter),4);
    bufp->fullCData(oldp+499,(0U),5);
    bufp->fullBit(oldp+500,(1U));
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_full_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_full_0\n"); );
    // Body
    Vsimple_edge_ai_tb_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_edge_ai_tb_fixed___024root*>(voidSelf);
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsimple_edge_ai_tb_fixed___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root__trace_full_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_full_0_sub_0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx));
    bufp->fullSData(oldp+3,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in),16);
    bufp->fullBit(oldp+4,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__flash_spi_miso));
    bufp->fullBit(oldp+5,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_miso));
    bufp->fullBit(oldp+6,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio2_in));
    bufp->fullBit(oldp+7,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio3_in));
    bufp->fullBit(oldp+8,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)))));
    bufp->fullIData(oldp+9,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata),32);
    bufp->fullBit(oldp+10,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read));
    bufp->fullBit(oldp+11,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write));
    bufp->fullIData(oldp+12,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word),32);
    bufp->fullBit(oldp+13,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word));
    bufp->fullIData(oldp+14,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle),32);
    bufp->fullBit(oldp+15,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done));
    bufp->fullBit(oldp+16,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg));
    bufp->fullSData(oldp+17,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut),16);
    bufp->fullBit(oldp+18,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg) 
                                  >> 7U))));
    bufp->fullBit(oldp+20,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS));
    bufp->fullBit(oldp+21,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC));
    bufp->fullBit(oldp+22,((1U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control)));
    bufp->fullBit(oldp+24,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap));
    bufp->fullBit(oldp+25,(((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                | (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                            & (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))));
    bufp->fullBit(oldp+26,(((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                | ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                   | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                            & (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)))));
    bufp->fullBit(oldp+27,((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                  & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                     >> 2U)))));
    bufp->fullBit(oldp+28,((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                  & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                     >> 3U)))));
    bufp->fullBit(oldp+29,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg));
    bufp->fullBit(oldp+30,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg));
    bufp->fullBit(oldp+31,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg));
    bufp->fullBit(oldp+32,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn))));
    bufp->fullBit(oldp+33,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg));
    bufp->fullBit(oldp+34,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg));
    bufp->fullBit(oldp+35,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg));
    bufp->fullBit(oldp+36,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg));
    bufp->fullBit(oldp+37,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg));
    bufp->fullBit(oldp+38,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg));
    bufp->fullIData(oldp+39,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr),32);
    bufp->fullIData(oldp+40,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata),32);
    bufp->fullIData(oldp+41,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                               ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                                   ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                       & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                                      [(0x000000ffU 
                                        & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                            - (IData)(0x0100U)) 
                                           >> 2U))]
                                       : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                   ? 1U
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                                 : 
                                                ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                                  ? 
                                                 (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                                   ? 
                                                  vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                                  [
                                                  (0x000000ffU 
                                                   & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                       - (IData)(0x0100U)) 
                                                      >> 2U))]
                                                   : 0U)
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                                                    : 
                                                   ((0x001cU 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize
                                                     : 
                                                    ((0x0020U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0
                                                      : 
                                                     ((0x0028U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles
                                                       : 
                                                      ((0x002cU 
                                                        == 
                                                        (0x00000fffU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped
                                                        : 
                                                       ((0x0030U 
                                                         == 
                                                         (0x00000fffU 
                                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode
                                                         : 0U))))))))))
                               : 0U)),32);
    bufp->fullBit(oldp+42,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet))));
    bufp->fullBit(oldp+44,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    bufp->fullIData(oldp+45,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl),32);
    bufp->fullIData(oldp+46,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status),32);
    bufp->fullIData(oldp+47,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0),32);
    bufp->fullIData(oldp+48,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize),32);
    bufp->fullIData(oldp+49,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles),32);
    bufp->fullIData(oldp+50,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped),32);
    bufp->fullIData(oldp+51,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode),32);
    bufp->fullCData(oldp+52,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state),2);
    bufp->fullCData(oldp+53,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i),8);
    bufp->fullCData(oldp+54,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j),8);
    bufp->fullCData(oldp+55,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k),8);
    bufp->fullIData(oldp+56,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator),32);
    bufp->fullCData(oldp+57,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter),3);
    bufp->fullCData(oldp+58,((0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                              - (IData)(0x0100U)) 
                                             >> 2U))),8);
    bufp->fullBit(oldp+59,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
    bufp->fullIData(oldp+60,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                              [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                - (IData)(0x0100U)) 
                                               >> 2U))]
                               : 0U)),32);
    bufp->fullCData(oldp+61,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)))),8);
    bufp->fullBit(oldp+62,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en));
    bufp->fullIData(oldp+63,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data),32);
    bufp->fullBit(oldp+64,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
    bufp->fullBit(oldp+65,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))));
    bufp->fullIData(oldp+66,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                              [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                - (IData)(0x0100U)) 
                                               >> 2U))]
                               : 0U)),32);
    bufp->fullCData(oldp+67,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
    bufp->fullBit(oldp+68,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en))));
    bufp->fullIData(oldp+69,(((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T
                               : ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                                   ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3
                                   : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator))),32);
    bufp->fullBit(oldp+70,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement));
    bufp->fullCData(oldp+71,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k), 4U) 
                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
    bufp->fullCData(oldp+72,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data),2);
    bufp->fullCData(oldp+73,((0x000000ffU & (((IData)(0x0100U) 
                                              + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                                             >> 2U))),8);
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
    bufp->fullCData(oldp+75,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data),2);
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
    bufp->fullCData(oldp+77,(((0U == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                               ? 0U : ((1U & ((~ ((0xffffffffU 
                                                   == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata) 
                                                  | VL_GTS_III(32, 1U, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))) 
                                              | (1U 
                                                 == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)))
                                        ? 1U : 2U))),2);
    bufp->fullIData(oldp+78,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                               ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                                   ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                                       & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                                      [(0x0000003fU 
                                        & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                           >> 2U))]
                                       : 0U) : ((0U 
                                                 == 
                                                 (0x00000fffU 
                                                  & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                 ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                                                  : 
                                                 ((0x001cU 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                                   : 
                                                  ((0x0028U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                                    : 0U)))))
                               : 0U)),32);
    bufp->fullBit(oldp+79,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen));
    bufp->fullBit(oldp+80,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact))));
    bufp->fullBit(oldp+81,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid));
    bufp->fullIData(oldp+82,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl),32);
    bufp->fullIData(oldp+83,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status),32);
    bufp->fullIData(oldp+84,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize),32);
    bufp->fullIData(oldp+85,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles),32);
    bufp->fullCData(oldp+86,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state),2);
    bufp->fullCData(oldp+87,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i),4);
    bufp->fullCData(oldp+88,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j),4);
    bufp->fullCData(oldp+89,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k),4);
    bufp->fullIData(oldp+90,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator),32);
    bufp->fullCData(oldp+91,((0x0000003fU & ((0x00000038U 
                                              & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                 << 3U)) 
                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))),6);
    bufp->fullBit(oldp+92,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en));
    bufp->fullIData(oldp+93,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory
                              [(0x0000003fU & ((0x00000038U 
                                                & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                   << 3U)) 
                                               + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))]
                               : 0U)),32);
    bufp->fullCData(oldp+94,((0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             >> 2U))),6);
    bufp->fullBit(oldp+95,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                            & ((0U != (0x0000000fU 
                                       & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                          >> 8U))) 
                               & (0x0200U > (0x00000fffU 
                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
    bufp->fullCData(oldp+96,((0x0000003fU & ((0x00000038U 
                                              & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                 << 3U)) 
                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
    bufp->fullIData(oldp+97,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory
                              [(0x0000003fU & ((0x00000038U 
                                                & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                   << 3U)) 
                                               + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))]
                               : 0U)),32);
    bufp->fullBit(oldp+98,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                            & ((0x02ffU < (0x00000fffU 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                               & (0x0400U > (0x00000fffU 
                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
    bufp->fullBit(oldp+99,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))));
    bufp->fullIData(oldp+100,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                               [(0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                >> 2U))]
                                : 0U)),32);
    bufp->fullCData(oldp+101,((0x0000003fU & ((0x00000038U 
                                               & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                  << 3U)) 
                                              + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
    bufp->fullBit(oldp+102,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en))));
    bufp->fullIData(oldp+103,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data),32);
    bufp->fullBit(oldp+104,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen));
    bufp->fullBit(oldp+105,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren));
    bufp->fullBit(oldp+106,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    bufp->fullBit(oldp+107,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready));
    bufp->fullIData(oldp+108,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
                                ? ((0U == (0x000000ffU 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                   [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                    : ((4U == (0x000000ffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full) 
                                               << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                                << 1U)) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))))
                                        : ((8U == (0x000000ffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control
                                            : ((0x0cU 
                                                == 
                                                (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv
                                                : 0U))))
                                : 0U)),32);
    bufp->fullBit(oldp+109,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
    bufp->fullBit(oldp+111,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid));
    bufp->fullIData(oldp+112,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                ? ((8U == (0x000000ffU 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? (2U | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                    : ((0x0cU == (0x000000ffU 
                                                  & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+113,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen));
    bufp->fullBit(oldp+114,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
    bufp->fullBit(oldp+115,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
    bufp->fullBit(oldp+116,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)))));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
    bufp->fullBit(oldp+118,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
    bufp->fullBit(oldp+119,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid));
    bufp->fullIData(oldp+120,(((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                ? ((0U == (0x000000ffU 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                    : ((4U == (0x000000ffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                        : ((8U == (0x000000ffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                            : ((0x0cU 
                                                == 
                                                (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? (
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                      << 1U))
                                                : 0U))))
                                : 0U)),32);
    bufp->fullBit(oldp+121,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
    bufp->fullBit(oldp+122,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
    bufp->fullBit(oldp+123,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid));
    bufp->fullIData(oldp+124,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                ? ((0x14U == (0x0000001fU 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                    : ((0x10U == (0x0000001fU 
                                                  & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                        : ((0x0cU == 
                                            (0x0000001fU 
                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                            : ((8U 
                                                == 
                                                (0x0000001fU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg
                                                : (
                                                   (4U 
                                                    == 
                                                    (0x0000001fU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)
                                                     : 0U))))))
                                : 0U)),32);
    bufp->fullBit(oldp+125,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen));
    bufp->fullBit(oldp+126,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))));
    bufp->fullBit(oldp+127,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    bufp->fullBit(oldp+128,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    bufp->fullBit(oldp+129,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart));
    bufp->fullBit(oldp+130,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd));
    bufp->fullBit(oldp+131,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio));
    bufp->fullBit(oldp+132,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash));
    bufp->fullBit(oldp+133,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    bufp->fullCData(oldp+134,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg),8);
    bufp->fullIData(oldp+135,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg),24);
    bufp->fullIData(oldp+136,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg),32);
    bufp->fullBit(oldp+137,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg));
    bufp->fullBit(oldp+138,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
    bufp->fullCData(oldp+139,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter),8);
    bufp->fullCData(oldp+140,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+141,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter),8);
    bufp->fullIData(oldp+142,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg),32);
    bufp->fullBit(oldp+143,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast));
    bufp->fullBit(oldp+144,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq));
    bufp->fullBit(oldp+145,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge));
    bufp->fullBit(oldp+146,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge));
    bufp->fullIData(oldp+147,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control),32);
    bufp->fullCData(oldp+148,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter),8);
    bufp->fullBit(oldp+149,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
    bufp->fullCData(oldp+150,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg),8);
    bufp->fullCData(oldp+151,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter),3);
    bufp->fullBit(oldp+152,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy));
    bufp->fullCData(oldp+153,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData),8);
    bufp->fullBit(oldp+154,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
    bufp->fullBit(oldp+155,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData));
    bufp->fullCData(oldp+156,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb),4);
    bufp->fullCData(oldp+157,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg),8);
    bufp->fullIData(oldp+158,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg),24);
    bufp->fullIData(oldp+159,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg),32);
    bufp->fullIData(oldp+160,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg),32);
    bufp->fullIData(oldp+161,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg),32);
    bufp->fullIData(oldp+162,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg),32);
    bufp->fullCData(oldp+163,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state),3);
    bufp->fullBit(oldp+164,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv));
    bufp->fullBit(oldp+165,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk));
    bufp->fullBit(oldp+166,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn));
    bufp->fullCData(oldp+167,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt),6);
    bufp->fullIData(oldp+168,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg),32);
    bufp->fullIData(oldp+169,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut),32);
    bufp->fullBit(oldp+170,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr));
    bufp->fullIData(oldp+171,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))
                                ? (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc)
                                : (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))),32);
    bufp->fullIData(oldp+172,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata),32);
    bufp->fullCData(oldp+173,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb),4);
    bufp->fullBit(oldp+174,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid));
    bufp->fullIData(oldp+175,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn),32);
    bufp->fullIData(oldp+176,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1),32);
    bufp->fullIData(oldp+177,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2),32);
    bufp->fullIData(oldp+178,(((((2U & (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                         << 1U) & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                                   >> 2U))) 
                                 | (1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                          & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                             >> 2U)))) 
                                << 0x00000012U) | (
                                                   (((~ 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                                       | ((1U 
                                                           == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                                          | (2U 
                                                             == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                                                     & (3U 
                                                        == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))) 
                                                    << 0x00000011U) 
                                                   | (((~ 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))) 
                                                      << 0x00000010U)))),32);
    bufp->fullIData(oldp+179,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi),32);
    bufp->fullBit(oldp+180,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid));
    bufp->fullQData(oldp+181,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data),36);
    bufp->fullQData(oldp+183,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle),64);
    bufp->fullQData(oldp+185,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr),64);
    bufp->fullIData(oldp+187,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc),32);
    bufp->fullIData(oldp+188,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc),32);
    bufp->fullIData(oldp+189,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out),32);
    bufp->fullCData(oldp+190,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh),5);
    bufp->fullIData(oldp+191,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode),32);
    bufp->fullIData(oldp+192,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode),32);
    bufp->fullIData(oldp+193,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr),32);
    bufp->fullIData(oldp+194,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc),32);
    bufp->fullBit(oldp+195,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay));
    bufp->fullBit(oldp+196,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active));
    bufp->fullIData(oldp+197,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask),32);
    bufp->fullIData(oldp+198,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending),32);
    bufp->fullIData(oldp+199,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer),32);
    bufp->fullIData(oldp+200,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[0]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[1]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[2]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[3]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[4]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[5]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[6]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[7]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[8]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[9]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[10]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[11]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[12]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[13]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[14]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[15]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[16]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[17]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[18]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[19]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[20]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[21]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[22]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[23]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[24]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[25]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[26]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[27]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[28]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[29]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[30]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[31]),32);
    bufp->fullCData(oldp+232,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state),2);
    bufp->fullCData(oldp+233,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize),2);
    bufp->fullIData(oldp+234,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q),32);
    bufp->fullBit(oldp+235,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch));
    bufp->fullBit(oldp+236,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst));
    bufp->fullBit(oldp+237,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata));
    bufp->fullBit(oldp+238,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata));
    bufp->fullBit(oldp+239,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer));
    bufp->fullBit(oldp+240,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword));
    bufp->fullBit(oldp+241,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg));
    bufp->fullBit(oldp+242,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid));
    bufp->fullBit(oldp+243,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word));
    bufp->fullBit(oldp+244,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))));
    bufp->fullBit(oldp+245,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui));
    bufp->fullBit(oldp+246,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc));
    bufp->fullBit(oldp+247,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal));
    bufp->fullBit(oldp+248,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr));
    bufp->fullBit(oldp+249,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq));
    bufp->fullBit(oldp+250,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne));
    bufp->fullBit(oldp+251,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt));
    bufp->fullBit(oldp+252,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge));
    bufp->fullBit(oldp+253,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu));
    bufp->fullBit(oldp+254,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu));
    bufp->fullBit(oldp+255,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb));
    bufp->fullBit(oldp+256,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh));
    bufp->fullBit(oldp+257,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw));
    bufp->fullBit(oldp+258,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu));
    bufp->fullBit(oldp+259,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu));
    bufp->fullBit(oldp+260,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb));
    bufp->fullBit(oldp+261,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh));
    bufp->fullBit(oldp+262,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw));
    bufp->fullBit(oldp+263,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi));
    bufp->fullBit(oldp+264,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti));
    bufp->fullBit(oldp+265,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu));
    bufp->fullBit(oldp+266,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori));
    bufp->fullBit(oldp+267,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori));
    bufp->fullBit(oldp+268,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi));
    bufp->fullBit(oldp+269,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli));
    bufp->fullBit(oldp+270,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli));
    bufp->fullBit(oldp+271,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai));
    bufp->fullBit(oldp+272,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add));
    bufp->fullBit(oldp+273,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub));
    bufp->fullBit(oldp+274,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll));
    bufp->fullBit(oldp+275,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt));
    bufp->fullBit(oldp+276,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu));
    bufp->fullBit(oldp+277,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor));
    bufp->fullBit(oldp+278,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl));
    bufp->fullBit(oldp+279,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra));
    bufp->fullBit(oldp+280,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or));
    bufp->fullBit(oldp+281,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and));
    bufp->fullBit(oldp+282,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle));
    bufp->fullBit(oldp+283,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh));
    bufp->fullBit(oldp+284,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr));
    bufp->fullBit(oldp+285,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh));
    bufp->fullBit(oldp+286,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak));
    bufp->fullBit(oldp+287,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence));
    bufp->fullBit(oldp+288,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq));
    bufp->fullBit(oldp+289,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq));
    bufp->fullBit(oldp+290,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq));
    bufp->fullBit(oldp+291,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq));
    bufp->fullBit(oldp+292,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq));
    bufp->fullBit(oldp+293,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer));
    bufp->fullBit(oldp+294,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap));
    bufp->fullCData(oldp+295,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd),5);
    bufp->fullCData(oldp+296,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1),5);
    bufp->fullCData(oldp+297,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2),5);
    bufp->fullIData(oldp+298,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm),32);
    bufp->fullIData(oldp+299,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j),32);
    bufp->fullBit(oldp+300,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    bufp->fullBit(oldp+301,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q));
    bufp->fullBit(oldp+302,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger));
    bufp->fullBit(oldp+303,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q));
    bufp->fullBit(oldp+304,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr));
    bufp->fullBit(oldp+305,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal));
    bufp->fullBit(oldp+306,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu));
    bufp->fullBit(oldp+307,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai));
    bufp->fullBit(oldp+308,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
    bufp->fullBit(oldp+309,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw));
    bufp->fullBit(oldp+310,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra));
    bufp->fullBit(oldp+311,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
    bufp->fullBit(oldp+312,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt));
    bufp->fullBit(oldp+313,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu));
    bufp->fullBit(oldp+314,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu));
    bufp->fullBit(oldp+315,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw));
    bufp->fullBit(oldp+316,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm));
    bufp->fullBit(oldp+317,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg));
    bufp->fullBit(oldp+318,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare));
    bufp->fullBit(oldp+319,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
    bufp->fullQData(oldp+320,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr),64);
    bufp->fullQData(oldp+322,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr),64);
    bufp->fullIData(oldp+324,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm),32);
    bufp->fullCData(oldp+325,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1),5);
    bufp->fullCData(oldp+326,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2),5);
    bufp->fullCData(oldp+327,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd),5);
    bufp->fullIData(oldp+328,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val),32);
    bufp->fullIData(oldp+329,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val),32);
    bufp->fullBit(oldp+330,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid));
    bufp->fullBit(oldp+331,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid));
    bufp->fullQData(oldp+332,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr),64);
    bufp->fullIData(oldp+334,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm),32);
    bufp->fullIData(oldp+335,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode),32);
    bufp->fullCData(oldp+336,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1),5);
    bufp->fullCData(oldp+337,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2),5);
    bufp->fullCData(oldp+338,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd),5);
    bufp->fullBit(oldp+339,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next));
    bufp->fullBit(oldp+340,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn));
    bufp->fullBit(oldp+341,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn));
    bufp->fullQData(oldp+342,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr),64);
    bufp->fullIData(oldp+344,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm),32);
    bufp->fullIData(oldp+345,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode),32);
    bufp->fullCData(oldp+346,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1),5);
    bufp->fullCData(oldp+347,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2),5);
    bufp->fullCData(oldp+348,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd),5);
    bufp->fullCData(oldp+349,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state),8);
    bufp->fullCData(oldp+350,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state),2);
    bufp->fullWData(oldp+351,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state),128);
    bufp->fullBit(oldp+355,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst));
    bufp->fullBit(oldp+356,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata));
    bufp->fullBit(oldp+357,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata));
    bufp->fullBit(oldp+358,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store));
    bufp->fullBit(oldp+359,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu));
    bufp->fullBit(oldp+360,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch));
    bufp->fullBit(oldp+361,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr));
    bufp->fullBit(oldp+362,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace));
    bufp->fullBit(oldp+363,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu));
    bufp->fullBit(oldp+364,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh));
    bufp->fullBit(oldp+365,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb));
    bufp->fullCData(oldp+366,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd),5);
    bufp->fullIData(oldp+367,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc),32);
    bufp->fullBit(oldp+368,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout));
    bufp->fullIData(oldp+369,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending),32);
    bufp->fullBit(oldp+370,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq));
    bufp->fullIData(oldp+371,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out),32);
    bufp->fullIData(oldp+372,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q),32);
    bufp->fullBit(oldp+373,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0));
    bufp->fullBit(oldp+374,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q));
    bufp->fullBit(oldp+375,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait));
    bufp->fullBit(oldp+376,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2));
    bufp->fullIData(oldp+377,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)
                                ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                   - vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2)
                                : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                   + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
    bufp->fullIData(oldp+378,((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               << (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
    bufp->fullIData(oldp+379,((IData)((0x00000001ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) 
                                                                            | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai)) 
                                                                           & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                                                              >> 0x0000001fU)))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))), 
                                                        (0x0000001fU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))))),32);
    bufp->fullBit(oldp+380,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq));
    bufp->fullBit(oldp+381,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu));
    bufp->fullBit(oldp+382,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts));
    bufp->fullBit(oldp+383,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q));
    bufp->fullBit(oldp+384,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write));
    bufp->fullIData(oldp+385,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata),32);
    bufp->fullIData(oldp+386,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1),32);
    bufp->fullIData(oldp+387,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2),32);
    bufp->fullIData(oldp+388,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control),32);
    bufp->fullIData(oldp+389,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv),32);
    bufp->fullIData(oldp+390,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter),32);
    bufp->fullBit(oldp+391,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick));
    bufp->fullCData(oldp+392,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState),2);
    bufp->fullCData(oldp+393,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter),4);
    bufp->fullCData(oldp+394,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg),8);
    bufp->fullCData(oldp+395,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState),2);
    bufp->fullCData(oldp+396,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter),4);
    bufp->fullCData(oldp+397,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg),8);
    bufp->fullBit(oldp+398,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG));
    bufp->fullBit(oldp+399,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    bufp->fullIData(oldp+400,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter),32);
    bufp->fullBit(oldp+401,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick));
    bufp->fullBit(oldp+402,((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))))));
    bufp->fullBit(oldp+403,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0))));
    bufp->fullCData(oldp+404,(((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)) 
                                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)))
                                ? 0U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg))),8);
    bufp->fullBit(oldp+405,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11) 
                             & (0U == (0x000000ffU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)))));
    bufp->fullCData(oldp+407,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                              [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]),8);
    bufp->fullCData(oldp+408,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value),4);
    bufp->fullCData(oldp+409,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value),4);
    bufp->fullBit(oldp+410,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full));
    bufp->fullBit(oldp+411,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    bufp->fullBit(oldp+412,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty));
    bufp->fullBit(oldp+413,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))));
    bufp->fullBit(oldp+414,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+415,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[0]),8);
    bufp->fullCData(oldp+416,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[1]),8);
    bufp->fullCData(oldp+417,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[2]),8);
    bufp->fullCData(oldp+418,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[3]),8);
    bufp->fullCData(oldp+419,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[4]),8);
    bufp->fullCData(oldp+420,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[5]),8);
    bufp->fullCData(oldp+421,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[6]),8);
    bufp->fullCData(oldp+422,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[7]),8);
    bufp->fullCData(oldp+423,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[8]),8);
    bufp->fullCData(oldp+424,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[9]),8);
    bufp->fullCData(oldp+425,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[10]),8);
    bufp->fullCData(oldp+426,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[11]),8);
    bufp->fullCData(oldp+427,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[12]),8);
    bufp->fullCData(oldp+428,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[13]),8);
    bufp->fullCData(oldp+429,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[14]),8);
    bufp->fullCData(oldp+430,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[15]),8);
    bufp->fullBit(oldp+431,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
    bufp->fullCData(oldp+434,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid)
                                ? (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                                : 0U)),8);
    bufp->fullBit(oldp+435,(((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1))));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)))));
    bufp->fullCData(oldp+437,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory
                              [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value]),8);
    bufp->fullCData(oldp+438,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value),4);
    bufp->fullCData(oldp+439,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value),4);
    bufp->fullBit(oldp+440,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
    bufp->fullBit(oldp+441,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    bufp->fullBit(oldp+442,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty));
    bufp->fullBit(oldp+443,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full));
    bufp->fullBit(oldp+444,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+445,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[0]),8);
    bufp->fullCData(oldp+446,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[1]),8);
    bufp->fullCData(oldp+447,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[2]),8);
    bufp->fullCData(oldp+448,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[3]),8);
    bufp->fullCData(oldp+449,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[4]),8);
    bufp->fullCData(oldp+450,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[5]),8);
    bufp->fullCData(oldp+451,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[6]),8);
    bufp->fullCData(oldp+452,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[7]),8);
    bufp->fullCData(oldp+453,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[8]),8);
    bufp->fullCData(oldp+454,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[9]),8);
    bufp->fullCData(oldp+455,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[10]),8);
    bufp->fullCData(oldp+456,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[11]),8);
    bufp->fullCData(oldp+457,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[12]),8);
    bufp->fullCData(oldp+458,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[13]),8);
    bufp->fullCData(oldp+459,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[14]),8);
    bufp->fullCData(oldp+460,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[15]),8);
    bufp->fullBit(oldp+461,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+462,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick));
    bufp->fullBit(oldp+463,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk));
    bufp->fullIData(oldp+464,(((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                                ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in)
                                : 0U)),32);
}
