#include<iostream>
using namespace std;
inline int max(int a,int b)
{
	return(a>b ? a:b);
}
inline int min(int a,int b)
{
	return(a<b ? a:b);
}
int main()
{
	int a,b;
	cout<<"enter no1:";
	cin>>a;
	cout<<"enter no2:";
	cin>>b;
	cout<<"\n maximum no:"<<max(a,b);
	cout<<"\n minimum no:"<<min(a,b);
}
