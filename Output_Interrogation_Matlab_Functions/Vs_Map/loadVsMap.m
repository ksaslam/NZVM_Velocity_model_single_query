function plotVsMap
close all
folderName = 'v1.65';
% type = 'Vs_500';
 type = 'Vs_30';
fileName = sprintf('%s/Vs/%s.txt',folderName,type);

map = loadMap(fileName);
markerSize = 1;
F1 = figure(1);
hold on;
scatter(map.Lon,map.Lat,markerSize,map.Vs)
[NZcoastLat,NZcoastLong]=NZCoastlineData;
plot(NZcoastLong,NZcoastLat,'LineWidth',0.5)
axisLimits = [165 176 -48 -38];
axis(axisLimits)

c1 = colorbar;
ylabel(c1,sprintf('%s(km/s)','Vs'));
set(c1,'YDir','reverse')
hold off
% saveas(F1,sprintf('%s.fig',type),'fig');
% saveas(F1,sprintf('%s.png',type),'png');
% close all


end




function map = loadMap(fileName)

fid = fopen(fileName);

temp = fgetl(fid); % disregard first line

count = 0;
while ~feof(fid)
    line = fgetl(fid);
    count = count + 1;
end

fclose(fid);

fid = fopen(fileName);

temp = fgetl(fid);
map.Lat = zeros(1,count);
map.Lon = zeros(1,count);
map.Vs = zeros(1,count);
for i = 1 : count;
    line = fgetl(fid);
    lineDouble = sscanf(line,'%lf\t%lf\t%lf');
    map.Lat(i) = lineDouble(1);
    map.Lon(i) = lineDouble(2);
    map.Vs(i) = lineDouble(3);

end

fclose(fid);

end