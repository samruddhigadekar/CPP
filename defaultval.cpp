#include<iostream>
using namespace std;
void area(float r=3.67f)
{
	float a=3.14*r*r;
	cout<<"\n area of circle="<<a;
}
void circum(float r=6.14f)
{
	float a=2*3.14*r;
	cout<<"\n circumference of circle="<<a;
}
int main()
{
	area();
	area(7.7f);
	circum();
	circum(5.6f);
}
