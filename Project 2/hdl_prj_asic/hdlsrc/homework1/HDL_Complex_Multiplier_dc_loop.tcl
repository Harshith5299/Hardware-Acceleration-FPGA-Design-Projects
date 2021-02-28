
# Clear cache
remove_design -all

# Define global variables
# Make sure $DESIGN_NAME is the top-level module name
set DESIGN_NAME HDL_Complex_Multiplier
set REPORTS_DIR reports
set RESULTS_DIR results

# Define design specific variables
set with_minPower 0
set with_lowPower 0
set with_saifAnnotations 0
#ultra flow mandatory for min power library
set use_compile_ultra 1
set hdlin_keep_signal_name user



# Create the require directory structure
file mkdir $REPORTS_DIR
file mkdir $RESULTS_DIR
#source the user specified dc_setup file
source "/afs/asu.edu/users/h/c/h/hchittaj/DC_Setup/DC_setup_28nm_1v.setup"
set hdlin_vrlg_std "2001"

set clist {1.155 1.21 1.265 1.32 1.375 1.43 1.54 1.65 1.925 2.2 5.5 11 110 1100}

for {set x 0} {$x <=14} {incr x} {

set cl [lindex $clist $x]

# Read in the generated HDL code of your top-level design
analyze -format verilog ${DESIGN_NAME}.v

# When multiple Verilog files are gnereated, make sure to load 
# all of them one by one. 
#analyze -format verilog [sub_module_name_1].v
#analyze -format verilog [sub_module_name_2].v
#analyze -format verilog [sub_module_name_3].v



elaborate ${DESIGN_NAME}

current_design ${DESIGN_NAME}

# Post Elaborate analysis
write -hierarchy -format ddc -output ${RESULTS_DIR}/${DESIGN_NAME}.elab.ddc

create_clock -name clk -period $cl clk

# Read in constraint file
#read_sdc ${DESIGN_NAME}_dc.sdc
if {$with_minPower == 1} {
	set synlibs {dw_foundation.sldb dw_minpower.sldb}
	# set up library variables
	set synthetic_library $synlibs
}

if {$with_lowPower == 1} {
	# Low power optimizations default options
	set_leakage_optimization true
	set_dynamic_optimization true
	set_max_area 0
	set compile_clock_gating_through_hierarchy true
	set power_driven_clock_gating true
	if {$with_minPower == 1} {
		set power_enable_datapath_gating true
	}
}

# Read and annotate activity data if available
if {$with_saifAnnotations == 1} {
	saif_map -start
	read_saif -auto_map_names -input ${DESIGN_NAME}.saif -instance test_${DESIGN_NAME}/i_${DESIGN_NAME} -verbose
}

# You can uncomment the lines below to use them.
#link 
#check_design > ${DESIGN_NAME}_check_design.log


#ungroup -flatten -all
# flatten it all, this forces all the hierarchy to be flattened out
#set_flatten true -effort high
#uniquify 


# This forces the compiler to spend as much effort (and time) 
# compiling this RTL to achieve timing possible. 
if {$use_compile_ultra == 1} {
	if {$with_lowPower == 1} {
		compile_ultra -gate_clock
	} else {
		compile_ultra
	}
} else {
	if {$with_lowPower == 1} {
		compile -map_effort medium -area_effort medium -gate_clock
	} else {
		compile -map_effort medium -area_effort medium
	}
}
# Now that the compile is complete report on the results 
report_area > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.area.rpt
report_timing > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.timing.rpt
report_qor > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.qor.rpt
report_power > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.power.rpt
report_clock_gating > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.clock_gating.rpt
report_saif -hier -rtl_saif -missing > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.saif.rpt
report_threshold_voltage_group > ${REPORTS_DIR}/${DESIGN_NAME}_$cl.mapped.vth.rpt

# Write the optimized and compiled design. This can be used for further optimizations. 
write -hierarchy -format ddc  ${DESIGN_NAME} -output ${RESULTS_DIR}/${DESIGN_NAME}.mapped.ddc

# Finally write the post synthesis netlist out to a verilog file 
write -f verilog  ${DESIGN_NAME} -output ${RESULTS_DIR}/${DESIGN_NAME}_post_synth.v -hierarchy

}
