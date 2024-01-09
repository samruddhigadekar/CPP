//accept value from user and use parametrized constructor
#include<iostream>
using namespace std;
#include<string.h>
class emp
{
	public:
		int eno;
		char ename[10];
		float sal;
		emp(int eno,char ename[30],float sal)
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
	int eno;
	char name[30];
	float s;
	cout<<"enter emp no,name and sal:";
	cin>>eno>>name>>s;
	emp ob(eno,name,s);
	ob.disp();
	
}
