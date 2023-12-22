#include<iostream>
using namespace std;
#include<conio.h>
void area(float r,float l)
{
   float a=3.14*r*(r+l);
   cout<<"\n Area of Cone="<<a;
}
void area(float r)
{
   float a=4*3.14*r*r;
  cout<<"\n Area of sphere="<<a;
}
void area(double r)
{
   double a=3.14*r*r;
  cout<<"\n Area of Circle="<<a;
}
int main()
{
   area(5.4f,6.7f);
   area(3.4f);
   area(6.7);
}
