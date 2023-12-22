#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		char sname[20],saddr[20],phn_no[20];
		float per,t,m1,m2,m3,m4,m5,m6;
		
	void accept()
	{
		cout<<"\n enter roll_no:";
		cin>>rno;
		cout<<"\n enter name:";
		cin>>sname;
		cout<<"\n enter addr:";
		cin>>saddr;
		cout<<"\n enter phn_no:";
		cin>>phn_no;
		cout<<"\n enter marks:";
		cin>>m1>>m2>>m3>>m4>>m5>>m6;
	}
	void calc()
	{
		t=m1+m2+m3+m4+m5+m6;
		per=t/6;
	}
	void disp()
	{
		cout<<"\n student_no="<<rno;
		cout<<"\n student_name="<<sname;
		cout<<"\n student_addr="<<saddr;
		cout<<"\n student_phn_no="<<phn_no;
		cout<<"\n student_total_marks="<<t;
		cout<<"\n student_per="<<per;
		
	}
};
int main()
{
	student ob;
	ob.accept();
	ob.calc();
	ob.disp();
	
}
