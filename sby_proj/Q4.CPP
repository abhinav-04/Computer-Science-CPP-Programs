#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
class twodates
{

	int dd,mm,yy;
	public:
	void read()
	{
		cout<<"Nter dd mm yy ";
		cin>>dd>>mm>>yy;
	}
	void show()
	{
		cout<<dd<<"/"<<mm<<"/"<<yy;
	}
	void compare(twodates dt1,twodates dt2)
	{
		if(dt1.yy<dt2.yy)
		{
		 cout<<"\nThe later date is "<<dt2.dd<<"/"<<dt2.mm<<"/"<<dt2.yy;
		}
		else if(dt1.mm <dt2.mm)
		{
		 cout<<"\nThe later date is "<<dt2.dd<<"/"<<dt2.mm<<"/"<<dt2.yy;
		}
		else if(dt1.dd<dt2.dd)
		{
		 cout<<"\nThe later date is "<<dt2.dd<<"/"<<dt2.mm<<"/"<<dt2.yy;
		}
		else
		{
		 cout<<"\nThe later date is "<<dt1.dd<<"/"<<dt1.mm<<"/"<<dt1.yy;
		}
	}
};

void main()
{
	clrscr();
	twodates d1,d2;
	d1.read();
	d2.read();
	d1.compare(d1,d2);
	getch();
}