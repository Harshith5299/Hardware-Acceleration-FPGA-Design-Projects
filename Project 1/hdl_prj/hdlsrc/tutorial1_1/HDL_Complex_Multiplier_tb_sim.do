onbreak resume
onerror resume
vsim -voptargs=+acc work.HDL_Complex_Multiplier_tb

add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/clk
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/reset
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/clk_enable
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In1_re
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In1_im
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In2_re
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/In2_im
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/ce_out
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/Out1_re
add wave sim:/HDL_Complex_Multiplier_tb/Out1_re_ref
add wave sim:/HDL_Complex_Multiplier_tb/u_HDL_Complex_Multiplier/Out1_im
add wave sim:/HDL_Complex_Multiplier_tb/Out1_im_ref
run -all
