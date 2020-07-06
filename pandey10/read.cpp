// File:   read.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/25/2018

#include<fstream>
#include<string>
using namespace std;
#include "studentType.h"
#include "listType.h"
void read(listType<studentType>& students)
{
  ifstream in;
  studentType student;
  in.open("scores");
  
  in>>student;
  while (!in.eof() && !students.isFull())
  {
    students.insert(student);
    in>>student;
  }
  in.close();
  
}
