// File:    timeType.cpp
// Author:  Sushil Pandey
// Program: prog7 
// Date:    03/28/2018

// Description:
// This file contains the implementation for a timeType class

#include "timeType.h"
#include <iostream>
using namespace std;


timeType::timeType() 
{
  setTime(0,0);
}
  
timeType::timeType(int h, int m )
{
  setTime(h,m);
}
void timeType::setTime(int h, int m )
{

  hours=h;
  minutes=m;
}

int timeType::getHours() const
{
  return hours;
} 
int timeType::getMinutes() const
{
  return minutes;
}
    
void timeType::print() const
{
  if (hours < 12 )
  {
    if (minutes < 10)
      cout<<hours<<":0"<<minutes<<" a.m."<<endl;
    else
      cout<<hours<<":"<<minutes<<" a.m."<<endl;
  }
  
  else if (hours == 12 )
  {
    if (minutes < 10)
      cout<<hours<<":0"<<minutes<<" p.m."<<endl;
    else
      cout<<hours<<":"<<minutes<<" p.m."<<endl;
  }
  
  else
  {
    if (minutes < 10)
      cout<<hours-12<<":0"<<minutes<<" p.m."<<endl;
    else
      cout<<hours-12<<":"<<minutes<<" p.m."<<endl;
  }
  
}
  
      