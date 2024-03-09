//print armstrong number..
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,s,n1,d;
	clrscr();
	for(n=1;n<=1000;n++)
	{
	s=0;
	n1=n;
	while(n1>0)
	{
		d=n1%10;
		s=s+d*d*d;
		n1=n1/10;
	}
	if(n==s)
	cout<<"\n armstrong no="<<n;
	}
	getch();
	return 0;
}
