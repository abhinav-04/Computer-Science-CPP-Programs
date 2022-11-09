#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class date
{
	int dd,mm,yy;
	public:
	void read()
	{
		cout<<"\nEnter date in dd mm yy form";
		cin>>dd>>mm>>yy;
	}
	date newdate(date dt,int nod)
	{
		date d;
		d.dd=dt.dd+nod;
		d.mm=dt.mm;
		d.yy=dt.yy;
		return d;
	}
	void show()
	{
	cout<<"\nThe date is: "<<dd<<"/"<<mm<<"/"<<yy;
	}
};
void main()
{
	clrscr();
	date olddate,d2;
	olddate.read();
	int nod;
	cout<<"\nEnter thenumber of days: ";
	cin>>nod;
	d2=olddate.newdate(olddate,nod);
	d2.show();
	getch();
}
