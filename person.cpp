#include<iostream>
using namespace std;
class person
{
	public:
		char pname[20],add[20];
		float sal,tax;
		void accept()
		{
			cout<<"enter name:";
			cin>>pname;
			cout<<"enter address:";
			cin>>add;
			cout<<"enter salary:";
			cin>>sal;
		}
		void calc()
		{
			if(sal<=20000)
			{
				tax=0;
			}
			else if(sal<=40000)
			{
				tax=sal*5/100;
			}
			else 
			{
				tax=sal*10/100;
			}
		}
		void disp()
		{
			cout<<"person name="<<pname<<endl;
			cout<<"address="<<add<<endl;
			cout<<"salary="<<sal<<endl;
			cout<<"tax="<<tax<<endl;
		}
};
int main()
{
	person ob;
	ob.accept();
	ob.calc();
	ob.disp();
	
}
