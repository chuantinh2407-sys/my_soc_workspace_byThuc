# PROGRAM.TCL - Dynamic FPGA Programming Script
# Usage: vivado -mode batch -source program.tcl -tclargs <project_name>

set project_name [lindex $argv 0]

# Connect to hardware
open_hw_manager
connect_hw_server -url localhost:3121
current_hw_target [get_hw_targets */xilinx_tcf/Digilent/*]
set_hw_target [current_hw_target]
open_hw_target
current_hw_device [get_hw_devices xc7a100t_0]

# Program FPGA using the dynamic path
# This assumes your bitstream is at: projects/<project_name>/build/vivado/<project_name>.runs/impl_1/top.bit
set bitstream_path "./projects/$project_name/build/vivado/$project_name.runs/impl_1/top.bit"

puts "INFO: Programming with bitstream: $bitstream_path"

set_property PROGRAM.FILE $bitstream_path [get_hw_devices xc7a100t_0]
program_hw_devices [get_hw_devices xc7a100t_0]
refresh_hw_device [get_hw_devices xc7a100t_0]

puts "INFO: Programming complete."