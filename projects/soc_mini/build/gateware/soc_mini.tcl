
# Create Project

create_project -force -name soc_mini -part xc7a35t-csg324-1
set_msg_config -id {Common 17-55} -new_severity {Warning}

# Add project commands


# Add Sources

read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/venv/lib/python3.12/site-packages/pythondata_cpu_picorv32/verilog/picorv32.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/rtl/veri/spimemio.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/rtl/veri/spiflash.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/rtl/veri/simpleuart.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/rtl/veri/picorv32.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/rtl/veri/picosoc_mem.v}
read_verilog {/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/build/gateware/soc_mini.v}

# Add EDIFs


# Add IPs


# Add constraints

read_xdc soc_mini.xdc
set_property PROCESSING_ORDER EARLY [get_files soc_mini.xdc]

# Add pre-synthesis commands


# Synthesis

synth_design -directive default -top soc_mini -part xc7a35t-csg324-1

# Synthesis report

report_timing_summary -file soc_mini_timing_synth.rpt
report_utilization -hierarchical -file soc_mini_utilization_hierarchical_synth.rpt
report_utilization -file soc_mini_utilization_synth.rpt
write_checkpoint -force soc_mini_synth.dcp

# Add pre-optimize commands


# Optimize design

opt_design -directive default

# Add pre-placement commands


# Placement

place_design -directive default

# Placement report

report_utilization -hierarchical -file soc_mini_utilization_hierarchical_place.rpt
report_utilization -file soc_mini_utilization_place.rpt
report_io -file soc_mini_io.rpt
report_control_sets -verbose -file soc_mini_control_sets.rpt
report_clock_utilization -file soc_mini_clock_utilization.rpt
write_checkpoint -force soc_mini_place.dcp

# Add pre-routing commands


# Routing

route_design -directive default
phys_opt_design -directive default
write_checkpoint -force soc_mini_route.dcp

# Routing report

report_timing_summary -no_header -no_detailed_paths
report_route_status -file soc_mini_route_status.rpt
report_drc -file soc_mini_drc.rpt
report_timing_summary -datasheet -max_paths 10 -file soc_mini_timing.rpt
report_power -file soc_mini_power.rpt

# Bitstream generation

write_bitstream -force soc_mini.bit 

# End

quit