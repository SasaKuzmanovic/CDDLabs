#Author: Sasa Kuzmanovic
#Date: 11/02/2023
#Make used to contain commands to compile projects

OBJECTS		= Semaphore.o main.o
SOURCE		= Semaphore.cpp main.cpp
HEADER		= Semaphore.h
OUTPUT		= main.out
CC=g++
LFLAGS=

ALL: $(OBJECTS)
	$(CC)  $(OBJECTS) -o $(OUTPUT) $(CFLAGS)

#this is customary and just deletes all .o files
CLEAN:
	rm -f $(OBJECTS)
