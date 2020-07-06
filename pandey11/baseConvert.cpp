#include <fstream>
#include <string>
using namespace std;

#include "baseConvert.h"
#include "queueType.h"
#include "stackType.h"

int baseConvert::Dec2Bin(int d)
{
  int b=0;
  stackType<int> s;
  while (d > 0 && !s.isFullStack())
  { 
    s.push( d%2);
    d=d/2; 
  }
  while (!s.isEmptyStack())
  {
   
    b=b*10 +s.top();s.pop();
  }
 return b;
  
}

int baseConvert::Bin2Dec(int b)
{
  int d=0;
  int position=1;
  queueType<int> q;
  while(b>0 && !q.isFullQueue())
  {
    q.addQueue(b%10);
    b=b/10;
  }
  while (!q.isEmptyQueue())
  {
    d=d+q.front()*position;q.deleteQueue();
    position=position*2;
  }
  return d;
}