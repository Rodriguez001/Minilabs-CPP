# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice2: main.o Vector.o
	$(CC) $(CFLAGS) -o Exercice2 main.o Vector.o

# Vector.o
Vector.o: Vector.cpp Vector.hpp
	$(CC) $(CFLAGS) -c Vector.cpp
# The main.o 
main.o: main.cpp Vector.hpp
	$(CC) $(CFLAGS) -c main.cpp Vector.cpp

main.o: Vector.hpp

Vector.o: Vector.hpp

clean: rm -f *.o *~