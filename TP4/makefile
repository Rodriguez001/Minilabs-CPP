# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
Exercice: main.o Directory.o File.o Text.o Image.o Video.o
	$(CC) $(CFLAGS) -o tp4 main.o Directory.o File.o Text.o Image.o Video.o

# Directory.o
Directory.o: Directory.cpp Directory.h File.h
	$(CC) $(CFLAGS) -c Directory.cpp
#File.o
File.o: File.cpp File.h
	$(CC) $(CFLAGS) -c File.cpp
#Text.o
Text.o: Text.cpp Text.h File.h
	$(CC) $(CFLAGS) -c Text.cpp
#Image.o
Image.o: Image.cpp Image.h File.h
	$(CC) $(CFLAGS) -c Image.cpp
#video.o
video.o: video.cpp video.h File.h
	$(CC) $(CFLAGS) -c video.cpp
# The main.o 
main.o: main.cpp Directory.h File.h Text.h Image.h Video.h
	$(CC) $(CFLAGS) -c main.cpp Directory.cpp File.cpp Text.cpp Image.cpp Video.cpp

main.o: Directory.h File.h Text.h Image.h Video.h

Directory.o: Directory.h 

File.o: File.h

Text.o: Text.h

Image.o: Image.h

Video.o: Video.h

clean: 
	rm -f *.o *~