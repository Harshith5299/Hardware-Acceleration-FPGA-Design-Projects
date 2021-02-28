// -------------------------------------------------------------
// 
// File Name: hdl_prj_asic/hdlsrc/tutorial1_1/HDL_Complex_Multiplier_tb.v
// Created: 2021-02-02 16:37:22
// 
// Generated by MATLAB 9.9 and HDL Coder 3.17
// 
// 
// -- -------------------------------------------------------------
// -- Rate and Clocking Details
// -- -------------------------------------------------------------
// Model base rate: 1e-06
// Target subsystem base rate: 1e-06
// 
// 
// Clock Enable  Sample Time
// -- -------------------------------------------------------------
// ce_out        1e-06
// -- -------------------------------------------------------------
// 
// 
// Output Signal                 Clock Enable  Sample Time
// -- -------------------------------------------------------------
// Out1_re                       ce_out        1e-06
// Out1_im                       ce_out        1e-06
// -- -------------------------------------------------------------
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: HDL_Complex_Multiplier_tb
// Source Path: 
// Hierarchy Level: 0
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module HDL_Complex_Multiplier_tb;



  reg  clk;
  reg  reset;
  wire clk_enable;
  wire Out1_re_done;  // ufix1
  wire rdEnb;
  wire Out1_re_done_enb;  // ufix1
  reg [5:0] Out1_re_addr;  // ufix6
  wire Out1_re_active;  // ufix1
  wire [5:0] From_Workspace1_out1_addr_delay;  // ufix6
  reg  tb_enb_delay;
  reg signed [31:0] fp_In2_im;  // sfix32
  reg signed [11:0] rawData_In2_im;  // sfix12_En8
  reg signed [31:0] status_In2_im;  // sfix32
  reg signed [11:0] holdData_In2_im;  // sfix12_En8
  reg signed [11:0] In2_im_offset;  // sfix12_En8
  wire signed [11:0] In2_im;  // sfix12_En8
  reg [5:0] From_Workspace_out1_addr;  // ufix6
  reg signed [31:0] fp_In2_re;  // sfix32
  reg signed [11:0] rawData_In2_re;  // sfix12_En8
  reg signed [31:0] status_In2_re;  // sfix32
  reg signed [11:0] holdData_In2_re;  // sfix12_En8
  reg signed [11:0] In2_re_offset;  // sfix12_En8
  wire signed [11:0] In2_re;  // sfix12_En8
  wire [5:0] From_Workspace_out1_addr_delay;  // ufix6
  reg signed [31:0] fp_In1_im;  // sfix32
  reg signed [11:0] rawData_In1_im;  // sfix12_En8
  reg signed [31:0] status_In1_im;  // sfix32
  reg signed [11:0] holdData_In1_im;  // sfix12_En8
  reg signed [11:0] In1_im_offset;  // sfix12_En8
  wire signed [11:0] In1_im;  // sfix12_En8
  wire From_Workspace_out1_active;  // ufix1
  wire From_Workspace_out1_enb;  // ufix1
  reg signed [31:0] fp_In1_re;  // sfix32
  reg signed [11:0] rawData_In1_re;  // sfix12_En8
  reg signed [31:0] status_In1_re;  // sfix32
  reg signed [11:0] holdData_In1_re;  // sfix12_En8
  reg signed [11:0] In1_re_offset;  // sfix12_En8
  wire signed [11:0] In1_re;  // sfix12_En8
  reg  check1_done;  // ufix1
  wire snkDonen;
  wire resetn;
  wire tb_enb;
  wire ce_out;
  wire signed [24:0] Out1_re;  // sfix25_En16
  wire signed [24:0] Out1_im;  // sfix25_En16
  wire Out1_re_enb;  // ufix1
  wire Out1_re_lastAddr;  // ufix1
  wire [5:0] Out1_re_addr_delay_1;  // ufix6
  reg signed [31:0] fp_Out1_re_expected;  // sfix32
  reg signed [24:0] Out1_re_expected;  // sfix25_En16
  reg signed [31:0] status_Out1_re_expected;  // sfix32
  wire signed [24:0] Out1_re_ref;  // sfix25_En16
  reg  Out1_re_testFailure;  // ufix1
  reg signed [31:0] fp_Out1_im_expected;  // sfix32
  reg signed [24:0] Out1_im_expected;  // sfix25_En16
  reg signed [31:0] status_Out1_im_expected;  // sfix32
  wire signed [24:0] Out1_im_ref;  // sfix25_En16
  reg  Out1_im_testFailure;  // ufix1
  wire testFailure;  // ufix1


  assign Out1_re_done_enb = Out1_re_done & rdEnb;



  assign Out1_re_active = Out1_re_addr != 6'b110101;



  // Data source for In2_im
  initial
    begin : In2_im_fileread
      fp_In2_im = $fopen("In2_im.dat", "r");
      status_In2_im = $rewind(fp_In2_im);
    end

  always @(From_Workspace1_out1_addr_delay, rdEnb, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        rawData_In2_im <= 12'bx;
      end
      else if (rdEnb == 1) begin
        status_In2_im = $fscanf(fp_In2_im, "%h", rawData_In2_im);
      end
    end

  // holdData reg for From_Workspace1_out1
  always @(posedge clk)
    begin : stimuli_From_Workspace1_out1
      if (reset) begin
        holdData_In2_im <= 12'bx;
      end
      else begin
        holdData_In2_im <= rawData_In2_im;
      end
    end

  always @(rawData_In2_im or rdEnb)
    begin : stimuli_From_Workspace1_out1_1
      if (rdEnb == 1'b0) begin
        In2_im_offset <= holdData_In2_im;
      end
      else begin
        In2_im_offset <= rawData_In2_im;
      end
    end

  assign #2 In2_im = In2_im_offset;

  assign #1 From_Workspace1_out1_addr_delay = From_Workspace_out1_addr;

  // Data source for In2_re
  initial
    begin : In2_re_fileread
      fp_In2_re = $fopen("In2_re.dat", "r");
      status_In2_re = $rewind(fp_In2_re);
    end

  always @(From_Workspace1_out1_addr_delay, rdEnb, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        rawData_In2_re <= 12'bx;
      end
      else if (rdEnb == 1) begin
        status_In2_re = $fscanf(fp_In2_re, "%h", rawData_In2_re);
      end
    end

  // holdData reg for From_Workspace1_out1
  always @(posedge clk)
    begin : stimuli_From_Workspace1_out1_2
      if (reset) begin
        holdData_In2_re <= 12'bx;
      end
      else begin
        holdData_In2_re <= rawData_In2_re;
      end
    end

  always @(rawData_In2_re or rdEnb)
    begin : stimuli_From_Workspace1_out1_3
      if (rdEnb == 1'b0) begin
        In2_re_offset <= holdData_In2_re;
      end
      else begin
        In2_re_offset <= rawData_In2_re;
      end
    end

  assign #2 In2_re = In2_re_offset;

  // Data source for In1_im
  initial
    begin : In1_im_fileread
      fp_In1_im = $fopen("In1_im.dat", "r");
      status_In1_im = $rewind(fp_In1_im);
    end

  always @(From_Workspace_out1_addr_delay, rdEnb, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        rawData_In1_im <= 12'bx;
      end
      else if (rdEnb == 1) begin
        status_In1_im = $fscanf(fp_In1_im, "%h", rawData_In1_im);
      end
    end

  // holdData reg for From_Workspace_out1
  always @(posedge clk)
    begin : stimuli_From_Workspace_out1
      if (reset) begin
        holdData_In1_im <= 12'bx;
      end
      else begin
        holdData_In1_im <= rawData_In1_im;
      end
    end

  always @(rawData_In1_im or rdEnb)
    begin : stimuli_From_Workspace_out1_1
      if (rdEnb == 1'b0) begin
        In1_im_offset <= holdData_In1_im;
      end
      else begin
        In1_im_offset <= rawData_In1_im;
      end
    end

  assign #2 In1_im = In1_im_offset;

  assign From_Workspace_out1_active = From_Workspace_out1_addr != 6'b110101;



  assign From_Workspace_out1_enb = From_Workspace_out1_active & (rdEnb & tb_enb_delay);



  // Count limited, Unsigned Counter
  //  initial value   = 0
  //  step value      = 1
  //  count to value  = 53
  always @(posedge clk)
    begin : FromWorkspace_process
      if (reset == 1'b1) begin
        From_Workspace_out1_addr <= 6'b000000;
      end
      else begin
        if (From_Workspace_out1_enb) begin
          if (From_Workspace_out1_addr >= 6'b110101) begin
            From_Workspace_out1_addr <= 6'b000000;
          end
          else begin
            From_Workspace_out1_addr <= From_Workspace_out1_addr + 6'b000001;
          end
        end
      end
    end



  assign #1 From_Workspace_out1_addr_delay = From_Workspace_out1_addr;

  // Data source for In1_re
  initial
    begin : In1_re_fileread
      fp_In1_re = $fopen("In1_re.dat", "r");
      status_In1_re = $rewind(fp_In1_re);
    end

  always @(From_Workspace_out1_addr_delay, rdEnb, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        rawData_In1_re <= 12'bx;
      end
      else if (rdEnb == 1) begin
        status_In1_re = $fscanf(fp_In1_re, "%h", rawData_In1_re);
      end
    end

  // holdData reg for From_Workspace_out1
  always @(posedge clk)
    begin : stimuli_From_Workspace_out1_2
      if (reset) begin
        holdData_In1_re <= 12'bx;
      end
      else begin
        holdData_In1_re <= rawData_In1_re;
      end
    end

  always @(rawData_In1_re or rdEnb)
    begin : stimuli_From_Workspace_out1_3
      if (rdEnb == 1'b0) begin
        In1_re_offset <= holdData_In1_re;
      end
      else begin
        In1_re_offset <= rawData_In1_re;
      end
    end

  assign #2 In1_re = In1_re_offset;

  assign snkDonen =  ~ check1_done;



  assign resetn =  ~ reset;



  assign tb_enb = resetn & snkDonen;



  // Delay inside enable generation: register depth 1
  always @(posedge clk)
    begin : u_enable_delay
      if (reset) begin
        tb_enb_delay <= 0;
      end
      else begin
        tb_enb_delay <= tb_enb;
      end
    end

  assign rdEnb = (check1_done == 1'b0 ? tb_enb_delay :
              1'b0);



  assign #2 clk_enable = rdEnb;

  initial
    begin : reset_gen
      reset <= 1'b1;
      # (20);
      @ (posedge clk)
      # (2);
      reset <= 1'b0;
    end

  always 
    begin : clk_gen
      clk <= 1'b1;
      # (5);
      clk <= 1'b0;
      # (5);
      if (check1_done == 1'b1) begin
        clk <= 1'b1;
        # (5);
        clk <= 1'b0;
        # (5);
        $stop;
      end
    end

  HDL_Complex_Multiplier u_HDL_Complex_Multiplier (.clk(clk),
                                                   .reset(reset),
                                                   .clk_enable(clk_enable),
                                                   .In1_re(In1_re),  // sfix12_En8
                                                   .In1_im(In1_im),  // sfix12_En8
                                                   .In2_re(In2_re),  // sfix12_En8
                                                   .In2_im(In2_im),  // sfix12_En8
                                                   .ce_out(ce_out),
                                                   .Out1_re(Out1_re),  // sfix25_En16
                                                   .Out1_im(Out1_im)  // sfix25_En16
                                                   );

  assign Out1_re_enb = ce_out & Out1_re_active;



  // Count limited, Unsigned Counter
  //  initial value   = 0
  //  step value      = 1
  //  count to value  = 53
  always @(posedge clk)
    begin : c_2_process
      if (reset == 1'b1) begin
        Out1_re_addr <= 6'b000000;
      end
      else begin
        if (Out1_re_enb) begin
          if (Out1_re_addr >= 6'b110101) begin
            Out1_re_addr <= 6'b000000;
          end
          else begin
            Out1_re_addr <= Out1_re_addr + 6'b000001;
          end
        end
      end
    end



  assign Out1_re_lastAddr = Out1_re_addr >= 6'b110101;



  assign Out1_re_done = Out1_re_lastAddr & resetn;



  // Delay to allow last sim cycle to complete
  always @(posedge clk)
    begin : checkDone_1
      if (reset) begin
        check1_done <= 0;
      end
      else begin
        if (Out1_re_done_enb) begin
          check1_done <= Out1_re_done;
        end
      end
    end

  assign #1 Out1_re_addr_delay_1 = Out1_re_addr;

  // Data source for Out1_re_expected
  initial
    begin : Out1_re_expected_fileread
      fp_Out1_re_expected = $fopen("Out1_re_expected.dat", "r");
      status_Out1_re_expected = $rewind(fp_Out1_re_expected);
    end

  always @(Out1_re_addr_delay_1, ce_out, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        Out1_re_expected <= 25'bx;
      end
      else if (ce_out == 1) begin
        status_Out1_re_expected = $fscanf(fp_Out1_re_expected, "%h", Out1_re_expected);
      end
    end

  assign Out1_re_ref = Out1_re_expected;

  always @(posedge clk)
    begin : Out1_re_checker
      if (reset == 1'b1) begin
        Out1_re_testFailure <= 1'b0;
      end
      else begin
        if (ce_out == 1'b1 && Out1_re !== Out1_re_ref) begin
          Out1_re_testFailure <= 1'b1;
          $display("ERROR in Out1_re at time %t : Expected '%h' Actual '%h'", $time, Out1_re_ref, Out1_re);
        end
      end
    end

  // Data source for Out1_im_expected
  initial
    begin : Out1_im_expected_fileread
      fp_Out1_im_expected = $fopen("Out1_im_expected.dat", "r");
      status_Out1_im_expected = $rewind(fp_Out1_im_expected);
    end

  always @(Out1_re_addr_delay_1, ce_out, tb_enb_delay)
    begin
      if (tb_enb_delay == 0) begin
        Out1_im_expected <= 25'bx;
      end
      else if (ce_out == 1) begin
        status_Out1_im_expected = $fscanf(fp_Out1_im_expected, "%h", Out1_im_expected);
      end
    end

  assign Out1_im_ref = Out1_im_expected;

  always @(posedge clk)
    begin : Out1_im_checker
      if (reset == 1'b1) begin
        Out1_im_testFailure <= 1'b0;
      end
      else begin
        if (ce_out == 1'b1 && Out1_im !== Out1_im_ref) begin
          Out1_im_testFailure <= 1'b1;
          $display("ERROR in Out1_im at time %t : Expected '%h' Actual '%h'", $time, Out1_im_ref, Out1_im);
        end
      end
    end

  assign testFailure = Out1_re_testFailure | Out1_im_testFailure;



  always @(posedge clk)
    begin : completed_msg
      if (check1_done == 1'b1) begin
        if (testFailure == 1'b0) begin
          $display("**************TEST COMPLETED (PASSED)**************");
        end
        else begin
          $display("**************TEST COMPLETED (FAILED)**************");
        end
      end
    end

endmodule  // HDL_Complex_Multiplier_tb

