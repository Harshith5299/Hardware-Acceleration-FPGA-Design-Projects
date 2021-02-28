
`timescale 1ns / 1ns

module gm_tutorial1_1_ref_dpi
( 
    input clk,
	input reset,
	input clk_enable,
    

/* Simulink signal name: 'dpi_1' Complex Signal Name: 'cint16_T' */
	/* Simulink signal name: 're' */
	output shortint dpi_1_re ,
	/* Simulink signal name: 'im' */
	output shortint dpi_1_im ,
/* Simulink signal name: 'dpi_2' Complex Signal Name: 'cint16_T' */
	/* Simulink signal name: 're' */
	output shortint dpi_2_re ,
	/* Simulink signal name: 'im' */
	output shortint dpi_2_im ,
/* Simulink signal name: 'dpi_3' Complex Signal Name: 'cint32_T' */
	/* Simulink signal name: 're' */
	output int dpi_3_re ,
	/* Simulink signal name: 'im' */
	output int dpi_3_im 
); 

    parameter loop_factor = 1;
    parameter overclocking_factor = 5;
    reg [63:0] overclocking_counter;

    chandle objhandle=null;

shortint  dpi_1_re_temp;
shortint  dpi_1_im_temp;
shortint  dpi_2_re_temp;
shortint  dpi_2_im_temp;
int  dpi_3_re_temp;
int  dpi_3_im_temp;

    import "DPI-C" function chandle DPI_gm_tutorial1_1_ref_initialize(chandle existhandle);
    import "DPI-C" function void DPI_gm_tutorial1_1_ref_output(input chandle objhandle,
/*Simulink signal name: 're'*/
inout shortint dpi_1_re,
/*Simulink signal name: 'im'*/
inout shortint dpi_1_im,
/*Simulink signal name: 're'*/
inout shortint dpi_2_re,
/*Simulink signal name: 'im'*/
inout shortint dpi_2_im,
/*Simulink signal name: 're'*/
inout int dpi_3_re,
/*Simulink signal name: 'im'*/
inout int dpi_3_im);
    import "DPI-C" function void DPI_gm_tutorial1_1_ref_update(input chandle objhandle);
    

	always @(reset) begin
        objhandle = DPI_gm_tutorial1_1_ref_initialize(objhandle);
        overclocking_counter <= 64'b1;
	end 

	always @(posedge clk) begin 
        if(clk_enable == 1'b1) begin
            if(overclocking_counter==1) begin
                for(int ii=0; ii < loop_factor; ii=ii+1) begin       
                    DPI_gm_tutorial1_1_ref_output(objhandle,
dpi_1_re_temp, dpi_1_im_temp, dpi_2_re_temp, dpi_2_im_temp, dpi_3_re_temp, dpi_3_im_temp);
                    DPI_gm_tutorial1_1_ref_update(objhandle);   
                end
                dpi_1_re <=dpi_1_re_temp;
dpi_1_im <=dpi_1_im_temp;
dpi_2_re <=dpi_2_re_temp;
dpi_2_im <=dpi_2_im_temp;
dpi_3_re <=dpi_3_re_temp;
dpi_3_im <=dpi_3_im_temp;

            end
            if(overclocking_counter == overclocking_factor)
                overclocking_counter <= 64'b1;
            else
                overclocking_counter <= overclocking_counter + 1'b1;
        end
	end

endmodule


