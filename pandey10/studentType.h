//File: studentType.h
//Author: Sushil Pandey
//Date: 04/25/2018

// Description
// This file contains the specification for a studentType class

#ifndef _STUDENTTYPE_H_
#define _STUDENTTYPE_H_
#include <iostream>
#include <string>
#include "personType.h"

class studentType : public personType
{
  public:
    // method - default constructor studentType
    // description - construct a studentType
    // preconditions -none
    // postconditions - studentType object is created
    // method input -name and date for studentType:string
    // method output -none 
    studentType();

    // method - parameterized constructor studentType
    // description - construct a studentType
    // preconditions -none
    // postconditions - studentType object is created
    // method input -name and date for studentType:string
    // method output -none 
    studentType(const string& name,int score);
    
    // method - setScore
    // description -sets a studentType
    // preconditions -none
    // postconditions - studentType object set
    // method input -score:int
    // method output -none 
    void setScore( int score);
    
    // method - getScore
    // description -gets a studentType
    // preconditions -none
    // postconditions - studentType object set
    // method input -none
    // method output -score:int
    int getScore() const;
    // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions - none
    // method input -none
    // method output - boolean value was returned
    bool  operator==(const studentType& ) const;
        // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions - none
    // method input -none
    // method output - boolean value was returned

    bool operator<(const studentType& ) const;

    // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions - none
    // method input -none
    // method output - boolean value was returned
    bool operator<=(const studentType& ) const;

    // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions -none
    // method input -none
    // method output - boolean value was returned
    bool operator>(const studentType& ) const;
        
    // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions - none
    // method input -none
    // method output - boolean value was returned

    bool operator>=(const studentType& ) const;
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - studentType object has been initilized
    // postconditions -none
    // method input -none
    // method output - boolean value was returned

    bool operator!=(const studentType& ) const;

      
   private:
    
      int score ;
};
istream& operator>>(istream&, studentType&);
ostream& operator<<(ostream&,const studentType&);
#endif
