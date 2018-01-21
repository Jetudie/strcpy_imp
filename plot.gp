set xlabel "Number of char"
set ylabel "Time elapse"
set key left
set term jpeg
set output "test.jpg"
set grid
pl [:1614] [:] "Time1.txt" title "byte by byte" lc rgb "green", "Time2.txt" title "word by word" lc rgb "red"
reset