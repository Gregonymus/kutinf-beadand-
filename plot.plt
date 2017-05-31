set term svg size 800, 600
set output "plot.svg"
set xrange [-30000:40000]
set yrange [0:450000]
set xlabel "sebesseg(km/s)"
set ylabel "tavolsag(ps)"
plot 'veldis.txt'  using 1:2 w points ps 0.5