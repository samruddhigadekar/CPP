#include<iostream>
using namespace std;
int main()
{
	int rows;
	char ch='A';
	cout<<"enter number of rows:";
	cin>>rows;
	for(int i=1;i<=rows;i++)
	{
		for(int j=0;j<=i-1;j++)
	    {
			cout<<ch<< " ";
			ch++;
		}
		cout<<"\n";
	}
}                            
