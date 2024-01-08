// default constructor  
#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
	emp()
	{
		cout<<"enter eno ename and sal:";
		cin>>eno>>ename>>sal;
	}
	void disp()
	{
		cout<<"emp_no="<<eno<<endl;
		cout<<"emp_name="<<ename<<endl;
		cout<<"emp_sal="<<sal<<endl;
	}
};
int main()
{
	emp ob;
	ob.disp();
}
