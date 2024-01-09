//parameterized constructor inside
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
	emp(int eno,char ename[20],float sal)
	{
		this->eno=eno;
		strcpy(this->ename,ename);
		this->sal=sal;
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
	emp ob(101,"om",120.4);
	ob.disp();
	
}
