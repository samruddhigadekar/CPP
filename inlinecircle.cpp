#include<iostream>

using namespace std;
inline float diameter(float r)
{
	return(r/2);
}
inline float circumference(float r)
{
	return(3.14*2*r);
}
inline float circle(float r)
{
	return(3.14*r*r);
}
int main()
{
	float r;
	cout<<"enter radius:";
	cin>>r;
	cout<<"\n diameter of circle:"<<diameter(r);
	cout<<"\n circumferences of circle:"<<circumference(r);
	cout<<"\n area of circle:"<<circle(r);
}
