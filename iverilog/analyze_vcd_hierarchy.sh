#!/bin/bash

# VCD Hierarchy Analyzer
# Analyzes the hierarchy depth and structure of VCD files

set -e

VCD_FILE="${1:-work/asic_top_netlist_fixed.vcd}"

if [ ! -f "$VCD_FILE" ]; then
    echo "❌ VCD file not found: $VCD_FILE"
    echo "Usage: $0 [vcd_file]"
    exit 1
fi

echo "============================================================"
echo "VCD Hierarchy Analysis: $(basename "$VCD_FILE")"
echo "============================================================"

# File size
FILE_SIZE=$(stat -f%z "$VCD_FILE" 2>/dev/null || stat -c%s "$VCD_FILE" 2>/dev/null || echo "0")
if [ "$FILE_SIZE" -gt 1048576 ]; then
    SIZE_STR="$(echo "scale=2; $FILE_SIZE / 1024 / 1024" | bc 2>/dev/null || echo "$((FILE_SIZE / 1048576))") MB"
elif [ "$FILE_SIZE" -gt 1024 ]; then
    SIZE_STR="$((FILE_SIZE / 1024)) KB"
else
    SIZE_STR="$FILE_SIZE bytes"
fi

echo "File Size: $SIZE_STR"
echo ""

# Count scopes and variables
SCOPE_COUNT=$(grep -c '^\$scope' "$VCD_FILE" 2>/dev/null || echo "0")
VAR_COUNT=$(grep -c '^\$var' "$VCD_FILE" 2>/dev/null || echo "0")
UPSCOPE_COUNT=$(grep -c '^\$upscope' "$VCD_FILE" 2>/dev/null || echo "0")

echo "Statistics:"
echo "  Scopes: $SCOPE_COUNT"
echo "  Variables: $VAR_COUNT"
echo "  Upscopes: $UPSCOPE_COUNT"
echo ""

# Analyze hierarchy depth
echo "Hierarchy Structure:"
echo "===================="

# Extract scope hierarchy with indentation
awk '
BEGIN { 
    depth = 0 
    max_depth = 0
}
/^\$scope/ { 
    for(i=0; i<depth; i++) printf "  "
    print $0
    depth++
    if(depth > max_depth) max_depth = depth
}
/^\$upscope/ { 
    depth--
    if(depth < 0) depth = 0
}
END { 
    print ""
    print "Maximum Hierarchy Depth: " max_depth " levels"
}
' "$VCD_FILE" | head -50

if [ $SCOPE_COUNT -gt 50 ]; then
    echo "... (showing first 50 scopes, total: $SCOPE_COUNT)"
fi

echo ""

# Show module types
echo "Module Types Found:"
echo "==================="
grep '^\$scope module' "$VCD_FILE" | awk '{print $3}' | sort | uniq -c | sort -nr | head -20

echo ""

# Time analysis
echo "Simulation Time Range:"
echo "======================"
FIRST_TIME=$(grep -E '^#[0-9]+' "$VCD_FILE" | head -1 | sed 's/^#//')
LAST_TIME=$(grep -E '^#[0-9]+' "$VCD_FILE" | tail -1 | sed 's/^#//')

if [ -n "$FIRST_TIME" ] && [ -n "$LAST_TIME" ]; then
    echo "  Start Time: $FIRST_TIME"
    echo "  End Time: $LAST_TIME"
    echo "  Duration: $((LAST_TIME - FIRST_TIME)) time units"
else
    echo "  No time information found"
fi

echo ""
echo "============================================================"
echo "Analysis Complete"
echo "============================================================"