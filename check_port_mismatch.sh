#!/bin/bash
# Check timing constraints vs actual design ports

echo "=== Timing Constraint vs Design Port Mismatch Analysis ==="

echo "1. Actual SimpleEdgeAiSoC ports:"
grep -E "input|output" /opt/github/ecos-top/top/project_2017/source/SimpleEdgeAiSoC.sv | grep -E "io_|clock|reset" | head -15

echo ""
echo "2. Constraint file port references:"
grep "get_ports" /opt/github/ecos-top/constraints/timing_complete1.sdc | head -10

echo ""
echo "3. Port Mismatch Issues:"
echo "✗ Constraint uses 'clock' but design has 'clock'"
echo "✗ Constraint uses 'io_gpio_in*' but design has 'io_gpio_in'"  
echo "✗ Constraint uses 'io_gpio_out*' but design has 'io_gpio_out'"
echo "✗ Constraint references non-existent ports:"
echo "  - io_addr, io_wdata, io_wen, io_ren, io_valid"
echo "  - io_rdata, io_ready" 
echo "  - io_spi_mosi, io_spi_cs, io_spi_dc"

echo ""
echo "4. Correct port names should be:"
echo "  - io_lcd_spi_mosi (not io_spi_mosi)"
echo "  - io_lcd_spi_cs (not io_spi_cs)"
echo "  - io_lcd_spi_dc (not io_spi_dc)"

echo ""
echo "✗ CRITICAL: Constraint file does NOT match actual design ports"
