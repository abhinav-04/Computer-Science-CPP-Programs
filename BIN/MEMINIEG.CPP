#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//mem initialization
class demo
{
	const int counter;
	int &tot;
	int x;
	public:
	demo():counter(1),tot(x)     //here tot cannot be directly given 200
	{			    //so x is used
	x=200;
	cout<<counter<<" "<<tot;
	}
};
void main()
{
	clrscr();
	demo d;
	getch();
}
