# Stupid makefile

CC=gcc
SRC=./src
INCLUDES=-I ./include

all:
	$(CC) $(SRC)/main.c $(INCLUDES) -o monkecraft
