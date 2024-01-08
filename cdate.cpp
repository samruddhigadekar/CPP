//create class date with data member using default and parameterized constructoer
#include<iostream>
using namespace std;
class date
{
	public:
		int dd,mm,yy;
		date()
		{
			dd=21;
			mm=02;
			yy=2005;
		}
		date(int dd,int mm,int yy)
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void disp()
		{
			if(mm==1)
			    cout<<"\n date="<<dd<<"-JAN-"<<yy;
			if(mm==2)
			    cout<<"\n date="<<dd<<"-FEB-"<<yy;
			if(mm==3)
			    cout<<"\n date="<<dd<<"-MAR-"<<yy;
			if(mm==4)
			    cout<<"\n date="<<dd<<"-APR-"<<yy;
			if(mm==5)
			    cout<<"\n date="<<dd<<"-MAY-"<<yy;
			if(mm==6)
			    cout<<"\n date="<<dd<<"-JUNE-"<<yy;
			if(mm==7)
			    cout<<"\n date="<<dd<<"-JULLY-"<<yy;
			if(mm==8)
			    cout<<"\n date="<<dd<<"-OUG-"<<yy;
			if(mm==9)
			    cout<<"\n date="<<dd<<"-SEP-"<<yy;
			if(mm==10)
			    cout<<"\n date="<<dd<<"-OCT-"<<yy;    
			if(mm==11)
			    cout<<"\n date="<<dd<<"-NOV-"<<yy;
			if(mm==12)
			    cout<<"\n date="<<dd<<"-DEC-"<<yy;
		}
};
int main()
{
	date ob;
	ob.disp();
	date ob1(14,11,2020);
	ob1.disp();
	
}
