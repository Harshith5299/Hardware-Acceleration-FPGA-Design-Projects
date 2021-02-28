for i = 1:4
    figure(i)
    filename = num2str(i,'graph%i.xlsx');
    data =  xlsread(filename);
    
    Energy = data(:,1).*data(:,3);
    referenceDynmaic = 1231.2*1.1; % 1231.2 uW*1.1 ns
    EnergyNormalized = Energy/referenceDynmaic;
    
    leakageEnergy = data(:,4).*(data(:,1)-data(:,2));
    referenceLeakage = 208.3129*1.1; % uW*ns
    leakedEnergyNormalized =  leakageEnergy/referenceLeakage;
    
    x = data(:,1);
    y = [EnergyNormalized, leakedEnergyNormalized];
    b = bar(y,'stacked');
    labels = num2str(x);
    
    xticklabels(labels)
    xlabel('delay constraint (ns)')
    ylabel('Total Energy (normalized)')
    
    filename = num2str(i,'graph%i.emf');
    saveas(gcf,filename,'meta')

    figure(5)
    c = semilogx(x/1.1, leakedEnergyNormalized+EnergyNormalized, 'linewidth', 2);
    xlabel('delay constraint (ns)')
    ylabel('Total Energy (normalized)')
    hold on
    
end
hold off
title('Energy Delay Curves')
l = legend('1V_{rvt}'...
    ,'(1V  | 0.85V  | 0.75V)_{rvt} '...
    ,'1V_{rvt+hvt+lvt}'...
    ,'(1V | 0.85V | 0.75V)_{rvt+hvt+lvt}'...
    ,'Location','eastoutside');
title(l,"Voltage Thresholds VDD")
set(gca,'FontSize',20)
grid on
    filename = num2str(5,'graph%i.emf');
    saveas(gcf,filename,'meta')