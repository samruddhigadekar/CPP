#include<iostream>
using namespace std;
class product
{
	public:
		int pid,qty,cnt;
		char pname[20];
		float price;
		void accept()
		{
			cout<<"enter product_id:";
			cin>>pid;
			cout<<"enter product_name:";
			cin>>pname;
			cout<<"enter quantity:";
			cin>>qty;
			cout<<"enter product_price:";
			cin>>price;
			static int c1;
			c1++;
			cnt=c1;
		}
		void display()
		{
			cout<<"product_id:"<<pid<<endl;
			cout<<"product_name:"<<pname<<endl;
			cout<<"product_qty:"<<qty<<endl;
			cout<<"product_price:"<<price<<endl;
			cout<<"product_coount:"<<cnt<<endl;
		}
};
int main()
{
	product ob,ob1,ob2;
	ob.accept();
	ob1.accept();
	ob2.accept();
	ob.display();
	ob1.display();
	ob2.display();
}
