# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice1: main.o Time.o
	$(CC) $(CFLAGS) -o time main.o Time.o

# Pair.o
Vector.o: Time.cpp Time.h
	$(CC) $(CFLAGS) -c Time.cpp
# The main.o 
main.o: main.cpp Time.h
	$(CC) $(CFLAGS) -c main.cpp Time.cpp

main.o: Time.h

Vector.o: Time.h

clean: 
	rm -f *.o *~