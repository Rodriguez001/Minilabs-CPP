# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice: main.o 
	$(CC) $(CFLAGS) -o Embedding_Vector main.o 

# The main.o 
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean: 
	rm -f *.o *~ 