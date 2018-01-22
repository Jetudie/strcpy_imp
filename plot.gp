reset
set title "strcpy"
set xlabel "Number of char"
set ylabel "Time elapsed (sec)"
set key left
set grid
set term png enhanced font 'Verdana, 12'
set output "test.png"
pl [:17913] [:] \
"strcpy_bbb.txt" using 1:2 title "byte by byte" lc rgb "green", \
"strcpy_wbw.txt" using 1:2 title "word by word" lc rgb "red"
reset
