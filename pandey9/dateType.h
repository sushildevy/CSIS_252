// File:    dateType.h
// Author:  Sushil Pandey
// Program: prog9
// Date:    04/17/2018

// Description: 
// This file contains the specification for a dataType class

#include<string>

#ifndef _DATETYPE_H_
#define _DATETYPE_H_

using namespace std;

class dateType
{
  public:
    // method - default constructor
    // description - construct a default dateType
    // preconditions - none
    // postconditions - default dateType object has been created
    // method input -none
    // method output -none 
    dateType();
    
    
    // method - parameterized constructor dateType
    // description - construct a dateType
    // preconditions - date is correct
    // postconditions - dateType object is created
    // method input -date of dateType:int
    // method output -none     
    dateType(int month , int day,int year);
    
    // method - setDate
    // description - sets the date of the dateType
    // preconditions - date is correct
    // postconditions - dateType object date set
    // method input -date of dateType:int
    // method output -none
    void setDate(int month,int day,int year);
    
    // method - getYear 
    // description - returns the year of the object dateType
    // preconditions - dateType object has been initilized
    // postconditions - dateType object year has been returned 
    // method input -none
    // method output -year of the date has been returned
    int getYear() const;
    
    // method - getMonth
    // description - returns the month of the object dateType
    // preconditions - dateType object has been initilized
    // postconditions - dateType object month has been returned
    // method input -none
    // method output -month of the date:int
    int getMonth() const;
    
    // method - getDay
    // description - returns the day of the object dateType
    // preconditions - dateType object has been initilized
    // postconditions - dateType object day has been returned
    // method input -date of dateType:int
    // method output -none
    int getDay() const;
    
    // method - print
    // description - prints the date of dateType
    // preconditions - none
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output -date of the dateType
    void print() const;
    
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output -boolean value was returned
    bool operator<(const dateType&) const;
   
    // method - operator overload
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output - boolean value was returned   
    bool operator<=(const dateType&) const; 

    // method - operator overload
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output - boolean value was returned 
    bool operator>(const dateType&) const; 
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output - boolean value was returned  
    bool operator>=(const dateType&) const; 
    
    // method -operator overload 
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions - date of object dateType has been returned
    // method input -none
    // method output - boolean value was returned 
    bool operator==(const dateType&) const;
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - dateType object has been initilized
    // postconditions -date of object dateType has been returned 
    // method input -none
    // method output -boolean value was returned
    bool operator!=(const dateType&) const;
  
    
  private:
    int month; // month of the date
    int day;   //day of the date
    int year;  //year of the date
    
};
ostream& operator<<(ostream&,const dateType&);
istream& operator>>(istream&,dateType&);

#endif 
    
  