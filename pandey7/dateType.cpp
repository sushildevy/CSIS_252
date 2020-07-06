// File:    dateType.cpp
// Author:  Sushil Pandey
// Program: prog7 
// Date:    03/28/2018

// Description: 
// This file contains the implementation for a dataType class

#include "dateType.h"
#include <iostream>
#include <string>

using namespace std;

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
     month=m;
     day=d;
     year=yr;
     
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

     void dateType::print() const
     {
        if(month==1)
	  cout<<"January "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==2)
	  cout<<"February "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==3)
	  cout<<"March "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==4)
	  cout<<"April "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==5)
	  cout<<"May "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==6)
	  cout<<"June "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==7)
	  cout<<"July "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==8)
	  cout<<"August "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==9)
	  cout<<"September "<<getDay()<<","<<getYear()<<endl;
	else if (month ==10)
	  cout<<"October "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==11)
	  cout<<"November "<<getDay()<<", "<<getYear()<<endl;
	else if (month ==12)
	  cout<<"December "<<getDay()<<", "<<getYear()<<endl;
     }
     
    