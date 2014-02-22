
CC=gcc
CFLAGS=-g -O0 -lm

slept:
	$(CC) $(CFLAGS) slept.c -o slept
