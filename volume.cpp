#include<iostream>
using namespace std;
class demo
{
	public:
		void volume(float r)
		{
			float v=r*r*r;
			cout<<"\n volume of cube="<<v;
		}
		void volume(float r,float h)
		{
			float v=3.14*r*r*h;
			cout<<"\n volume of cylinder="<<v;
		}
		void volume(float l,float w,float h)
		{
			float r=l*w*h;
			cout<<"\n volume of reactangle="<<r;
		}
}ob;
int main()
{
	demo ob;
	ob.volume(3.14f);
	ob.volume(5.12f,6.7f);
	ob.volume(5.12f,7.5f,6.45f);
	ob.volume(5.12f);
	ob.volume(5.12f,6.7f);		
	
}
