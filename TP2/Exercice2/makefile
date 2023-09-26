# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
hanoi: main.o Game.o Tower.o Disk.o
	$(CC) $(CFLAGS) -o hanoi main.o Game.o Tower.o Disk.o

# Pair.o
Game.o: Game.cpp Game.h Tower.h Disk.h
	$(CC) $(CFLAGS) -c Game.cpp
# The main.o 
main.o: main.cpp Game.cpp Disk.cpp Game.h Tower.h Disk.h
	$(CC) $(CFLAGS) -c main.cpp Game.cpp Tower.cpp Disk.cpp 

main.o: Game.h Tower.h Disk.h

Tower.o: Tower.h Disk.h

Disk.o: Disk.h

clean: rm -f *.o *~