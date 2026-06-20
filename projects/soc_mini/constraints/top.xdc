# --- Clock Signal ---
# Thay đổi số chân và tên chân theo board của bạn
set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 10.000 -name sys_clk -waveform {0.000 5.000} [get_ports clk]

# --- Reset Signal (Thường là một nút nhấn) ---
set_property PACKAGE_PIN C12 [get_ports resetn]
set_property IOSTANDARD LVCMOS33 [get_ports resetn]

# --- UART Pins ---
set_property PACKAGE_PIN D10 [get_ports tx]
set_property IOSTANDARD LVCMOS33 [get_ports tx]
set_property PACKAGE_PIN A9  [get_ports rx]
set_property IOSTANDARD LVCMOS33 [get_ports rx]

# --- SPI Flash Pins ---
set_property PACKAGE_PIN L13 [get_ports flash_csn]
set_property IOSTANDARD LVCMOS33 [get_ports flash_csn]
set_property PACKAGE_PIN K17 [get_ports flash_mosi]
set_property IOSTANDARD LVCMOS33 [get_ports flash_mosi]
set_property PACKAGE_PIN K18 [get_ports flash_miso]
set_property IOSTANDARD LVCMOS33 [get_ports flash_miso]
set_property PACKAGE_PIN L16 [get_ports flash_clk]
set_property IOSTANDARD LVCMOS33 [get_ports flash_clk]