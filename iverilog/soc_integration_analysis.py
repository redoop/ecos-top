#!/usr/bin/env python3
"""
SimpleEdgeAiSoC Integration Analysis Tool
Compares standalone vs ASIC-integrated SimpleEdgeAiSoC waveforms
"""

import os
import re
import sys
from pathlib import Path

def analyze_vcd_file(vcd_path):
    """Analyze VCD file structure and extract key information"""
    if not os.path.exists(vcd_path):
        return None
    
    analysis = {
        'file_size': os.path.getsize(vcd_path),
        'signals': [],
        'modules': [],
        'signal_count': 0,
        'time_range': {'start': 0, 'end': 0},
        'soc_signals': {},
        'hierarchy_depth': 0
    }
    
    try:
        with open(vcd_path, 'r') as f:
            content = f.read()
            
        # Extract signals
        signal_pattern = r'\$var\s+(\w+)\s+(\d+)\s+(\S+)\s+(.+?)\s+\$end'
        signals = re.findall(signal_pattern, content)
        analysis['signals'] = signals
        analysis['signal_count'] = len(signals)
        
        # Extract modules/scopes
        scope_pattern = r'\$scope\s+module\s+(\S+)\s+\$end'
        modules = re.findall(scope_pattern, content)
        analysis['modules'] = modules
        
        # Calculate hierarchy depth
        max_depth = 0
        current_depth = 0
        for line in content.split('\n'):
            if '$scope' in line:
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif '$upscope' in line:
                current_depth -= 1
        analysis['hierarchy_depth'] = max_depth
        
        # Extract time range
        time_pattern = r'#(\d+)'
        times = [int(t) for t in re.findall(time_pattern, content)]
        if times:
            analysis['time_range']['start'] = min(times)
            analysis['time_range']['end'] = max(times)
        
        # Look for SimpleEdgeAiSoC specific signals
        soc_signal_patterns = {
            'uart': r'uart_tx|uart_rx|uart.*irq',
            'gpio': r'gpio_out|gpio_in',
            'spi': r'spi_clk|spi_mosi|spi_miso|spi_cs',
            'lcd': r'lcd.*spi|lcd_backlight|lcd_rst|lcd_dc',
            'flash': r'flash.*spi',
            'psram': r'psram.*spi',
            'accelerator': r'compact_irq|bitnet_irq|compact.*|bitnet.*',
            'cpu': r'cpu_pc|cpu_instruction|cpu_reg|cpu_mem',
            'trap': r'trap'
        }
        
        for category, pattern in soc_signal_patterns.items():
            matches = []
            for signal in signals:
                signal_name = signal[3]  # signal name is 4th element
                if re.search(pattern, signal_name, re.IGNORECASE):
                    matches.append(signal_name)
            analysis['soc_signals'][category] = matches
            
    except Exception as e:
        print(f"Error analyzing {vcd_path}: {e}")
        return None
    
    return analysis

