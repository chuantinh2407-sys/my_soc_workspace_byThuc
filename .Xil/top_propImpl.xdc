set_property SRC_FILE_INFO {cfile:/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/counter_demo/constraints/top.xdc rfile:../projects/counter_demo/constraints/top.xdc id:1} [current_design]
set_property src_info {type:XDC file:1 line:20 export:INPUT save:INPUT read:READ} [current_design]
foreach pin $led_pins {
set_property PACKAGE_PIN $pin [get_ports {counter[$i]}]
set_property IOSTANDARD LVCMOS33 [get_ports {counter[$i]}]
incr i
}
