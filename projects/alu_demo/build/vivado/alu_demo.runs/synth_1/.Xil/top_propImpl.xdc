set_property SRC_FILE_INFO {cfile:/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/alu_demo/constraints/top.xdc rfile:../../../../../constraints/top.xdc id:1} [current_design]
set_property src_info {type:XDC file:1 line:11 export:INPUT save:INPUT read:READ} [current_design]
set_output_delay -clock [get_clocks sys_clk] 1.000 [get_ports {counter[*]}]
set_property src_info {type:XDC file:1 line:12 export:INPUT save:INPUT read:READ} [current_design]
set_property PACKAGE_PIN E3 [get_ports {clk}]
set_property src_info {type:XDC file:1 line:13 export:INPUT save:INPUT read:READ} [current_design]
set_property IOSTANDARD LVCMOS33 [get_ports {clk}]
set_property src_info {type:XDC file:1 line:14 export:INPUT save:INPUT read:READ} [current_design]
create_clock -add -name sys_clk -period 10.00 -waveform {0 5} [get_ports {clk}]
set_property src_info {type:XDC file:1 line:21 export:INPUT save:INPUT read:READ} [current_design]
foreach pin $led_pins {
set_property PACKAGE_PIN $pin [get_ports {counter[$i]}]
set_property IOSTANDARD LVCMOS33 [get_ports {counter[$i]}]
incr i
}
