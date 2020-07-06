// File:    dateType.cpp
// Author:  Sushil Pandey
// Program: prog10
// Date:    04/25/2018

// Description: 
// This file contains the implementation for a dataType class

#include "dateType.h"
#include <iostream>
#include <string>
using namespace std;

istream& operator >> (istream& in, dateType& d)
{
  int num1,num2,num3;
  char slash;
  in>>num1;
  in >>slash;
  in>>num2;
  in>>slash;
  in>>num3;
  d.setDate(num1,num2,num3);
  return in;
}

ostream& operator << (ostream& out, const dateType& d)
{
         if(d.getMonth()==1)
	  out<<"January "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==2)
	  out<<"February "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==3)
	  out<<"March "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==4)
	  out<<"April "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==5)
	  out<<"May "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==6)
	  out<<"June "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==7)
	  out<<"July "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==8)
	  out<<"August "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==9)
	  out<<"September "<<d.getDay()<<","<<d.getYear();
	else if (d.getMonth ()==10)
	  out<<"October "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==11)
	  out<<"November "<<d.getDay()<<", "<<d.getYear();
	else if (d.getMonth() ==12)
	  out<<"December "<<d.getDay()<<", "<<d.getYear();
  
  return out;
}

bool dateType::operator==(const dateType& d) const
{
   return (getMonth() == d.getMonth() && getDay()== d.getDay() && getYear()== d.getYear());
}

bool dateType::operator<(const dateType& d) const
{
  bool res= false;
  if (getYear()< d.getYear())
      res=true;
  else if (getYear() == d.getYear())
  {
    if (getMonth ()< d.getMonth())
        res=true;
  
    else  if (getMonth() == d.getMonth())
    {
      if (getDay()<d.getDay())
	res=true;
    }
  }
  return res;
}
   

bool dateType::operator<=(const dateType& d) const
{
   return *this<d || *this==d;
}

bool dateType::operator>(const dateType& d) const
{
   return !(*this<=d);
}

bool dateType::operator>=(const dateType& d) const
{
   return !(*this<d);
}


bool dateType::operator!=(const dateType& d) const
{
   return !(*this==d);
}

  
  dateType::dateType()
  {
      setDate(1,1,2000);
  }
      
  dateType::dateType(int m,int d, int yr)
  {
      setDate(m,d,yr);
  }
  
   void dateType::setDate(int m, int d , int yr)
   { 
     if(((m==2) && (((yr % 4 ==0) && (yr%100 ==0)) || (yr % 400 == 0)) && (d>=1 && d<=29)) ||((m==2) &&( d>=1 && d <=28) ) ||  
     ((m ==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>= 1 && d<=31)) || 
     ((m ==4 || m== 6 || m==9 || m==11) && (d>=1 && d<=30)))
   {
     month=m;
     day=d;
     year=yr;
   }
   else 
   {
   cerr<<"The  given date " << m <<"/"<< d <<"/"<< yr << " is invalid"<<endl;
   setDate(1,1,2000);
   }
   }  
  int dateType::getMonth() const
   {
	  return month;
   }

    int dateType::getDay() const
    {
	return day;
    }
	
    int dateType::getYear() const
    {
	return year;
    }
    