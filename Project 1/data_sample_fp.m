%% Create Input Data Samples
clc;
clear all;

input_sample_freq = 1e6; % Input Sampling Frequency is 1 MHz
sample_time = 1 / input_sample_freq; % 1us
num_sample = 50;
delay = 4; % cycle
simulation_stop_time = sample_time * (num_sample-1 + delay);

time = [0:num_sample-1] * sample_time;

%fixed point data length
WordLength = 12;
FractionLength = 8;
Sign = 1;

%create real and imaginary array for data1
real_sample1 = fi(rand(num_sample,1), Sign, WordLength, FractionLength);
img_sample1 = fi(rand(num_sample,1),Sign, WordLength, FractionLength);

%create complex numbers
value1 = complex(real_sample1, img_sample1);

%assign value to signal data1
data1.time=time;
data1.signals.values = value1;
data1.signals.dimensions = 1;

%create real and imaginary array for data2
real_sample2 = fi(rand(num_sample,1), Sign, WordLength, FractionLength);
img_sample2 = fi(rand(num_sample,1), Sign, WordLength, FractionLength);

%create complex numbers
value2 = complex(real_sample2, img_sample2);

%assign value to signal data2
data2.time=time;
data2.signals.values = value2;
data2.signals.dimensions = 1;

%% Verify the results against the SW Simulink reference model

tf = isequal(out.hw_out.signals.values, out.sw_out.signals.values)

if (tf==1)
    disp('Functional Verification is Successful. ^_^');
else
    disp('Functional Verification is Failed. x_x');
end

%% Verify the results against the MATLAB reference model

result = (value1 .* value2);
error = double(out.hw_out.signals.values([1:num_sample] + delay) - result);
mse = norm(error) / num_sample;

if (mse==0)
    disp('Functional Verification is Successful. ^_^');
else
    disp('Functional Verification is Failed. x_x');
end

%% Set up Vivado


hdlsetuptoolpath('ToolName', 'Xilinx Vivado','ToolPath','C:/Xilinx/Vivado/2020.2/bin/vivado.bat');