#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		
	void accept()
	{
		cout<<"\n enter no:";
		cin>>eno;
		cout<<"\n enter name:";
		cin>>ename;
		cout<<"\n enter salary:";
		cin>>sal;
	}
	void disp()
	{
		cout<<"\n emp_no="<<eno;
		cout<<"\n emp_name="<<ename;
		cout<<"\n emp_sal="<<sal;
	}
};
int main()
{
	emp ob;
	ob.accept();
	ob.disp();
	
}
