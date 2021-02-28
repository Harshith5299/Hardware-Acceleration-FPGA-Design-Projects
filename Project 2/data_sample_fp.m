%% Create Input Data Samples
clc;
clear all;

input_sample_freq = 20e6; % Input Sampling Frequency is 20 MHz
sample_time = 1 / input_sample_freq; % 1us
num_sample = 50;
delay = 4; % cycle
simulation_stop_time = sample_time * (num_sample-1 + delay);

time = [0:num_sample-1] * sample_time;

%fixed point data length
WordLength = 64;
FractionLength = 0;
Sign = 1;

%create real and imaginary array for data1
real_sample1 = fi(randi([0,100],num_sample,1), Sign, WordLength, FractionLength);

%create complex numbers
value1 = real_sample1;

%assign value to signal data1
data1.time=time;
data1.signals.values = value1;
data1.signals.dimensions = 1;    

%create real and imaginary array for data2
real_sample2 = fi(randi([0,100],num_sample,1), Sign, WordLength, FractionLength);


%create complex numbers
value2 = real_sample2;

%assign value to signal data2
data2.time=time;
data2.signals.values = value2;
data2.signals.dimensions = 1;

%assign value to signal data3
real_sample3 = fi(randi([0,8],num_sample,1), 0, 3, 0);
value3 = real_sample3;
data3.time=time;
data3.signals.values = value3;
data3.signals.dimensions = 1;

%% Verify the results against the SW Simulink reference model

tf = isequal(out.hw_out.signals.values, out.sw_out.signals.values)

if (tf==1)
    disp('Functional Verification is Successful. ^_^');
else
    disp('Functional Verification is Failed. x_x');
end

%% Verify the results against the MATLAB reference model

output = zeros(num_sample,1);
for i= 1:num_sample
    f = data3.signals.values(i);
    a = data1.signals.values(i);
    b = data2.signals.values(i);

    
    switch(f)
        case 0
            output(i) = bitand(a,b);
        case 1
            output(i) = bitor(a,b);
        case 2
            output(i) = a+b;
        case 3
            output(i) =0;
        case 4
            output(i) = bitand(a,bitcmp(b));
        case 5
            output(i) = bitor(a,bitcmp(b));
        case 6
            output(i) = a-b;
        case 7
            if a<b
                output(i) =1;
            else
                output(i) =0;
            end
    end
           
end
tf = isequal(double(out.hw_out.signals.values(3:num_sample+2)), output(1:num_sample));  
if (tf==1)
    disp('Functional Verification is Successful. ^_^');
else
    disp('Functional Verification is Failed. x_x');
end


%% Set up Vivado


hdlsetuptoolpath('ToolName', 'Xilinx Vivado','ToolPath','C:/Xilinx/Vivado/2019.2/bin/vivado.bat');