# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice: main.o Stack.o 
	$(CC) $(CFLAGS) -o Stack main.o Stack.o 

# Directory.o
Stack.o: Stack.cpp Stack.hpp 
	$(CC) $(CFLAGS) -c Stack.cpp

# The main.o 
main.o: main.cpp Stack.hpp
	$(CC) $(CFLAGS) -c main.cpp Stack.cpp

main.o: Stack.hpp

Stack.o: Stack.hpp 

clean: 
	rm -f *.o *~ 