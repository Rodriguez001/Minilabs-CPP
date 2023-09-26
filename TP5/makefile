# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice: main.o Robot.o 
	$(CC) $(CFLAGS) -o Robot main.o Robot.o 

# Directory.o
Robot.o: Robot.cpp Robot.h 
	$(CC) $(CFLAGS) -c Robot.cpp

# The main.o 
main.o: main.cpp Robot.h
	$(CC) $(CFLAGS) -c main.cpp Robot.cpp

main.o: Robot.h

Robot.o: Robot.h 

clean: 
	rm -f *.o SortedRobots.txt *~ 