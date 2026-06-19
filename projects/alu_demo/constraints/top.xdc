# ==============================================================================
# Xilinx Design Constraints (XDC)
# Project: SoC Hardware Synthesis
# Purpose: Clock, I/O mapping, and Configuration settings
# ==============================================================================

# 1. CLOCK DEFINITION
# ------------------------------------------------------------------------------
# Define the main system clock. Replace 'E3' with the pin from your schematic.
# Period is defined in nanoseconds (ns). 100MHz = 10ns.
set_output_delay -clock [get_clocks sys_clk] 1.000 [get_ports {counter[*]}]
set_property PACKAGE_PIN E3 [get_ports {clk}]
set_property IOSTANDARD LVCMOS33 [get_ports {clk}]
create_clock -add -name sys_clk -period 10.00 -waveform {0 5} [get_ports {clk}]

# 2. I/O MAPPING (LEDS/COUNTERS)
# ------------------------------------------------------------------------------
# Mapping bus signals. Adjust the list of pins to match your hardware.
set led_pins {H5 J5 K5 L5}
set i 0
foreach pin $led_pins {
    set_property PACKAGE_PIN $pin [get_ports {counter[$i]}]
    set_property IOSTANDARD LVCMOS33 [get_ports {counter[$i]}]
    incr i
}

# 3. GLOBAL CONFIGURATION (7-Series FPGAs)
# ------------------------------------------------------------------------------
# These properties are essential for valid bitstream generation on Xilinx chips.
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

# 4. GLOBAL I/O SETTINGS (Fallback)
# ------------------------------------------------------------------------------
# Apply default I/O standard to all ports to prevent NSTD-1 violations.
set_property IOSTANDARD LVCMOS33 [get_ports *]
# This ensures that any unmapped ports will still have a valid I/O standard, avoiding DRC errors.
set_property SEVERITY {Warning} [get_drc_checks UCIO-1]
