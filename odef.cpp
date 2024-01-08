//default constructor outside
#include<iostream>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
	emp();
	void disp()
	{
		cout<<"emp_no="<<eno<<endl;
		cout<<"emp_name="<<ename<<endl;
		cout<<"emp_sal="<<sal<<endl;
	}
};
emp::emp()
{
	cout<<"enter eno name and sal:";
	cin>>eno>>ename>>sal;
}
int main()
{
	emp ob;
	ob.disp();
	return 0;
}
