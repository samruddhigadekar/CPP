#include<iostream>
using namespace std;
class number
{
	public:
		void display()
		{
			static int cnt;
			cnt++;
			cout<<"cout "<<cnt<<endl;
		}
};
int main()
{
	number ob,ob1,ob2;
	ob.display();
	ob.display();
	ob1.display();
	ob1.display();
	ob2.display();
	ob2.display();
}