def compare_analyses(standalone_analysis, integrated_analysis):
    """Compare two VCD analyses and generate report"""
    
    if not standalone_analysis or not integrated_analysis:
        return "Error: Could not analyze one or both VCD files"
    
    report = []
    report.append("=" * 80)
    report.append("SimpleEdgeAiSoC Integration Comparison Analysis")
    report.append("=" * 80)
    report.append("")
    
    # File size comparison
    standalone_size = standalone_analysis['file_size']
    integrated_size = integrated_analysis['file_size']
    size_diff_pct = ((integrated_size - standalone_size) / standalone_size) * 100
    
    report.append("📊 File Size Comparison:")
    report.append(f"  Standalone:  {standalone_size:,} bytes ({standalone_size/1024:.1f} KB)")
    report.append(f"  Integrated:  {integrated_size:,} bytes ({integrated_size/1024:.1f} KB)")
    report.append(f"  Difference:  {size_diff_pct:+.1f}% ({'larger' if size_diff_pct > 0 else 'smaller'} when integrated)")
    report.append("")
    
    # Signal count comparison
    standalone_signals = standalone_analysis['signal_count']
    integrated_signals = integrated_analysis['signal_count']
    signal_diff_pct = ((integrated_signals - standalone_signals) / standalone_signals) * 100
    
    report.append("📈 Signal Count Comparison:")
    report.append(f"  Standalone:  {standalone_signals} signals")
    report.append(f"  Integrated:  {integrated_signals} signals")
    report.append(f"  Difference:  {signal_diff_pct:+.1f}% ({'more' if signal_diff_pct > 0 else 'fewer'} when integrated)")
    report.append("")
    
    # Hierarchy depth comparison
    standalone_depth = standalone_analysis['hierarchy_depth']
    integrated_depth = integrated_analysis['hierarchy_depth']
    
    report.append("🏗️  Hierarchy Depth Comparison:")
    report.append(f"  Standalone:  {standalone_depth} levels")
    report.append(f"  Integrated:  {integrated_depth} levels")
    report.append(f"  Difference:  {integrated_depth - standalone_depth:+d} levels when integrated")
    report.append("")
    
    # Time range comparison
    standalone_time = standalone_analysis['time_range']
    integrated_time = integrated_analysis['time_range']
    
    report.append("⏱️  Simulation Time Comparison:")
    report.append(f"  Standalone:  {standalone_time['start']} - {standalone_time['end']} ns")
    report.append(f"  Integrated:  {integrated_time['start']} - {integrated_time['end']} ns")
    report.append(f"  Duration:    Standalone: {(standalone_time['end'] - standalone_time['start'])/1000:.1f} μs")
    report.append(f"               Integrated: {(integrated_time['end'] - integrated_time['start'])/1000:.1f} μs")
    report.append("")
    
    # Module comparison
    standalone_modules = set(standalone_analysis['modules'])
    integrated_modules = set(integrated_analysis['modules'])
    common_modules = standalone_modules & integrated_modules
    standalone_only = standalone_modules - integrated_modules
    integrated_only = integrated_modules - standalone_modules
    
    report.append("🏛️  Module Hierarchy Comparison:")
    report.append(f"  Common modules:     {len(common_modules)}")
    report.append(f"  Standalone only:    {len(standalone_only)}")
    report.append(f"  Integrated only:    {len(integrated_only)}")
    
    if standalone_only:
        report.append(f"  Standalone unique:  {', '.join(list(standalone_only)[:5])}")
    if integrated_only:
        report.append(f"  Integrated unique:  {', '.join(list(integrated_only)[:5])}")
    report.append("")
    
    # SimpleEdgeAiSoC signal analysis
    report.append("🔍 SimpleEdgeAiSoC Signal Analysis:")
    
    all_categories = set(standalone_analysis['soc_signals'].keys()) | set(integrated_analysis['soc_signals'].keys())
    
    for category in sorted(all_categories):
        standalone_sigs = set(standalone_analysis['soc_signals'].get(category, []))
        integrated_sigs = set(integrated_analysis['soc_signals'].get(category, []))
        
        common_sigs = standalone_sigs & integrated_sigs
        standalone_only_sigs = standalone_sigs - integrated_sigs
        integrated_only_sigs = integrated_sigs - standalone_sigs
        
        report.append(f"  {category.upper()}:")
        report.append(f"    Common signals:     {len(common_sigs)}")
        report.append(f"    Standalone only:    {len(standalone_only_sigs)}")
        report.append(f"    Integrated only:    {len(integrated_only_sigs)}")
        
        if len(common_sigs) > 0:
            report.append(f"    ✅ Consistent signals: {', '.join(list(common_sigs)[:3])}")
        if len(standalone_only_sigs) > 0:
            report.append(f"    ⚠️  Standalone unique: {', '.join(list(standalone_only_sigs)[:3])}")
        if len(integrated_only_sigs) > 0:
            report.append(f"    ℹ️  Integrated unique: {', '.join(list(integrated_only_sigs)[:3])}")
        report.append("")
    
    # Analysis summary
    report.append("=" * 80)
    report.append("📋 ANALYSIS SUMMARY")
    report.append("=" * 80)
    
    # Determine consistency
    consistency_score = 0
    total_checks = 0
    
    # Check 1: Signal presence consistency
    total_checks += 1
    soc_signal_consistency = True
    for category in ['uart', 'gpio', 'spi', 'accelerator']:
        standalone_sigs = set(standalone_analysis['soc_signals'].get(category, []))
        integrated_sigs = set(integrated_analysis['soc_signals'].get(category, []))
        if len(standalone_sigs & integrated_sigs) == 0 and (len(standalone_sigs) > 0 or len(integrated_sigs) > 0):
            soc_signal_consistency = False
            break
    
    if soc_signal_consistency:
        consistency_score += 1
        report.append("✅ Signal Consistency: GOOD - Key SimpleEdgeAiSoC signals present in both")
    else:
        report.append("❌ Signal Consistency: POOR - Missing key signals in one version")
    
    # Check 2: Timing consistency
    total_checks += 1
    time_diff = abs(standalone_time['end'] - integrated_time['end'])
    if time_diff < 1000:  # Within 1μs
        consistency_score += 1
        report.append("✅ Timing Consistency: GOOD - Similar simulation duration")
    else:
        report.append("⚠️  Timing Consistency: DIFFERENT - Significant timing difference")
    
    # Check 3: Size relationship
    total_checks += 1
    if 10 <= size_diff_pct <= 100:  # Integrated should be 10-100% larger
        consistency_score += 1
        report.append("✅ Size Relationship: EXPECTED - Integrated version appropriately larger")
    elif size_diff_pct < 10:
        report.append("⚠️  Size Relationship: UNEXPECTED - Integrated version not much larger")
    else:
        report.append("❌ Size Relationship: CONCERNING - Integrated version much too large")
    
    # Overall assessment
    consistency_percentage = (consistency_score / total_checks) * 100
    report.append("")
    report.append(f"🎯 Overall Consistency Score: {consistency_score}/{total_checks} ({consistency_percentage:.0f}%)")
    
    if consistency_percentage >= 80:
        report.append("✅ CONCLUSION: Integration is CONSISTENT - SimpleEdgeAiSoC behaves similarly in both configurations")
    elif consistency_percentage >= 60:
        report.append("⚠️  CONCLUSION: Integration has MINOR DIFFERENCES - Review recommended")
    else:
        report.append("❌ CONCLUSION: Integration has SIGNIFICANT DIFFERENCES - Investigation required")
    
    # Recommendations
    report.append("")
    report.append("📝 RECOMMENDATIONS:")
    
    if size_diff_pct > 0:
        report.append("1. ✅ Integrated version is larger as expected (includes ASIC wrapper)")
    else:
        report.append("1. ⚠️  Investigate why integrated version is not larger")
    
    if signal_diff_pct > 0:
        report.append("2. ✅ Integrated version has more signals (ASIC hierarchy)")
    else:
        report.append("2. ⚠️  Check why integrated version doesn't have more signals")
    
    report.append("3. 🔍 Use GTKWave to visually compare key SimpleEdgeAiSoC signals")
    report.append("4. 📊 Verify that SimpleEdgeAiSoC internal behavior is identical")
    report.append("5. ⚡ Check that ASIC wrapper doesn't introduce timing delays")
    
    return "\n".join(report)

