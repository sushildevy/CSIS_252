#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
#include "personType.h"
#include "dateType.h"
int main()
{
  //personType person;
  //person.setName("Sushil Pandey")
  //cout<<person<<endl;
  string name1="Sushil Pandey";
  dateType d1;
  d1.setDate(122,22,1999);
  personType p1(name1,d1);
  //cout<<p1.getName() <<"has birthday on "<<p1.getBirthDay()<<endl;
  
  string name2="Satya Pokherel";
  dateType d2;
  d2.setDate(1,2,2016);
  personType p2(name2,d2);
  //cout<<p2.getName()<<"has birthday on "<<p2.getBirthDay()<<endl; 
  
  string name3="Amir Pasmina";
  dateType d3;
  d3.setDate(1,26,2017);
  personType p3(name3,d3);
  
  string name4="Aanjana Chalemi";
  dateType d4;
  d4.setDate(3,23,2017);
  personType p4(name4,d4);
  
  string name5="John Sena";
  dateType d5;
  d5.setDate(2,16,2001);
  personType p5(name5,d5);
  
  string name6="Dami Vena";
  dateType d6;
  d6.setDate(2,16,2011);
  personType p6(name6,d6);
  
  if (p2.getBirthDay() == p3.getBirthDay())
    cout<<"Both "<<p2.getName()<<" and "<< p3.getName()<< " were born on same date"<<endl;
  else
    cout<<p2.getName()<<" and "<< p3.getName()<< " were born on different date"<<endl;
  
  if(p3.getBirthDay() < p5.getBirthDay())
    cout<<p3.getBirthDay()<< " is less than "<<p5.getBirthDay()<<" on "<<endl;
  else
    cout<<p3.getBirthDay()<< " is greater than "<<p5.getBirthDay()<<" on "<<endl;
  
  
  if(p3.getBirthDay() >= p4.getBirthDay())
  {
    if (p3.getBirthDay() > p4.getBirthDay())
      cout<<p3.getBirthDay() <<" is greater than "<<p4.getBirthDay()<<endl;
    else
      cout<<p3.getBirthDay() << " is same as "<<p4.getBirthDay()<<endl;
  }
  
 if (p5.getBirthDay() <= p6.getBirthDay())
 {
   if (p5.getBirthDay() < p6.getBirthDay())
     cout<<p5.getBirthDay() <<" is less than "<<p6.getBirthDay()<<endl;
   else
     cout<<p5.getBirthDay() << " is same as "<<p6.getBirthDay()<<endl;
 }
 
 if (p5.getBirthDay() > p6.getBirthDay())
   cout<<p5.getBirthDay()<< "is greater than "<<p6.getBirthDay()<<endl;
 
 if(p5.getBirthDay() != p6.getBirthDay())
   cout<<p5.getBirthDay()<< " is not same as "<<p6.getBirthDay()<<endl;
 
  p2.setName("hamne khang");
  dateType d7;
  d7.setDate(5,5,2015);
  p2.setBirthDay(d7);
  cout<<p2.getName()<<endl;
  cout<<p2.getName()<<" was born on "<<p2.getBirthDay().getYear()<<endl;
  cout<<p2.getName()<<" was born on "<<p2.getBirthDay().getMonth()<<endl;
  cout<<"The day that "<<p2.getName() <<" was born is "<<p2.getBirthDay().getDay()<<endl;
  cout<<"Hence "<<p2.getName()<<" was born on "<<p2.getBirthDay()<<endl;
  cout<<p2<<endl; 
  
  
  return 0;
}
