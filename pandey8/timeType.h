// File:    timeType.cpp
// Author:  Sushil Pandey
// Program: prog8 
// Date:    04/11/2018

// Description:
// This file contains the specification for a timeType class
#include <string>

#ifndef _TIMETYPE_H_
#define _TIMETYPE_H_

using namespace std;

class timeType
{
  //varibles
  
  public:
    // method - default constructor
    // description - construct a default timeType
    // preconditions -none 
    // postconditions - default timeType object has been created   
    // method input -none
    // method output -none 
    timeType();
    
    // method - parameterized constructor dateType
    // description - construct a  parameterized timeType
    // preconditions -time is correct 
    // postconditions - timeType object has been created   
    // method input -time of the timeType:int
    // method output -none     
    timeType(int hours , int minutes );

    // method - setTime
    // description - sets the time of the timeType
    // preconditions -time is correct 
    // postconditions -timeType object time set  
    // method input -time of the timeType:int
    // method output -none
    void setTime(int hours,int minutes);

    // method - getHours 
    // description - returns the hours of the object timeType
    // preconditions - timeType object has been initilized
    // postconditions - timeType object hours has been returned 
    // method input -none
    // method output -hours of the time has been returned    
    int getHours() const;
    
    
    // method - getMinutes 
    // description - returns the minutes of the object timeType
    // preconditions - timeype object has been initilized
    // postconditions - timeType object minutes has been returned 
    // method input -none
    // method output -minutes of the time has been returned    
    int getMinutes() const;
    
    
    // method - print
    // description - prints the time of timeType
    // preconditions - none
    // postconditions - time of object timeType has been returned
    // method input -none
    // method output -time of the timeType    
    void print() const;
    
      // method - operator overload
      // description - returns a boolean value
      // preconditions - timeype object has been initilized
      // postconditions - timeType object has been returned
      // method input -none
      // method output -boolean value has been returned
      bool operator<(const timeType&) const; 
      
      
      // method - operator overload
      // description - returns a boolean value
      // preconditions - timeype object has been initilized
      // postconditions - timeType object has been returned 
      // method input -none
      // method output -boolean value has been returned
      bool operator<=(const timeType&) const;
      
      
      // method - operator overload
      // description - returns a boolean value
      // preconditions - timeype object has been initilized
      // postconditions -  timeType object has been returned
      // method input -none
      // method output -boolean value has been returned
      bool operator>(const timeType&) const; 
      
      
      // method - operator overload
      // description - returns a boolean value
      // preconditions - timeype object has been initilized
      // postconditions -  timeType object has been returned
      // method input -none
      // method output -boolean value has been returned
      bool operator>=(const timeType&) const;
      
      
      // method - operator overload
      // description - returns a boolean value
      // preconditions - timeype object has been initilized
      // postconditions -  timeType object has been returned
      // method input -none
      // method output -boolean value has been returned
      bool operator==(const timeType&) const;
      
      
      // method - operator overload
      // description -returns a boolean value 
      // preconditions - timeype object has been initilized
      // postconditions -  timeType object has been returned
      // method input -none
      // method output - boolean value has been returned
      bool operator!=(const timeType&) const;

    
  private:
    int hours;   //hours of the time
    int minutes; //minutes of the time
    
};

ostream& operator<<(ostream&,const timeType&);
istream& operator>>(istream&,timeType&);
#endif
    
	 
	 
