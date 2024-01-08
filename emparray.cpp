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
		cout<<"enter emp_no:";
		cin>>eno;
		cout<<"enter emp_name:";
		cin>>ename;
		cout<<"enter emp_sal:";
		cin>>sal;
	}
	void disp()
	{
		cout<<"emp no:"<<eno<<endl;
		cout<<"emp name:"<<ename<<endl;
		cout<<"emp sal:"<<sal<<endl;
	}
};
int main()
{
	emp ob[5];
	for(int i=0;i<3;i++)
	{
		ob[i].accept();
	}
	for(int i=0;i<3;i++)
	{
		ob[i].disp();
	}
}
