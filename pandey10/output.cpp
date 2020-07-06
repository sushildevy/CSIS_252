// File:    output.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/25/2018
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;
#include "studentType.h"
#include "listType.h"

void output(const listType<studentType>& students)
{
  studentType student;
  ofstream out;
  out.open("results");
  out<<setw(20)<<left<<"NAME"<<setw(20)<<right<<"SCORE"<<endl;
  for (int k=0;k<students.listSize();k++ )
  {
    students.retrieveAt(k,student);
    out<<student<<endl;
  }
  out.close();
}