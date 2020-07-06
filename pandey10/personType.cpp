// File:    personType.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/17/2018

// Description: 
// This file contains the implementation for a personType class

#include "personType.h"
#include "dateType.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& out, const personType& p)
{
  out<<p.getName() << ";" <<p.getBirthDay();
  return out;
}


bool  personType::operator==(const personType& p) const
{
  return getBirthDay()==p.getBirthDay();
}

bool personType::operator<(const personType& p) const
{
   return getBirthDay() < p.getBirthDay();
}

bool personType::operator<=(const personType& p) const
{
   return *this<p || *this==p;
}

bool personType::operator>(const personType& p) const
{
   return !(*this<=p);
}

bool personType::operator>=(const personType& p) const
{
   return !(*this<p);
}


bool personType::operator!=(const personType& p) const
{
   return !(*this==p);
}

personType::personType()
{ 
  dateType obj(1,1,2000);
  setName("");
  setBirthDay(obj);
}
  
personType::personType(const string& n,const dateType& obj)
{
  setName(n);
  setBirthDay(obj);
}
string personType::getName() const
{
  return name;
}


void personType::setName(const string& n)
{
  name=n;
}

dateType personType::getBirthDay() const
{
 return BirthDay; 
  
}

void personType::setBirthDay(const dateType& obj) 
{
  BirthDay=obj;
}

  
  
 