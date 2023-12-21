#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum,sub,mul,div,mod;
	cout<<"enter number 1:";
	cin>>n1;
	cout<<"enter number 2:";
	cin>>n2;
	sum=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	mod=n1%n2;
	cout<<"\n addition="<<sum;
	cout<<"\n subtraction="<<sub;
	cout<<"\n multiplication="<<mul;
	cout<<"\n division="<<div;
	cout<<"\n reminder="<<mod;
}
