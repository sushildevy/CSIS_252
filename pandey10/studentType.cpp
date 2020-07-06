// File:    studentType.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/25/2018

// Description
// This file contains the implementation for a studentType class

#include "studentType.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

istream& operator>>(istream& in,studentType& s)
{
  string name;
  int score;
  getline(in,name);
  in>>score;
  s.setName(name);
  s.setScore(score);
  in.ignore(80,'\n');
  return in;
  
}



studentType::studentType()
{
  setScore(0);
}



void studentType::setScore( int sc)
{ 

  score=sc;
} 

int studentType::getScore() const
{
  return score;
}

bool  studentType::operator==(const studentType& s) const
{
  return getScore()==s.getScore();
}

bool studentType::operator<(const studentType& s) const
{
   return getScore() < s.getScore();
}

bool studentType::operator<=(const studentType& s) const
{
   return *this<s || *this==s;
}

bool studentType::operator>(const studentType& s) const
{
   return !(*this<=s);
}

bool studentType::operator>=(const studentType& s) const
{
   return !(*this<s);
}


bool studentType::operator!=(const studentType& s) const
{
   return !(*this==s);
}


ostream& operator<<(ostream& out, const studentType& p)
{
  out<<setw(20)<<left<<p.getName()<<setw(20)<<right<<p.getScore();

  return out;
}

