CC = gcc
CFLAGS = -O0 -m32
# this target compiles bbb and wbw
all: bbb wbw

bbb: test.c strcpy_bbb.c
	$(CC) $(CFLAGS) test.c strcpy_bbb.c -o strcpy_bbb

wbw: test.c strcpy_wbw.c
	$(CC) $(CFLAGS) test.c strcpy_wbw.c -o strcpy_wbw

clean: 
	rm -rf *.o all
