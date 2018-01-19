CC = gcc

# this target compiles bbb and wbw
all: bbb wbw

bbb: test.o strcpy_bbb.o
	$(CC) -O0 test.o strcpy_bbb.o -o strcpy_bbb

wbw: test.o strcpy_wbw.o
	$(CC) -O0 test.o strcpy_wbw.o -o strcpy_wbw

test.o: test.c
	gcc -c test.c

strcpy_bbb.o: strcpy_bbb.c
	gcc -c strcpy_bbb.c

strcpy_wbw.o: strcpy_wbw.c
	gcc -c strcpy_wbw.c

clean: 
	rm -rf *.o all
