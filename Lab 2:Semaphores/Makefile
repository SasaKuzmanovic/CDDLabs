#Author: Sasa Kuzmanovic
#Date: 11/02/2023
#Make used to contain commands to compile projects

OBJECTS		= Semaphore.o main.o
SOURCE		= Semaphore.cpp main.cpp
HEADER		= Semaphore.h
OUTPUT		= main.out
CC=g++
CFLAGS= -std=c++11 -pthread
DEBUGFLAGS =

#This rule says that each .o file depends on a .cpp file of the same name
%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(DEBUGFLAGS)

ALL: $(OBJECTS)
	$(CC) -o $(OUTPUT) $(OBJECTS) $(CFLAGS) $(DEBUGFLAGS)
	make CLEAN

DEBUG: DEBUGFLAGS = -DDEBUG
DEBUG: ALL

#this is customary and just deletes all .o files
CLEAN:
	rm -f $(OBJECTS)
