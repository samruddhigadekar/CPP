#include<iostream>
using namespace std;
inline float area(float l,float b)
{
	return l*b;
}
inline float perimeter(float l,float w)
{
	return 2*(l*w);
}
int main()
{
	float l,w;
	cout<<"enter length=";
	cin>>l;
	cout<<"enter width=";
	cin>>w;
	cout<<"\n area of reactangle="<<area(l,w);
	cout<<"\n perimeter of rectangle="<<perimeter(l,w);
}
