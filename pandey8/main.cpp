// File:    main.cpp
// Author:  Sushil Pandey
// Program: prog8 
// Date:    04/11/2018

// Description: This file contains the main.cpp
#include <fstream>
#include <iostream>
#include <string>
#include "timeType.h"
#include "dateType.h"

using namespace std;

int main()
{

  timeType time;
  time.setTime(0,6);
  cout<<time<<endl;
  time.setTime(23,59);
  cout<<time<<endl;
  time.setTime(25,30);
  cout<<time<<endl;
  time.setTime(7,4);
  cout<<time<<endl;
  
  cout<<endl<<endl;
  dateType date;
  date.setDate(18,16,2018);
  cout<<date<<endl;
  date.setDate(6,1,2011);
  cout<<date<<endl;
  date.setDate(12,12,2012);
  cout << date<<endl;
  
  
  return 0;
}

  
  