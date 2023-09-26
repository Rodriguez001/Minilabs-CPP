# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice1: Exercice1.o
	$(CC) $(CFLAGS) -o Exercice1 Exercice1.o 

# Exercice1.o
Exercice1.o: Exercice1.cpp
	$(CC) $(CFLAGS) -c Exercice1.cpp

clean: rm -f *.o *~