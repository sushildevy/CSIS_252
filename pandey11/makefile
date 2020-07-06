# File:    makefile
# Author:  Sushil Pandey
# Program: prog11
# Date:    05/02/2018
OBJECTS=main.o baseConvert.o 
CC=g++
EXE=prog11
cFLAGS=-pedantic -Wall
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp baseConvert.h 
		$(CC) $(CFLAGS) -c main.cpp
baseConvert.o:  baseConvert.cpp baseConvert.h 
		$(CC) $(CFLAGS) -c baseConvert.cpp

# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~