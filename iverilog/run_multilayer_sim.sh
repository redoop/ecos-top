#!/bin/bash

# Multi-layer Netlist Simulation Runner
# Generates VCD files with different hierarchy depths for comprehensive analysis

set -e

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# === Helper Functions ===
print_header() {
    echo ""
    echo "============================================================"
    echo "$1"
    echo "============================================================"
}

print_status() {
    echo "🔍 $1"
}

print_success() {
    echo "✅ $1"
}

print_warning() {
    echo "⚠️  $1"
}

print_error() {
    echo "❌ $1"
}

get_file_size() {
    if [ -f "$1" ]; then
        if command -v stat >/dev/null 2>&1; then
            stat -f%z "$1" 2>/dev/null || stat -c%s "$1" 2>/dev/null || echo "0"
        else
            echo "0"
        fi
    else
        echo "0"
    fi
}

format_size() {
    local size=$1
    if [ "$size" -gt 1048576 ]; then
        echo "$(echo "scale=2; $size / 1024 / 1024" | bc 2>/dev/null || echo "$((size / 1048576))") MB"
    elif [ "$size" -gt 1024 ]; then
        echo "$((size / 1024)) KB"
    else
        echo "$size bytes"
    fi
}

# === VCD Generation Functions ===
run_simulation_with_depth() {
    local depth_name="$1"
    local depth_flag="$2"
    local description="$3"
    
    print_header "🎯 Generating $description VCD"
    
    local output_vcd="$PROJECT_ROOT/work/asic_top_netlist_${depth_name}.vcd"
    local output_log="$PROJECT_ROOT/work/simulation_${depth_name}.log"
    
    print_status "Configuration: $description"
    print_status "Output VCD: $(basename "$output_vcd")"
    
    # Set environment variable for VCD depth
    export VCD_DEPTH="$depth_flag"
    
    # Modify testbench to use specific output file
    local temp_tb="$PROJECT_ROOT/work/temp_tb_${depth_name}.sv"
    sed "s|asic_top_netlist_fixed.vcd|asic_top_netlist_${depth_name}.vcd|g" \
        "$PROJECT_ROOT/asic_top_netlist_tb_fixed.sv" > "$temp_tb"
    
    # Run simulation
    local start_time=$(date +%s)
    
    if VCD_DEPTH="$depth_flag" "$PROJECT_ROOT/run_netlist_fixed_sim.sh" > "$output_log" 2>&1; then
        local end_time=$(date +%s)
        local duration=$((end_time - start_time))
        
        if [ -f "$output_vcd" ]; then
            local vcd_size=$(get_file_size "$output_vcd")
            print_success "$description completed in ${duration}s"
            print_success "VCD file: $(format_size $vcd_size)"
        else
            print_warning "$description completed but VCD not found"
        fi
    else
        print_error "$description failed"
        return 1
    fi
    
    # Cleanup
    rm -f "$temp_tb"
    unset VCD_DEPTH
    
    return 0
}

# === Main Function ===
main() {
    print_header "🚀 Multi-layer Netlist Simulation Generator"
    echo "Generating VCD files with different hierarchy depths"
    echo "Date: $(date)"
    
    # Ensure work directory exists
    mkdir -p "$PROJECT_ROOT/work"
    
    # Check if base simulation script exists
    if [ ! -f "$PROJECT_ROOT/run_netlist_fixed_sim.sh" ]; then
        print_error "Base simulation script not found: run_netlist_fixed_sim.sh"
        exit 1
    fi
    
    # Generate different VCD depths
    local depths=(
        "medium:medium:Medium Depth (3 levels)"
        "default:default:Default Multi-layer (4 levels)"
        "deep:deep:Deep Hierarchy (5 levels)"
    )
    
    local success_count=0
    local total_count=${#depths[@]}
    
    for depth_config in "${depths[@]}"; do
        IFS=':' read -r depth_name depth_flag description <<< "$depth_config"
        
        if run_simulation_with_depth "$depth_name" "$depth_flag" "$description"; then
            success_count=$((success_count + 1))
        fi
        
        echo ""
    done
    
    # Optional: Generate full hierarchy (only if explicitly requested)
    if [ "$1" = "--include-full" ]; then
        print_warning "Generating FULL hierarchy VCD (this may take a very long time and create a huge file!)"
        read -p "Are you sure? (y/N): " -n 1 -r
        echo
        if [[ $REPLY =~ ^[Yy]$ ]]; then
            if run_simulation_with_depth "full" "full" "Full Hierarchy (All levels)"; then
                success_count=$((success_count + 1))
            fi
            total_count=$((total_count + 1))
        fi
    fi
    
    # Summary
    print_header "📊 Multi-layer Simulation Summary"
    
    echo "Generated VCD Files:"
    for vcd_file in "$PROJECT_ROOT/work"/asic_top_netlist_*.vcd; do
        if [ -f "$vcd_file" ]; then
            local size=$(get_file_size "$vcd_file")
            local name=$(basename "$vcd_file")
            echo "  ✅ $name ($(format_size $size))"
        fi
    done
    
    echo ""
    echo "Success Rate: $success_count/$total_count simulations completed"
    
    if [ $success_count -gt 0 ]; then
        print_success "Multi-layer VCD generation completed!"
        echo ""
        echo "Usage Examples:"
        echo "  # View medium depth VCD:"
        echo "  gtkwave work/asic_top_netlist_medium.vcd"
        echo ""
        echo "  # View default multi-layer VCD:"
        echo "  gtkwave work/asic_top_netlist_default.vcd"
        echo ""
        echo "  # View deep hierarchy VCD:"
        echo "  gtkwave work/asic_top_netlist_deep.vcd"
        
        if [ -f "$PROJECT_ROOT/work/asic_top_netlist_full.vcd" ]; then
            echo ""
            echo "  # View full hierarchy VCD (may be very large):"
            echo "  gtkwave work/asic_top_netlist_full.vcd"
        fi
    else
        print_error "No VCD files were generated successfully"
        exit 1
    fi
    
    print_header "✅ Complete"
}

# === Usage Information ===
show_usage() {
    echo "Multi-layer Netlist Simulation Generator"
    echo ""
    echo "Usage:"
    echo "  $0                    # Generate medium, default, and deep VCD files"
    echo "  $0 --include-full     # Also generate full hierarchy VCD (WARNING: huge file!)"
    echo "  $0 --help            # Show this help"
    echo ""
    echo "Generated VCD Files:"
    echo "  asic_top_netlist_medium.vcd   - 3 levels deep"
    echo "  asic_top_netlist_default.vcd  - 4 levels deep (recommended)"
    echo "  asic_top_netlist_deep.vcd     - 5 levels deep"
    echo "  asic_top_netlist_full.vcd     - All levels (optional, very large)"
    echo ""
    echo "Examples:"
    echo "  ./run_multilayer_sim.sh"
    echo "  ./run_multilayer_sim.sh --include-full"
}

# === Script Entry Point ===
if [ "$1" = "--help" ] || [ "$1" = "-h" ]; then
    show_usage
    exit 0
fi

if [ "${BASH_SOURCE[0]}" = "${0}" ]; then
    main "$@"
fi