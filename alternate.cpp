//accept n float number store n array and print alternative element(use dynamic memory allocation)
#include<iostream>
using namespace std;
int main()
{
	float *a;
	int i,n;
	cout<<"enter limit:";
	cin>>n;
	a=new float[n];
	cout<<"enter n float number:";
	for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"number=";
    for(i=0;i<n;i=i+2)
    cout<<a[i]<<"\t";
}
