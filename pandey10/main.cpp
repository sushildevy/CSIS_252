// File:    main.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/25/2018
#include <iostream>
#include <fstream>
using namespace std;
#include "studentType.h"
#include "listType.h"
#include "dateType.h"
#include "personType.h"

void read(listType<studentType>&);
void output(const listType<studentType>&);

int main()
{
   listType<studentType> students;
   read(students);
   output(students);
  
   return 0;
}