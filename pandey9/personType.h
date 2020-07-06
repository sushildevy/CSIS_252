// File:    personType.h
// Author:  Sushil Pandey
// Program: prog9 
// Date:    04/17/2018

// Description: 
// This file contains the specification for a personType class

#ifndef _PERSONTYPE_H_
#define _PERSONTYPE_H_
#include <string>
#include "dateType.h"
using namespace std;
class personType:public  dateType
{
  public:
    // method - parameterized constructor personType
    // description - construct a personType
    // preconditions -date  is correct
    // postconditions - personType object is created
    // method input -name and date for personType:string
    // method output -none 
    personType(const string& name,dateType& obj);
    
    // method - setPerson
    // description -sets a personType
    // preconditions -date and name are correct
    // postconditions - personType object person set
    // method input -name and date for personType:string
    // method output -none 
    void setPerson(string& name,  dateType& obj);
    
    // method - getName
    // description - returns name
    // preconditions -name is string
    // postconditions - personType object name set
    // method input -
    // method output -name has been returned 
    string getName() const;
    
    // method - setName
    // description - sets a name of personType
    // preconditions - name should be string
    // postconditions - personType object name set
    // method input -name od personType:string
    // method output -none
    void setName(const string&);
    
    
    // method - getBirthDay
    // description - returns the bithday of personType
    // preconditions -date  is initilized
    // postconditions - personType object is created
    // method input -none
    // method output -birthday has been returned
    dateType getBirthDay() const;
    
    // method - setBirthDay
    // description - sets birthday a personType
    // preconditions -birthday is  is correct
    // postconditions - personType object birthday set
    // method input - date for personType:string
    // method output -none 
    void setBirthDay(const dateType& obj);
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator<(const personType&) const; 
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator<=(const personType&) const;
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator>(const personType&) const; 
    
     // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator>=(const personType&) const;
    
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator==(const personType&) const;
    
    
    // method - operator overload
    // description - returns boolean value 
    // preconditions - personType object has been initilized
    // postconditions - name and date of object personType has been returned
    // method input -none
    // method output - boolean value was returned
    bool operator!=(const personType&) const;
private:
   string name;   //name of a person
   dateType BirthDay;  //birthday of a person
   
};
ostream& operator<<(ostream& out, const personType& p);
#endif

    
    
  