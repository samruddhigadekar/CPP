#include<iostream>
using namespace std;
class demo
{
	public:
		void add(int a,int b)
		{
			int c=a+b;
			cout<<"\n addition1="<<c;
		}
		void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"\n addition2="<<d;
		}
		void add(float a,float b)
		{
			float c=a+b;
			cout<<"\n addition3="<<c;
		}
}ob;
int main()
{
	ob.add(10,20);
	ob.add(100,200);
	ob.add(10,20,30);
	ob.add(10.4f,20.4f);
	
}
