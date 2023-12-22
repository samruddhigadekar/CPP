#include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,i;
	cout<<"enter limit:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i<<"/"<<fact(i)<<"\t";
	}
}
