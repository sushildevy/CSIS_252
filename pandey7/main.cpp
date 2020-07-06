// File:    main.cpp
// Author:  Sushil Pandey
// Program: prog7 
// Date:    03/28/2018

// Description: This file contains the main.cpp

#include <iostream>
#include "timeType.h"
#include "dateType.h"

using namespace std;

int main()
{

  cout<<"testing time :"<<endl;
  timeType time;
  time.setTime(11,36);
  time.print();
  time.setTime(23,59);
  time.print();
  time.setTime(16,30);
  time.print();
  time.setTime(7,4);
  time.print();
  
  cout<<endl<<endl;
  cout<<"testing date:"<<endl;
  dateType date;
  date.setDate(2,16,2018);
  date.print();
  date.setDate(6,1,2011);
  date.print();
  date.setDate(12,12,2012);
  date.print();
  
  return 0;
}

  
  