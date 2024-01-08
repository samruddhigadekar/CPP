//Accept N integer And Display reverse order(use dynamic memory allocation)
#include<iostream>
using namespace std;
int main()
{
	int *a,n,i;
	cout<<"enter limit:";
	cin>>n;
	a=new int[n];
	cout<<"enter n number:";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"reverse number:";
	for(i=n-1;i>=0;i--)
	 cout<<a[i]<<endl;
	
	
}
