#include<iostream>
using namespace std;
int main()
{
	int n,r,d;
	cout<<"enter number:";
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"REVERSE NUMBER="<<r;
}
