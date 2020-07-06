# File:    makefile
# Author:  Sushil Pandey
# Program: prog9 
#Date:    04/17/2018

# Description: This file contain makefile
#macros
OBJECTS= personType.o dateType.o main.o
CC= g++
EXE=prog9
CFLAGS=-Wall
LFLAGS=
$(EXE):         $(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:         main.cpp personType.h dateType.h
		$(CC) $(CFLAGS) -c main.cpp
		
dateType.o:     dateType.cpp dateType.h
		$(CC) $(CFLAGS) -c dateType.cpp
		
personType.o:   personType.cpp personType.h dateType.h
		$(CC) $(CFLAGS) -c personType.cpp 

#This cleans out the directory before handing it in

clean:
		rm -rf $(OBJECTS)$(EXE) *~