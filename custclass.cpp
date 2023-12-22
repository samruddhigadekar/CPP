#include<iostream>
using namespace std;
class customer
{
	public:
		int cno;
		char cname[20],addr[20],phn_no[20];
		float sal;
		
	void accept()
	{
		cout<<"\n enter no:";
		cin>>cno;
		cout<<"\n enter name:";
		cin>>cname;
		cout<<"\n enter addr:";
		cin>>addr;
		cout<<"\n enter phn_no:";
		cin>>phn_no;
		cout<<"\n enter salary:";
		cin>>sal;
	}
	void disp()
	{
		cout<<"\n customer_no="<<cno;
		cout<<"\n customer_name="<<cname;
		cout<<"\n customer_addr="<<addr;
		cout<<"\n customer_phn_no="<<phn_no;
		cout<<"\n customer_sal="<<sal;
	}
};
int main()
{
	customer ob;
	ob.accept();
	ob.disp();
	
}
