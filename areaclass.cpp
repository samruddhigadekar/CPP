#include<iostream>
using namespace std;
class area
{
	public:
		void circle()
		{
			float r,a;
			cout<<"\n enter radius:";
			cin>>r;
			a=3.14*r*r;
			cout<<"\n area of circle:"<<a<<endl;
		}
		void rect()
		{
			float l,w,a;
			cout<<"\n enter length:";
			cin>>l;
			cout<<"\n enter width:";
			cin>>w;
			a=l*w;
			cout<<"\n area of rect="<<a;
		}
		void triangle()
		{
			float b,h,a;
			cout<<"\n enter base:";
			cin>>b;
			cout<<"\n enter height:";
			cin>>h;
			a=0.5*b*h;
			cout<<"\n area of triangle:"<<a;
		}
};
int main()
{
	area ob;
	ob.circle();
	ob.rect();
	ob.triangle();
}
