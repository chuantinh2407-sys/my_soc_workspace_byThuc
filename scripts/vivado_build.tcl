# ==============================================================================
# Vivado Implementation Script
# Purpose: Automated FPGA flow with robust path management
# ==============================================================================

# 1. Project Initialization
set project_name [lindex $argv 0]
if {$project_name == ""} {
    puts "ERROR: Project name is required!"
    exit 1
}

# Use the location of this script to determine the absolute workspace root
set script_path [file normalize [info script]]
set workspace_root [file dirname [file dirname $script_path]]

set proj_dir [file normalize "$workspace_root/projects/$project_name"]
set build_dir [file normalize "$proj_dir/build/vivado"]
set target_part "xc7a35tcsg324-1"

puts "INFO: Workspace root: $workspace_root"
puts "INFO: Project directory: $proj_dir"

# Initialize Vivado project
file mkdir $build_dir
create_project -force $project_name $build_dir -part $target_part

# --- TỰ ĐỘNG COPY FIRMWARE VÀO THƯ MỤC BUILD ---
set firmware_path [file normalize "$workspace_root/software/firmware/firmware.hex"]
if {[file exists $firmware_path]} {
    file copy -force $firmware_path $build_dir
    puts "INFO: Firmware copied successfully to $build_dir"
} else {
    puts "WARNING: Firmware file not found at $firmware_path! System may not boot."
}
# ----------------------------------------------

# 2. Add Source Files
set compile_file [file normalize "$proj_dir/compile.f"]

if {[file exists $compile_file]} {
    set fp [open $compile_file r]
    set file_list [list]
    
    while {[gets $fp line] >= 0} {
        set line [string trim $line]
        # Ignore comments and control directives
        if {$line == "" || [string match "#*" $line] || [string match "+*" $line]} continue
        
        # Resolve absolute path for files defined in compile.f
        set abs_file_path [file normalize "$proj_dir/$line"]
        
        if {[file exists $abs_file_path]} {
            lappend file_list $abs_file_path
        } else {
            puts "WARNING: Source file missing: $abs_file_path"
        }
    }
    close $fp


    if {[llength $file_list] > 0} {
        add_files $file_list
        update_compile_order -fileset sources_1
    } else {
        puts "ERROR: No valid source files found!"
        exit 1
    }
} else {
    puts "ERROR: $compile_file not found at $compile_file"
    exit 1
}

# 3. Add Constraints
set xdc_files [glob -nocomplain [file normalize "$proj_dir/constraints/*.xdc"]]
if {[llength $xdc_files] > 0} {
    add_files -fileset constrs_1 $xdc_files
}

# 4. Synthesis & Implementation
set_param general.maxThreads 8

puts "INFO: Running Synthesis..."
launch_runs synth_1 -jobs 8
wait_on_run synth_1

puts "INFO: Running Implementation..."
launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1

# 5. Final Status
if {[get_property PROGRESS [get_runs impl_1]] == "100%"} {
    puts "SUCCESS: Bitstream created in $build_dir"
} else {
    puts "ERROR: Build failed."
    exit 1
}