# File:    makefile
# Author:  Sushil Pandey
# Program: prog10
# Date:    04/25/2018
OBJECTS=main.o output.o read.o personType.o studentType.o dateType.o
CC=g++
EXE=prog10
CFLAGS=-pedantic -Wall
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp  studentType.h 
		$(CC) $(CFLAGS) -c main.cpp

dateType.o:     dateType.cpp dateType.h
		$(CC) $(CFLAGS) -c dateType.cpp

read.o:		read.cpp studentType.h 
		$(CC) $(CFLAGS) -c read.cpp

output.o:	output.cpp studentType.h
		$(CC) $(CFLAGS) -c output.cpp

personType.o:	personType.cpp personType.h 
		$(CC) $(CFLAGS) -c personType.cpp

studentType.o:	studentType.cpp studentType.h 
		$(CC) $(CFLAGS) -c studentType.cpp

# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~
