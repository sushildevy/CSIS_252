#include <iostream>
#include "baseConvert.h"

using namespace std;

int main()
{
  cout<<"converting decimal to binary: "<<endl ;
  cout<<"44 decimal is "<<baseConvert::Dec2Bin(44)<<" binary "<<endl;
  cout<<"126 decimal is "<<baseConvert::Dec2Bin(126)<<" binary "<<endl;
  cout<<"converting binary to decmal: "<<endl;
  cout<<"101100 binary is "<<baseConvert::Bin2Dec(101100)<<" decimal"<<endl;
  cout<<"1111110 binary is "<<baseConvert::Bin2Dec(1111110)<<" decimal "<<endl;
  return 0;
}