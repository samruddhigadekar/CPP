#include<iostream>
using namespace std;
class cuboid
{
	public:
		float l,b,h;
		void setvalue(float l1,float b1,float h1)
		{
			l=l1;
			b=b1;
			h=h1;
		}
		void getvalue()
		{
			cout<<"length="<<l<<endl;
			cout<<"breath="<<b<<endl;
			cout<<"height="<<h<<endl;
		}
		inline float volume()
		{
			return l*b*h;
		}
		inline float surface_area()
		{
			return 2*((l*b)+(l*h)+(b*h));
		}
}ob;
int main()
{
	float l,b,h;
	cout<<"enter length:";
	cin>>l;
	cout<<"enter breath:";
	cin>>b;
	cout<<"enter height:";
	cin>>h;
	ob.setvalue(l,b,h);
	ob.getvalue();
	cout<<"\n volume of cuboid="<<ob.volume();
	cout<<"\n surface_area of cuboid="<<ob.surface_area();
}
