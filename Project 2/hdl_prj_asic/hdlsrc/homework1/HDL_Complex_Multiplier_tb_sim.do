onbreak resume
onerror resume
vsim -voptargs=+acc work.HDL_Complex_Multiplier_tb

add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/clk
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/reset
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/clk_enable
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In1
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In2
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In3
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/ce_out
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/Out1
add wave sim:/HDL_Complex_Multiplier_tb/Out1_ref
run -all
