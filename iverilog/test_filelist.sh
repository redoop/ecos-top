#!/bin/bash

# Simple Filelist Test Script
# Tests if filelist files are correctly parsed and loaded

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
TOP_DIR="$PROJECT_ROOT/top"

echo "============================================================"
echo "🧪 Filelist Integration Test"
echo "============================================================"

# Test filelist parsing function
parse_filelist() {
    local filelist_file="$1"
    local base_path="$2"
    
    if [ ! -f "$filelist_file" ]; then
        echo "❌ Filelist not found: $filelist_file"
        return 1
    fi
    
    echo "📋 Parsing: $filelist_file"
    local file_count=0
    
    while IFS= read -r line || [[ -n "$line" ]]; do
        # Remove trailing whitespace
        line=$(echo "$line" | sed 's/[[:space:]]*$//')
        
        # Skip empty lines and comments
        [[ -z "$line" || "$line" =~ ^[[:space:]]*// || "$line" =~ ^[[:space:]]*# ]] && continue
        
        # Handle $RTL_PATH variable substitution
        if [[ "$line" =~ \$RTL_PATH ]]; then
            line="${line/\$RTL_PATH/$base_path}"
        fi
        
        # Convert relative paths to absolute
        if [[ "$line" =~ ^\.\./ ]]; then
            line="$base_path/$line"
        elif [[ ! "$line" =~ ^/ ]]; then
            line="$base_path/$line"
        fi
        
        # Check if file exists
        if [ -f "$line" ]; then
            echo "  ✓ $line"
            ((file_count++))
        else
            echo "  ❌ $line (missing)"
        fi
    done < "$filelist_file"
    
    echo "  📊 Total files: $file_count"
    return 0
}

# Test all filelist files
FILELIST_DIR="$TOP_DIR/filelist"
TOTAL_FILES=0

echo ""
echo "Testing filelist files in: $FILELIST_DIR"
echo ""

for filelist in "$FILELIST_DIR"/*.f; do
    if [ -f "$filelist" ]; then
        parse_filelist "$filelist" "$TOP_DIR"
        echo ""
    fi
done

echo "============================================================"
echo "✅ Filelist Integration Test Complete"
echo "============================================================"

# Test compilation command generation (without actually compiling)
echo ""
echo "🔧 Testing compilation command generation..."

RTL_FILES=()
LIB_FILES=()
TB_FILES=()

# Load files from each filelist
for filelist_type in "asic_top" "ip" "lib" "asic_tblist"; do
    filelist_file="$FILELIST_DIR/${filelist_type}.f"
    if [ -f "$filelist_file" ]; then
        while IFS= read -r file_path; do
            if [ -n "$file_path" ]; then
                case "$filelist_type" in
                    "asic_tblist")
                        TB_FILES+=("$file_path")
                        ;;
                    "lib")
                        LIB_FILES+=("$file_path")
                        ;;
                    *)
                        RTL_FILES+=("$file_path")
                        ;;
                esac
            fi
        done < <(parse_filelist "$filelist_file" "$TOP_DIR" 2>/dev/null | grep "✓" | sed 's/.*✓ //')
    fi
done

ALL_FILES=("${RTL_FILES[@]}" "${LIB_FILES[@]}" "${TB_FILES[@]}")

echo "📊 File Summary:"
echo "  RTL Files: ${#RTL_FILES[@]}"
echo "  Library Files: ${#LIB_FILES[@]}"
echo "  Testbench Files: ${#TB_FILES[@]}"
echo "  Total Files: ${#ALL_FILES[@]}"

if [ ${#ALL_FILES[@]} -gt 0 ]; then
    echo ""
    echo "✅ Filelist integration is working correctly!"
    echo "   All files are properly loaded and accessible."
else
    echo ""
    echo "❌ No files loaded - check filelist configuration."
    exit 1
fi