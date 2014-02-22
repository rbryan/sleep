
CC=gcc
CFLAGS=-Wall -g -O0 -lm

slept: slept.c Makefile
	$(CC) $(CFLAGS) slept.c -o slept

clean:
	rm slept

install:
	cp slept /usr/bin/
