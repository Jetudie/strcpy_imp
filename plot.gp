set xlabel "Number of char"
set ylabel "Time elapse"
set key left
set term jpeg
set output "test1.jpg"
set logscale x
pl [:1614] [:] "Time1.txt" title "byte by byte" lc rgb "green", "Time2.txt" title "word by word" lc rgb "red"
reset