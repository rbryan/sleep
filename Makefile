
CC=gcc
CFLAGS=-Wall -g -O0 -lm

slept: slept.c Makefile
	$(CC) $(CFLAGS) slept.c -o slept
