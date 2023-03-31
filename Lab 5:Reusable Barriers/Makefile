#Author: Sasa Kuzmanovic
#Date: 31/03/2023
#Make used to contain commands to compile projects

OBJECTS		= Semaphore.o main.o Barrier.o
SOURCE		= Semaphore.cpp main.cpp Barrier.cpp
HEADER		= Semaphore.h Barrier.h
OUTPUT		= main.out
CC=g++
CFLAGS= 	-std=c++11 -pthread -g -Wall

ALL: $(OBJECTS)
	$(CC)  $(OBJECTS) -o $(OUTPUT) $(CFLAGS)
	make CLEAN

#this is customary and just deletes all .o files
CLEAN:
	rm -f $(OBJECTS)
