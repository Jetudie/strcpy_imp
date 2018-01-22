CC = gcc
CFLAGS = -g -O0 -mx32
# this target compiles bbb and wbw
all: bbb wbw

bbb: test.o strcpy_bbb.o
	$(CC) $(CFLAGS) test.o strcpy_bbb.o -o strcpy_bbb

wbw: test.o strcpy_wbw.o
	$(CC) $(CFLAGS) test.o strcpy_wbw.o -o strcpy_wbw

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: test plot clean
BIN = \
      strcpy_bbb \
      strcpy_wbw
test: $(BIN)
	@for pl in $(BIN); do\
		echo 1 | sudo tee /proc/sys/vm/drop_caches; \
		./$${pl}; \
		mv ./Time.txt ./$${pl}.txt; \
	done
plot: plot.gp
	gnuplot plot.gp

clean: 
	rm -rf *.o all
