// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasic_soc_tb__Syms.h"


VL_ATTR_COLD void Vasic_soc_tb___024root__trace_init_sub__TOP__0(Vasic_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_init_sub__TOP__0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("asic_soc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+479,0,"OSC_CLK_25M_PEROID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+469,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+471,0,"ip_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"test_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"state_machine",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"data_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+4,0,"enable_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"ready_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"valid_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"control_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"status_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"clock_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"clock_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"clock_div8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+472,0,"io_pad_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+473,0,"io_pad_oe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("u_asic_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+471,0,"ip_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+469,0,"sys_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+472,0,"io_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+473,0,"io_pad_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+469,0,"clk_100m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"clk_50m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"clk_25m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"rst_100m_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"rst_50m_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"rst_25m_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"clk_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"clk_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"rst_sync_100m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+469,0,"ip1_clk_100m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"ip1_io_uart_tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"ip1_io_uart_rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"ip1_io_gpio_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+474,0,"ip1_io_gpio_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+17,0,"ip1_io_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ip1_io_compact_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ip1_io_bitnet_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ip1_io_uart_tx_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"ip1_io_uart_rx_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_SimpleEdgeAiSoC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"io_uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_lcd_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_lcd_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_lcd_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"io_lcd_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_lcd_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_lcd_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+474,0,"io_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+17,0,"io_trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_compact_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_bitnet_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_uart_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_uart_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_flash_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_flash_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_flash_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_flash_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_psram_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_psram_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_psram_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_psram_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_psram_spi_sio2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_psram_spi_sio2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_psram_spi_sio2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_psram_spi_sio3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_psram_spi_sio3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_psram_spi_sio3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bitnetAccel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"config_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"matrixSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"perfCycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"sparsitySkipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"errorCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"finalizeCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("activation_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+58,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+61,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+63,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("result_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+64,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+67,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"isLastElement",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("weight_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+61,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+73,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+75,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("compactAccel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"matrixSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"perfCycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("matrixA_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+91,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+94,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("matrixB_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+91,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+97,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("matrixC_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+98,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+101,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"io_cpu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_cpu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"io_cpu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"io_cpu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"io_cpu_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_cpu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_cpu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_compact_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_compact_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_compact_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"io_compact_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_compact_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_compact_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_bitnet_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_bitnet_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_bitnet_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_bitnet_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_bitnet_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_bitnet_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_uart_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_uart_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"io_uart_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_uart_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_uart_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_uart_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_lcd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_lcd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"io_lcd_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"io_lcd_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_lcd_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_lcd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_lcd_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_gpio_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"io_gpio_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"io_gpio_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_gpio_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_gpio_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_flash_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_flash_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"io_flash_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"io_flash_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_flash_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_flash_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_psram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_psram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"io_psram_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+124,0,"io_psram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_psram_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"sel_compact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"sel_bitnet",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"sel_uart",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"sel_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"sel_gpio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"sel_flash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"sel_psram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("flash", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"cmdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"addrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+135,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"busyReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"doneReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"spiCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"spiClkReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"bitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"csReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mosiReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"spiClkLast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"startReq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"spiPosEdge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"spiNegEdge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gpio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+474,0,"io_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+16,0,"gpioOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_reg_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_lcd_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_lcd_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_lcd_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"io_lcd_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_lcd_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_lcd_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lcd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"io_spi_dc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_spi_rst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_backlight",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"spiCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+22,0,"spiClkReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"spiShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"spiBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"spiDC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"spiCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"txData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+153,0,"txValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"txIsData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memAdapter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+105,0,"io_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_mem_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"io_mem_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+475,0,"io_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,0,"io_reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"io_reg_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_reg_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_reg_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("psram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"io_spi_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_spi_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_spi_sio2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_spi_sio2_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_spi_sio2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"io_spi_sio3_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"io_spi_sio3_oe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"io_spi_sio3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"cmdReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"addrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+158,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"ctrlReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"statusReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"configReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+163,0,"clkDiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"spiClk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"spiClkEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"bitCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+167,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"dataOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"mosiReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"csReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"sio2OutReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"sio2OeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"sio3OutReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"sio3OeReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("riscv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+485,0,"ENABLE_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ENABLE_COUNTERS64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ENABLE_REGS_16_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ENABLE_REGS_DUALPORT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"LATCHED_MEM_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"TWO_STAGE_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"BARREL_SHIFTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"TWO_CYCLE_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"TWO_CYCLE_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"COMPRESSED_ISA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"CATCH_MISALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"CATCH_ILLINSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_FAST_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ENABLE_IRQ_QREGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+485,0,"ENABLE_IRQ_TIMER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"ENABLE_TRACE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"REGS_INIT_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+487,0,"MASKED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"LATCHED_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"PROGADDR_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+489,0,"PROGADDR_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"STACKADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+469,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mem_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+475,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+465,0,"mem_la_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"mem_la_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"mem_la_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"mem_la_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"mem_la_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+173,0,"pcpi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"pcpi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"pcpi_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pcpi_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+490,0,"pcpi_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"pcpi_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+492,0,"pcpi_wait",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"pcpi_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"eoi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+179,0,"trace_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+180,0,"trace_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+494,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+495,0,"irq_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+496,0,"irq_buserror",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+497,0,"irqregs_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+497,0,"regfile_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+498,0,"regindex_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+486,0,"WITH_PCPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+499,0,"TRACE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+501,0,"TRACE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+503,0,"TRACE_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+182,0,"count_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+184,0,"count_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+186,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"reg_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+190,0,"next_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"dbg_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"dbg_insn_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"dbg_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dbg_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"dbg_mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"dbg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"dbg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"dbg_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+475,0,"dbg_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"irq_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"irq_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"irq_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpuregs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+199+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+505,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+484,0,"pcpi_mul_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"pcpi_mul_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"pcpi_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"pcpi_mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"pcpi_div_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"pcpi_div_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"pcpi_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"pcpi_div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"pcpi_int_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"pcpi_int_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"pcpi_int_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"pcpi_int_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+232,0,"mem_wordsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+477,0,"mem_rdata_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"mem_do_prefetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"mem_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"mem_la_secondword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"mem_la_firstword_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"last_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"mem_la_firstword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"mem_la_firstword_xfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"clear_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"mem_16bit_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+478,0,"mem_rdata_latched_noshuffle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"mem_rdata_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+484,0,"mem_la_use_prefetched_high_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"mem_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"mem_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"instr_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"instr_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"instr_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"instr_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"instr_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"instr_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"instr_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"instr_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"instr_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"instr_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"instr_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"instr_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"instr_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instr_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"instr_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"instr_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"instr_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"instr_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"instr_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"instr_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"instr_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"instr_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"instr_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"instr_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"instr_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"instr_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"instr_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"instr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"instr_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"instr_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"instr_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"instr_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"instr_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"instr_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"instr_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"instr_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"instr_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"instr_rdcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"instr_rdcycleh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"instr_rdinstr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"instr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"instr_ecall_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"instr_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"instr_getq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"instr_setq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"instr_retirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"instr_maskirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"instr_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"instr_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"instr_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"decoded_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+295,0,"decoded_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+296,0,"decoded_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+297,0,"decoded_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"decoded_imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+299,0,"decoder_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"decoder_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"decoder_pseudo_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"decoder_pseudo_trigger_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"compressed_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"is_lui_auipc_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"is_lb_lh_lw_lbu_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"is_slli_srli_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"is_jalr_addi_slti_sltiu_xori_ori_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"is_sb_sh_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"is_sll_srl_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"is_lui_auipc_jal_jalr_addi_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"is_slti_blt_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"is_sltiu_bltu_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"is_beq_bne_blt_bge_bltu_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"is_lbu_lhu_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"is_alu_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"is_alu_reg_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"is_rdcycle_rdcycleh_rdinstr_rdinstrh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+319,0,"new_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+321,0,"dbg_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+323,0,"dbg_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"dbg_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+325,0,"dbg_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+326,0,"dbg_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+327,0,"dbg_rs1val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"dbg_rs2val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+329,0,"dbg_rs1val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"dbg_rs2val_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+331,0,"q_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+333,0,"q_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"q_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"q_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+336,0,"q_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+337,0,"q_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+338,0,"dbg_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"launch_next_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"dbg_valid_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+341,0,"cached_ascii_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+343,0,"cached_insn_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"cached_insn_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"cached_insn_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+346,0,"cached_insn_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+347,0,"cached_insn_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+507,0,"cpu_state_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+508,0,"cpu_state_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+509,0,"cpu_state_ld_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+510,0,"cpu_state_ld_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+511,0,"cpu_state_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"cpu_state_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+513,0,"cpu_state_stmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+514,0,"cpu_state_ldmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,0,"cpu_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"irq_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+350,0,"dbg_ascii_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+354,0,"set_mem_do_rinst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"set_mem_do_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"set_mem_do_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"latched_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"latched_stalu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"latched_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"latched_compr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"latched_trace",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"latched_is_lu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"latched_is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"latched_is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"latched_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+366,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"pcpi_timeout_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+367,0,"pcpi_timeout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"next_irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+369,0,"do_waitirq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+370,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"alu_out_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+372,0,"alu_out_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"alu_out_0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"alu_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"alu_wait_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"alu_add_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"alu_shl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"alu_shr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+379,0,"alu_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"alu_ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"alu_lts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"clear_prefetched_high_word_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"cpuregs_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"cpuregs_wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"cpuregs_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"cpuregs_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"decoded_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_reg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"io_reg_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_reg_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_reg_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"io_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"io_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_tx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_rx_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"baudDiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+389,0,"baudCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+390,0,"baudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+391,0,"txState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+392,0,"txBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+393,0,"txShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"txReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"rxState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+395,0,"rxBitCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+396,0,"rxShiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"rxSync_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"rxSync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"rxBaudCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+400,0,"rxBaudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rxFifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+404,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+407,0,"enq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+408,0,"deq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+409,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+408,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+483,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+407,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+413,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+414+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+430,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("txFifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+469,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+434,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+437,0,"enq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+438,0,"deq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+439,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+438,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+483,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+437,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+443,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+444+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+460,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+461,0,"rxHalfBaudTick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_init_top(Vasic_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_init_top\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasic_soc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vasic_soc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasic_soc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasic_soc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_register(Vasic_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_register\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vasic_soc_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vasic_soc_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vasic_soc_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vasic_soc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_const_0_sub_0(Vasic_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_const_0\n"); );
    // Body
    Vasic_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_soc_tb___024root*>(voidSelf);
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vasic_soc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_const_0_sub_0(Vasic_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_const_0_sub_0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullDouble(oldp+479,(40.0));
    bufp->fullBit(oldp+481,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_50m_n));
    bufp->fullBit(oldp+482,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_25m_n));
    bufp->fullBit(oldp+483,(1U));
    bufp->fullBit(oldp+484,(0U));
    bufp->fullBit(oldp+485,(1U));
    bufp->fullBit(oldp+486,(0U));
    bufp->fullIData(oldp+487,(0U),32);
    bufp->fullIData(oldp+488,(0xffffffffU),32);
    bufp->fullIData(oldp+489,(0x00000010U),32);
    bufp->fullBit(oldp+490,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wr));
    bufp->fullIData(oldp+491,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_rd),32);
    bufp->fullBit(oldp+492,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wait));
    bufp->fullBit(oldp+493,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_ready));
    bufp->fullIData(oldp+494,(0U),32);
    bufp->fullIData(oldp+495,(1U),32);
    bufp->fullIData(oldp+496,(2U),32);
    bufp->fullIData(oldp+497,(0x00000020U),32);
    bufp->fullIData(oldp+498,(5U),32);
    bufp->fullQData(oldp+499,(0x0000000100000000ULL),36);
    bufp->fullQData(oldp+501,(0x0000000200000000ULL),36);
    bufp->fullQData(oldp+503,(0x0000000800000000ULL),36);
    bufp->fullIData(oldp+505,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__i),32);
    bufp->fullSData(oldp+506,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_16bit_buffer),16);
    bufp->fullCData(oldp+507,(0x80U),8);
    bufp->fullCData(oldp+508,(0x40U),8);
    bufp->fullCData(oldp+509,(0x20U),8);
    bufp->fullCData(oldp+510,(0x10U),8);
    bufp->fullCData(oldp+511,(8U),8);
    bufp->fullCData(oldp+512,(4U),8);
    bufp->fullCData(oldp+513,(2U),8);
    bufp->fullCData(oldp+514,(1U),8);
    bufp->fullCData(oldp+515,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout_counter),4);
    bufp->fullCData(oldp+516,(0U),5);
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_full_0_sub_0(Vasic_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_full_0\n"); );
    // Body
    Vasic_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_soc_tb___024root*>(voidSelf);
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vasic_soc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasic_soc_tb___024root__trace_full_0_sub_0(Vasic_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root__trace_full_0_sub_0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.asic_soc_tb__DOT__test_counter),32);
    bufp->fullCData(oldp+2,(vlSelfRef.asic_soc_tb__DOT__state_machine),8);
    bufp->fullSData(oldp+3,(vlSelfRef.asic_soc_tb__DOT__data_bus),16);
    bufp->fullBit(oldp+4,(vlSelfRef.asic_soc_tb__DOT__enable_signal));
    bufp->fullBit(oldp+5,(vlSelfRef.asic_soc_tb__DOT__ready_signal));
    bufp->fullBit(oldp+6,(vlSelfRef.asic_soc_tb__DOT__valid_signal));
    bufp->fullCData(oldp+7,(vlSelfRef.asic_soc_tb__DOT__control_flags),4);
    bufp->fullCData(oldp+8,(vlSelfRef.asic_soc_tb__DOT__status_reg),8);
    bufp->fullBit(oldp+9,(vlSelfRef.asic_soc_tb__DOT__clock_div2));
    bufp->fullBit(oldp+10,(vlSelfRef.asic_soc_tb__DOT__clock_div4));
    bufp->fullBit(oldp+11,(vlSelfRef.asic_soc_tb__DOT__clock_div8));
    bufp->fullSData(oldp+12,((1U | (0x0000fffeU & ((IData)(vlSelfRef.asic_soc_tb__DOT__data_bus) 
                                                   << 1U)))),16);
    bufp->fullBit(oldp+13,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div2));
    bufp->fullBit(oldp+14,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div4));
    bufp->fullBit(oldp+15,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg));
    bufp->fullSData(oldp+16,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut),16);
    bufp->fullBit(oldp+17,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap));
    bufp->fullBit(oldp+18,(((~ ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                | (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                            & (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))));
    bufp->fullBit(oldp+19,(((~ ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                | ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                   | (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                            & (3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)))));
    bufp->fullBit(oldp+20,((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                  & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                     >> 2U)))));
    bufp->fullBit(oldp+21,((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                  & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                     >> 3U)))));
    bufp->fullBit(oldp+22,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg) 
                                  >> 7U))));
    bufp->fullBit(oldp+24,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS));
    bufp->fullBit(oldp+25,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC));
    bufp->fullBit(oldp+26,((1U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control 
                                  >> 1U))));
    bufp->fullBit(oldp+27,((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control)));
    bufp->fullBit(oldp+28,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg));
    bufp->fullBit(oldp+29,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg));
    bufp->fullBit(oldp+30,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg));
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn))));
    bufp->fullBit(oldp+32,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg));
    bufp->fullBit(oldp+33,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg));
    bufp->fullBit(oldp+34,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg));
    bufp->fullBit(oldp+35,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg));
    bufp->fullBit(oldp+36,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg));
    bufp->fullBit(oldp+37,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg));
    bufp->fullIData(oldp+38,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr),32);
    bufp->fullIData(oldp+39,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata),32);
    bufp->fullIData(oldp+40,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                               ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                                   ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                       & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                                      [(0x000000ffU 
                                        & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                            - (IData)(0x0100U)) 
                                           >> 2U))]
                                       : 0U) : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                   ? 1U
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                                 : 
                                                ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                                  ? 
                                                 (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                                   ? 
                                                  vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                                  [
                                                  (0x000000ffU 
                                                   & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                       - (IData)(0x0100U)) 
                                                      >> 2U))]
                                                   : 0U)
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                                                    : 
                                                   ((0x001cU 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize
                                                     : 
                                                    ((0x0020U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0
                                                      : 
                                                     ((0x0028U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles
                                                       : 
                                                      ((0x002cU 
                                                        == 
                                                        (0x00000fffU 
                                                         & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped
                                                        : 
                                                       ((0x0030U 
                                                         == 
                                                         (0x00000fffU 
                                                          & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode
                                                         : 0U))))))))))
                               : 0U)),32);
    bufp->fullBit(oldp+41,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet))));
    bufp->fullBit(oldp+43,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    bufp->fullIData(oldp+44,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl),32);
    bufp->fullIData(oldp+45,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status),32);
    bufp->fullIData(oldp+46,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0),32);
    bufp->fullIData(oldp+47,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize),32);
    bufp->fullIData(oldp+48,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles),32);
    bufp->fullIData(oldp+49,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped),32);
    bufp->fullIData(oldp+50,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode),32);
    bufp->fullCData(oldp+51,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state),2);
    bufp->fullCData(oldp+52,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i),8);
    bufp->fullCData(oldp+53,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j),8);
    bufp->fullCData(oldp+54,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k),8);
    bufp->fullIData(oldp+55,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator),32);
    bufp->fullCData(oldp+56,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter),3);
    bufp->fullCData(oldp+57,((0x000000ffU & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                              - (IData)(0x0100U)) 
                                             >> 2U))),8);
    bufp->fullBit(oldp+58,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
    bufp->fullIData(oldp+59,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                              [(0x000000ffU & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                - (IData)(0x0100U)) 
                                               >> 2U))]
                               : 0U)),32);
    bufp->fullCData(oldp+60,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)))),8);
    bufp->fullBit(oldp+61,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en));
    bufp->fullIData(oldp+62,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data),32);
    bufp->fullBit(oldp+63,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
    bufp->fullBit(oldp+64,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))));
    bufp->fullIData(oldp+65,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                              [(0x000000ffU & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                - (IData)(0x0100U)) 
                                               >> 2U))]
                               : 0U)),32);
    bufp->fullCData(oldp+66,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
    bufp->fullBit(oldp+67,(((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en))));
    bufp->fullIData(oldp+68,(((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T
                               : ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                                   ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3
                                   : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator))),32);
    bufp->fullBit(oldp+69,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement));
    bufp->fullCData(oldp+70,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k), 4U) 
                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
    bufp->fullCData(oldp+71,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data),2);
    bufp->fullCData(oldp+72,((0x000000ffU & (((IData)(0x0100U) 
                                              + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                                             >> 2U))),8);
    bufp->fullBit(oldp+73,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
    bufp->fullCData(oldp+74,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data),2);
    bufp->fullBit(oldp+75,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
    bufp->fullCData(oldp+76,(((0U == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                               ? 0U : ((1U & ((~ ((0xffffffffU 
                                                   == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata) 
                                                  | VL_GTS_III(32, 1U, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))) 
                                              | (1U 
                                                 == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)))
                                        ? 1U : 2U))),2);
    bufp->fullIData(oldp+77,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                               ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                                   ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                                       & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                                      [(0x0000003fU 
                                        & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                           >> 2U))]
                                       : 0U) : ((0U 
                                                 == 
                                                 (0x00000fffU 
                                                  & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                 ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                                                  : 
                                                 ((0x001cU 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                                   : 
                                                  ((0x0028U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                                    : 0U)))))
                               : 0U)),32);
    bufp->fullBit(oldp+78,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen));
    bufp->fullBit(oldp+79,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact))));
    bufp->fullBit(oldp+80,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid));
    bufp->fullIData(oldp+81,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl),32);
    bufp->fullIData(oldp+82,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status),32);
    bufp->fullIData(oldp+83,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize),32);
    bufp->fullIData(oldp+84,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles),32);
    bufp->fullCData(oldp+85,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state),2);
    bufp->fullCData(oldp+86,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i),4);
    bufp->fullCData(oldp+87,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j),4);
    bufp->fullCData(oldp+88,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k),4);
    bufp->fullIData(oldp+89,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator),32);
    bufp->fullCData(oldp+90,((0x0000003fU & ((0x00000038U 
                                              & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                 << 3U)) 
                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))),6);
    bufp->fullBit(oldp+91,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en));
    bufp->fullIData(oldp+92,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory
                              [(0x0000003fU & ((0x00000038U 
                                                & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                   << 3U)) 
                                               + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))]
                               : 0U)),32);
    bufp->fullCData(oldp+93,((0x0000003fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             >> 2U))),6);
    bufp->fullBit(oldp+94,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                            & ((0U != (0x0000000fU 
                                       & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                          >> 8U))) 
                               & (0x0200U > (0x00000fffU 
                                             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
    bufp->fullCData(oldp+95,((0x0000003fU & ((0x00000038U 
                                              & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                 << 3U)) 
                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
    bufp->fullIData(oldp+96,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory
                              [(0x0000003fU & ((0x00000038U 
                                                & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                   << 3U)) 
                                               + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))]
                               : 0U)),32);
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                            & ((0x02ffU < (0x00000fffU 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                               & (0x0400U > (0x00000fffU 
                                             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
    bufp->fullBit(oldp+98,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))));
    bufp->fullIData(oldp+99,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                              [(0x0000003fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                               >> 2U))]
                               : 0U)),32);
    bufp->fullCData(oldp+100,((0x0000003fU & ((0x00000038U 
                                               & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                  << 3U)) 
                                              + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
    bufp->fullBit(oldp+101,(((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en))));
    bufp->fullIData(oldp+102,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data),32);
    bufp->fullBit(oldp+103,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen));
    bufp->fullBit(oldp+104,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren));
    bufp->fullBit(oldp+105,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    bufp->fullBit(oldp+106,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready));
    bufp->fullIData(oldp+107,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
                                ? ((0U == (0x000000ffU 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                   [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                    : ((4U == (0x000000ffU 
                                               & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full) 
                                               << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                                << 1U)) 
                                              | (0U 
                                                 != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))))
                                        : ((8U == (0x000000ffU 
                                                   & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control
                                            : ((0x0cU 
                                                == 
                                                (0x000000ffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv
                                                : 0U))))
                                : 0U)),32);
    bufp->fullBit(oldp+108,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
    bufp->fullBit(oldp+109,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
    bufp->fullBit(oldp+110,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid));
    bufp->fullIData(oldp+111,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                ? ((8U == (0x000000ffU 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? (2U | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                    : ((0x0cU == (0x000000ffU 
                                                  & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+112,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen));
    bufp->fullBit(oldp+113,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
    bufp->fullBit(oldp+114,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
    bufp->fullBit(oldp+115,((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)))));
    bufp->fullBit(oldp+116,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
    bufp->fullBit(oldp+118,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid));
    bufp->fullIData(oldp+119,(((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                ? ((0U == (0x000000ffU 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                    : ((4U == (0x000000ffU 
                                               & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                        : ((8U == (0x000000ffU 
                                                   & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                            : ((0x0cU 
                                                == 
                                                (0x000000ffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? (
                                                   ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                      << 1U))
                                                : 0U))))
                                : 0U)),32);
    bufp->fullBit(oldp+120,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
    bufp->fullBit(oldp+121,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
    bufp->fullBit(oldp+122,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid));
    bufp->fullIData(oldp+123,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                ? ((0x14U == (0x0000001fU 
                                              & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                    : ((0x10U == (0x0000001fU 
                                                  & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                        : ((0x0cU == 
                                            (0x0000001fU 
                                             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                            : ((8U 
                                                == 
                                                (0x0000001fU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg
                                                : (
                                                   (4U 
                                                    == 
                                                    (0x0000001fU 
                                                     & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)
                                                     : 0U))))))
                                : 0U)),32);
    bufp->fullBit(oldp+124,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen));
    bufp->fullBit(oldp+125,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))));
    bufp->fullBit(oldp+126,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    bufp->fullBit(oldp+127,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    bufp->fullBit(oldp+128,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart));
    bufp->fullBit(oldp+129,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd));
    bufp->fullBit(oldp+130,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio));
    bufp->fullBit(oldp+131,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash));
    bufp->fullBit(oldp+132,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    bufp->fullCData(oldp+133,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg),8);
    bufp->fullIData(oldp+134,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg),24);
    bufp->fullIData(oldp+135,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg),32);
    bufp->fullBit(oldp+136,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg));
    bufp->fullBit(oldp+137,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
    bufp->fullCData(oldp+138,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter),8);
    bufp->fullCData(oldp+139,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+140,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter),8);
    bufp->fullIData(oldp+141,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg),32);
    bufp->fullBit(oldp+142,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast));
    bufp->fullBit(oldp+143,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq));
    bufp->fullBit(oldp+144,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge));
    bufp->fullBit(oldp+145,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge));
    bufp->fullIData(oldp+146,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control),32);
    bufp->fullCData(oldp+147,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter),8);
    bufp->fullBit(oldp+148,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
    bufp->fullCData(oldp+149,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg),8);
    bufp->fullCData(oldp+150,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter),3);
    bufp->fullBit(oldp+151,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy));
    bufp->fullCData(oldp+152,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData),8);
    bufp->fullBit(oldp+153,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
    bufp->fullBit(oldp+154,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData));
    bufp->fullCData(oldp+155,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb),4);
    bufp->fullCData(oldp+156,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg),8);
    bufp->fullIData(oldp+157,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg),24);
    bufp->fullIData(oldp+158,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg),32);
    bufp->fullIData(oldp+159,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg),32);
    bufp->fullIData(oldp+160,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg),32);
    bufp->fullIData(oldp+161,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg),32);
    bufp->fullCData(oldp+162,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state),3);
    bufp->fullBit(oldp+163,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv));
    bufp->fullBit(oldp+164,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk));
    bufp->fullBit(oldp+165,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn));
    bufp->fullCData(oldp+166,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt),6);
    bufp->fullIData(oldp+167,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg),32);
    bufp->fullIData(oldp+168,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut),32);
    bufp->fullBit(oldp+169,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr));
    bufp->fullIData(oldp+170,((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))
                                ? (0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc)
                                : (0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))),32);
    bufp->fullIData(oldp+171,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata),32);
    bufp->fullCData(oldp+172,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb),4);
    bufp->fullBit(oldp+173,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid));
    bufp->fullIData(oldp+174,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn),32);
    bufp->fullIData(oldp+175,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1),32);
    bufp->fullIData(oldp+176,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2),32);
    bufp->fullIData(oldp+177,(((((2U & (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                         << 1U) & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                                   >> 2U))) 
                                 | (1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                          & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                             >> 2U)))) 
                                << 0x00000012U) | (
                                                   (((~ 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                                       | ((1U 
                                                           == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                                          | (2U 
                                                             == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                                                     & (3U 
                                                        == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))) 
                                                    << 0x00000011U) 
                                                   | (((~ 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                                         | (1U 
                                                            == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                                                       & (2U 
                                                          == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))) 
                                                      << 0x00000010U)))),32);
    bufp->fullIData(oldp+178,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi),32);
    bufp->fullBit(oldp+179,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid));
    bufp->fullQData(oldp+180,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data),36);
    bufp->fullQData(oldp+182,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle),64);
    bufp->fullQData(oldp+184,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr),64);
    bufp->fullIData(oldp+186,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc),32);
    bufp->fullIData(oldp+187,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc),32);
    bufp->fullIData(oldp+188,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out),32);
    bufp->fullCData(oldp+189,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh),5);
    bufp->fullIData(oldp+190,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode),32);
    bufp->fullIData(oldp+191,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode),32);
    bufp->fullIData(oldp+192,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr),32);
    bufp->fullIData(oldp+193,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc),32);
    bufp->fullBit(oldp+194,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay));
    bufp->fullBit(oldp+195,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active));
    bufp->fullIData(oldp+196,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask),32);
    bufp->fullIData(oldp+197,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending),32);
    bufp->fullIData(oldp+198,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer),32);
    bufp->fullIData(oldp+199,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[0]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[1]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[2]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[3]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[4]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[5]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[6]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[7]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[8]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[9]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[10]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[11]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[12]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[13]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[14]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[15]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[16]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[17]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[18]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[19]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[20]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[21]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[22]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[23]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[24]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[25]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[26]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[27]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[28]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[29]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[30]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[31]),32);
    bufp->fullCData(oldp+231,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state),2);
    bufp->fullCData(oldp+232,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize),2);
    bufp->fullIData(oldp+233,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q),32);
    bufp->fullBit(oldp+234,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch));
    bufp->fullBit(oldp+235,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst));
    bufp->fullBit(oldp+236,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata));
    bufp->fullBit(oldp+237,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata));
    bufp->fullBit(oldp+238,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer));
    bufp->fullBit(oldp+239,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword));
    bufp->fullBit(oldp+240,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg));
    bufp->fullBit(oldp+241,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid));
    bufp->fullBit(oldp+242,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word));
    bufp->fullBit(oldp+243,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))));
    bufp->fullBit(oldp+244,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui));
    bufp->fullBit(oldp+245,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc));
    bufp->fullBit(oldp+246,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal));
    bufp->fullBit(oldp+247,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr));
    bufp->fullBit(oldp+248,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq));
    bufp->fullBit(oldp+249,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne));
    bufp->fullBit(oldp+250,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt));
    bufp->fullBit(oldp+251,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge));
    bufp->fullBit(oldp+252,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu));
    bufp->fullBit(oldp+253,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu));
    bufp->fullBit(oldp+254,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb));
    bufp->fullBit(oldp+255,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh));
    bufp->fullBit(oldp+256,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw));
    bufp->fullBit(oldp+257,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu));
    bufp->fullBit(oldp+258,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu));
    bufp->fullBit(oldp+259,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb));
    bufp->fullBit(oldp+260,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh));
    bufp->fullBit(oldp+261,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw));
    bufp->fullBit(oldp+262,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi));
    bufp->fullBit(oldp+263,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti));
    bufp->fullBit(oldp+264,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu));
    bufp->fullBit(oldp+265,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori));
    bufp->fullBit(oldp+266,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori));
    bufp->fullBit(oldp+267,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi));
    bufp->fullBit(oldp+268,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli));
    bufp->fullBit(oldp+269,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli));
    bufp->fullBit(oldp+270,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai));
    bufp->fullBit(oldp+271,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add));
    bufp->fullBit(oldp+272,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub));
    bufp->fullBit(oldp+273,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll));
    bufp->fullBit(oldp+274,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt));
    bufp->fullBit(oldp+275,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu));
    bufp->fullBit(oldp+276,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor));
    bufp->fullBit(oldp+277,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl));
    bufp->fullBit(oldp+278,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra));
    bufp->fullBit(oldp+279,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or));
    bufp->fullBit(oldp+280,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and));
    bufp->fullBit(oldp+281,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle));
    bufp->fullBit(oldp+282,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh));
    bufp->fullBit(oldp+283,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr));
    bufp->fullBit(oldp+284,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh));
    bufp->fullBit(oldp+285,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak));
    bufp->fullBit(oldp+286,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence));
    bufp->fullBit(oldp+287,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq));
    bufp->fullBit(oldp+288,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq));
    bufp->fullBit(oldp+289,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq));
    bufp->fullBit(oldp+290,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq));
    bufp->fullBit(oldp+291,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq));
    bufp->fullBit(oldp+292,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer));
    bufp->fullBit(oldp+293,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap));
    bufp->fullCData(oldp+294,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd),5);
    bufp->fullCData(oldp+295,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1),5);
    bufp->fullCData(oldp+296,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2),5);
    bufp->fullIData(oldp+297,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm),32);
    bufp->fullIData(oldp+298,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j),32);
    bufp->fullBit(oldp+299,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    bufp->fullBit(oldp+300,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q));
    bufp->fullBit(oldp+301,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger));
    bufp->fullBit(oldp+302,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q));
    bufp->fullBit(oldp+303,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr));
    bufp->fullBit(oldp+304,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal));
    bufp->fullBit(oldp+305,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu));
    bufp->fullBit(oldp+306,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai));
    bufp->fullBit(oldp+307,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
    bufp->fullBit(oldp+308,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw));
    bufp->fullBit(oldp+309,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra));
    bufp->fullBit(oldp+310,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
    bufp->fullBit(oldp+311,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt));
    bufp->fullBit(oldp+312,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu));
    bufp->fullBit(oldp+313,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu));
    bufp->fullBit(oldp+314,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw));
    bufp->fullBit(oldp+315,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm));
    bufp->fullBit(oldp+316,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg));
    bufp->fullBit(oldp+317,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare));
    bufp->fullBit(oldp+318,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
    bufp->fullQData(oldp+319,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr),64);
    bufp->fullQData(oldp+321,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr),64);
    bufp->fullIData(oldp+323,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm),32);
    bufp->fullCData(oldp+324,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1),5);
    bufp->fullCData(oldp+325,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2),5);
    bufp->fullCData(oldp+326,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd),5);
    bufp->fullIData(oldp+327,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val),32);
    bufp->fullIData(oldp+328,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val),32);
    bufp->fullBit(oldp+329,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid));
    bufp->fullBit(oldp+330,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid));
    bufp->fullQData(oldp+331,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr),64);
    bufp->fullIData(oldp+333,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm),32);
    bufp->fullIData(oldp+334,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode),32);
    bufp->fullCData(oldp+335,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1),5);
    bufp->fullCData(oldp+336,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2),5);
    bufp->fullCData(oldp+337,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd),5);
    bufp->fullBit(oldp+338,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next));
    bufp->fullBit(oldp+339,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn));
    bufp->fullBit(oldp+340,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn));
    bufp->fullQData(oldp+341,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr),64);
    bufp->fullIData(oldp+343,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm),32);
    bufp->fullIData(oldp+344,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode),32);
    bufp->fullCData(oldp+345,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1),5);
    bufp->fullCData(oldp+346,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2),5);
    bufp->fullCData(oldp+347,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd),5);
    bufp->fullCData(oldp+348,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state),8);
    bufp->fullCData(oldp+349,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state),2);
    bufp->fullWData(oldp+350,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state),128);
    bufp->fullBit(oldp+354,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst));
    bufp->fullBit(oldp+355,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata));
    bufp->fullBit(oldp+356,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata));
    bufp->fullBit(oldp+357,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store));
    bufp->fullBit(oldp+358,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu));
    bufp->fullBit(oldp+359,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch));
    bufp->fullBit(oldp+360,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr));
    bufp->fullBit(oldp+361,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace));
    bufp->fullBit(oldp+362,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu));
    bufp->fullBit(oldp+363,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh));
    bufp->fullBit(oldp+364,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb));
    bufp->fullCData(oldp+365,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd),5);
    bufp->fullIData(oldp+366,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc),32);
    bufp->fullBit(oldp+367,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout));
    bufp->fullIData(oldp+368,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending),32);
    bufp->fullBit(oldp+369,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq));
    bufp->fullIData(oldp+370,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out),32);
    bufp->fullIData(oldp+371,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q),32);
    bufp->fullBit(oldp+372,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0));
    bufp->fullBit(oldp+373,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q));
    bufp->fullBit(oldp+374,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait));
    bufp->fullBit(oldp+375,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2));
    bufp->fullIData(oldp+376,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)
                                ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                   - vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2)
                                : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                   + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
    bufp->fullIData(oldp+377,((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               << (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
    bufp->fullIData(oldp+378,((IData)((0x00000001ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) 
                                                                            | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai)) 
                                                                           & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                                                              >> 0x0000001fU)))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))), 
                                                        (0x0000001fU 
                                                         & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))))),32);
    bufp->fullBit(oldp+379,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq));
    bufp->fullBit(oldp+380,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu));
    bufp->fullBit(oldp+381,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts));
    bufp->fullBit(oldp+382,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q));
    bufp->fullBit(oldp+383,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write));
    bufp->fullIData(oldp+384,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata),32);
    bufp->fullIData(oldp+385,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1),32);
    bufp->fullIData(oldp+386,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2),32);
    bufp->fullIData(oldp+387,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control),32);
    bufp->fullIData(oldp+388,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv),32);
    bufp->fullIData(oldp+389,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter),32);
    bufp->fullBit(oldp+390,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick));
    bufp->fullCData(oldp+391,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState),2);
    bufp->fullCData(oldp+392,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter),4);
    bufp->fullCData(oldp+393,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg),8);
    bufp->fullCData(oldp+394,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState),2);
    bufp->fullCData(oldp+395,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter),4);
    bufp->fullCData(oldp+396,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg),8);
    bufp->fullBit(oldp+397,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG));
    bufp->fullBit(oldp+398,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    bufp->fullIData(oldp+399,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter),32);
    bufp->fullBit(oldp+400,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick));
    bufp->fullBit(oldp+401,((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))))));
    bufp->fullBit(oldp+402,(((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0))));
    bufp->fullCData(oldp+403,(((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)) 
                                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)))
                                ? 0U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg))),8);
    bufp->fullBit(oldp+404,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11) 
                             & (0U == (0x000000ffU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)))));
    bufp->fullCData(oldp+406,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                              [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]),8);
    bufp->fullCData(oldp+407,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value),4);
    bufp->fullCData(oldp+408,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value),4);
    bufp->fullBit(oldp+409,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full));
    bufp->fullBit(oldp+410,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    bufp->fullBit(oldp+411,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty));
    bufp->fullBit(oldp+412,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))));
    bufp->fullBit(oldp+413,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+414,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[0]),8);
    bufp->fullCData(oldp+415,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[1]),8);
    bufp->fullCData(oldp+416,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[2]),8);
    bufp->fullCData(oldp+417,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[3]),8);
    bufp->fullCData(oldp+418,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[4]),8);
    bufp->fullCData(oldp+419,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[5]),8);
    bufp->fullCData(oldp+420,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[6]),8);
    bufp->fullCData(oldp+421,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[7]),8);
    bufp->fullCData(oldp+422,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[8]),8);
    bufp->fullCData(oldp+423,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[9]),8);
    bufp->fullCData(oldp+424,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[10]),8);
    bufp->fullCData(oldp+425,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[11]),8);
    bufp->fullCData(oldp+426,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[12]),8);
    bufp->fullCData(oldp+427,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[13]),8);
    bufp->fullCData(oldp+428,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[14]),8);
    bufp->fullCData(oldp+429,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[15]),8);
    bufp->fullBit(oldp+430,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
    bufp->fullCData(oldp+433,(((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid)
                                ? (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                                : 0U)),8);
    bufp->fullBit(oldp+434,(((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1))));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)))));
    bufp->fullCData(oldp+436,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory
                              [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value]),8);
    bufp->fullCData(oldp+437,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value),4);
    bufp->fullCData(oldp+438,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value),4);
    bufp->fullBit(oldp+439,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
    bufp->fullBit(oldp+440,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    bufp->fullBit(oldp+441,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty));
    bufp->fullBit(oldp+442,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full));
    bufp->fullBit(oldp+443,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+444,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[0]),8);
    bufp->fullCData(oldp+445,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[1]),8);
    bufp->fullCData(oldp+446,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[2]),8);
    bufp->fullCData(oldp+447,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[3]),8);
    bufp->fullCData(oldp+448,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[4]),8);
    bufp->fullCData(oldp+449,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[5]),8);
    bufp->fullCData(oldp+450,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[6]),8);
    bufp->fullCData(oldp+451,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[7]),8);
    bufp->fullCData(oldp+452,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[8]),8);
    bufp->fullCData(oldp+453,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[9]),8);
    bufp->fullCData(oldp+454,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[10]),8);
    bufp->fullCData(oldp+455,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[11]),8);
    bufp->fullCData(oldp+456,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[12]),8);
    bufp->fullCData(oldp+457,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[13]),8);
    bufp->fullCData(oldp+458,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[14]),8);
    bufp->fullCData(oldp+459,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[15]),8);
    bufp->fullBit(oldp+460,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+461,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick));
    bufp->fullBit(oldp+462,((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                                   >> 2U))));
    bufp->fullCData(oldp+463,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m),3);
    bufp->fullBit(oldp+464,((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                                      >> 2U)))));
    bufp->fullBit(oldp+465,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read));
    bufp->fullBit(oldp+466,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write));
    bufp->fullBit(oldp+467,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word));
    bufp->fullBit(oldp+468,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done));
    bufp->fullBit(oldp+469,(vlSelfRef.asic_soc_tb__DOT__clk));
    bufp->fullBit(oldp+470,(vlSelfRef.asic_soc_tb__DOT__rst_n));
    bufp->fullCData(oldp+471,(vlSelfRef.asic_soc_tb__DOT__ip_sel),3);
    bufp->fullSData(oldp+472,(((((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel))
                                  ? (0x00007fffU & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut))
                                  : 0U) << 1U) | ((1U 
                                                   == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel)) 
                                                  & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg)))),16);
    bufp->fullSData(oldp+473,(((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel))
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+474,(((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel))
                                ? (1U | (0x0000fffeU 
                                         & ((IData)(vlSelfRef.asic_soc_tb__DOT__data_bus) 
                                            << 1U)))
                                : 0U)),16);
    bufp->fullIData(oldp+475,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata),32);
    bufp->fullIData(oldp+476,(((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                                ? ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel))
                                    ? (1U | (0x0000fffeU 
                                             & ((IData)(vlSelfRef.asic_soc_tb__DOT__data_bus) 
                                                << 1U)))
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+477,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word),32);
    bufp->fullIData(oldp+478,(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle),32);
}
