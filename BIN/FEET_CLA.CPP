#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class dist
{
	int f,i;
	public:
	void get()
	{
		cout<<"\nEnter feet: ";
		cin>>f;
		cout<<"\nenter inches";
		cin>>i;
	}
	dist sum(dist d1,dist d2)
	{
		dist d3;
		d3.f=d1.f+d2.f+(d1.i+d2.i)/12;
		d3.i=(d1.i+d2.i)%12;
		return d3;
	}
	void show()
	{
		cout<<"\ntotal are: "<<f<<" "<<i;
	}
};
void main()
{
	clrscr();
	dist dt1,dt2,dt3;
	dt1.get();
	dt2.get();
	dt3=dt1.sum(dt1,dt2);
	dt3.show();
	getch();
}