def main():
    """Main analysis function"""
    
    # File paths
    standalone_vcd = "standalone_soc_tb.vcd"
    integrated_vcd = "soc_tb.vcd"
    
    print("🔬 SimpleEdgeAiSoC Integration Analysis")
    print("=" * 50)
    print()
    
    # Check if files exist
    if not os.path.exists(standalone_vcd):
        print(f"❌ Error: {standalone_vcd} not found")
        print("   Run the comparison script first to generate both VCD files")
        return 1
    
    if not os.path.exists(integrated_vcd):
        print(f"❌ Error: {integrated_vcd} not found")
        print("   Run: ./run_fixed_sim.sh soc_tb_real 1 0")
        return 1
    
    print(f"📁 Analyzing: {standalone_vcd}")
    standalone_analysis = analyze_vcd_file(standalone_vcd)
    
    print(f"📁 Analyzing: {integrated_vcd}")
    integrated_analysis = analyze_vcd_file(integrated_vcd)
    
    if not standalone_analysis or not integrated_analysis:
        print("❌ Error: Could not analyze VCD files")
        return 1
    
    print("✅ Analysis complete, generating report...")
    print()
    
    # Generate comparison report
    report = compare_analyses(standalone_analysis, integrated_analysis)
    
    # Print report
    print(report)
    
    # Save report to file
    report_file = "soc_integration_comparison_report.txt"
    with open(report_file, 'w') as f:
        f.write(report)
    
    print(f"\n📄 Report saved to: {report_file}")
    
    return 0

if __name__ == "__main__":
    sys.exit(main())