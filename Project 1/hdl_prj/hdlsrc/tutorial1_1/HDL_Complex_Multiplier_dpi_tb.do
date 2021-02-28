vlib work
vlog HDL_Complex_Multiplier.v -work work
vlog -dpicopyopt 0 -sv gm_tutorial1_1_ref_dpi.sv
vlog -sv HDL_Complex_Multiplier_dpi_tb.sv
vsim -voptargs=+acc -L work  -sv_lib gm_tutorial1_1_ref_win64 work.HDL_Complex_Multiplier_dpi_tb
add wave /*
run -all
