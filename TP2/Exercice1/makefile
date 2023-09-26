# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice1: main.o Pair.o
	$(CC) $(CFLAGS) -o Exercice1 main.o Pair.o

# Pair.o
Vector.o: Pair.cpp Pair.h
	$(CC) $(CFLAGS) -c Pair.cpp
# The main.o 
main.o: main.cpp Pair.h
	$(CC) $(CFLAGS) -c main.cpp Pair.cpp

main.o: Pair.h

Vector.o: Pair.h

clean: rm -f *.o *~