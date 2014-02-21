
CC=gcc
CFLAGS=-g -O0 -lm

slept: slept.c Makefile
	$(CC) $(CFLAGS) slept.c -o slept
