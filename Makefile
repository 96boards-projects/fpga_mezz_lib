#################################################################
# Title: Makefile
# Author: Sahaj Sarup
# Copyright (c) 2019 Linaro Limited
#################################################################

CC=gcc
CFLAGS=-lmraa
INCLUDE=include

all:
	@$(CC) $(CFLAGS) -I$(INCLUDE) example.c src/fpga_mezz.c -o example

clean:
	rm -rf example
