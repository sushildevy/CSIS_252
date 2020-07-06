// File:    timeType.cpp
// Author:  Sushil Pandey
// Program: prog8 
// Date:    04/11/2018

// Description:
// This file contains the implementation for a timeType class

#include "timeType.h"
#include <string>
#include <iostream>
using namespace std;


istream& operator >> (istream& in, timeType& t)
{
  int num1,num2;
  char colon;
  in>> num1;
  in>>colon;
  in>>num2;
  t.setTime(num1,num2);
  return in;
}

ostream& operator <<(ostream& out, const timeType& t)
{
 if (t.getHours() ==0)
 {
   if (t.getMinutes() <10)
     out<<"12"<<":0"<<t.getMinutes()<<" a.m.";
   else 
     out<<"12"<<":"<<t.getMinutes()<<" a.m."; 
 }
 else if (t.getHours() < 12 )
  {
    if (t.getMinutes() < 10)
      out<<t.getHours() <<":0"<<t.getMinutes() <<" a.m.";
    else
      out<<t.getHours() <<":"<<t.getMinutes() <<" a.m.";
  }
  
  else if (t.getHours() == 12 )
  {
    if (t.getMinutes() < 10)
      out<<t.getHours()<<":0"<<t.getMinutes()<<" p.m.";
    else
      out<<t.getHours()<<":"<<t.getMinutes()<<" p.m.";
  }
  
  else
  {
    if (t.getMinutes() < 10)
      out<<t.getHours()<<-12<<":0"<<t.getMinutes()<<" p.m.";
    else
      out<<t.getHours()<<-12<<":"<<t.getMinutes()<<" p.m.";
  }
  return out;
}


bool timeType::operator==(const timeType& t) const
{
   return (getHours()==t.getHours() && getMinutes()==t.getMinutes());
}

bool timeType::operator<(const timeType& t) const
{
   bool res;
   if (getHours()<t.getHours())
     res=true;
   
   else if (getHours()==t.getHours())
   {
     if (getMinutes() < t.getMinutes())
       res = true;
   }
   return res;
       
     
}
bool timeType::operator<=(const timeType& t) const
{
   return *this<t || *this==t;
}

bool timeType::operator>(const timeType& t) const
{
   return !(*this<=t);
}

bool timeType::operator>=(const timeType& t) const
{
   return !(*this<t);
}


bool timeType::operator!=(const timeType& t) const
{
   return !(*this==t);
}
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
  if ((h <=24 && h >=0) &&(m>=0 && m<60))
  {   
   hours=h;
   minutes=m;
  }
  else
  {
    cerr << "The time "<<h<<":"<<m<<" you gave is invalid"<<endl;
   setTime(0,0);
  }
}

int timeType::getHours() const
{
  return hours;
} 
int timeType::getMinutes() const
{
  return minutes;
}
    
  
      