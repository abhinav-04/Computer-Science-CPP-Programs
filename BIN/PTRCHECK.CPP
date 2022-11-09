#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<"\nInside func: ";
	cout<<x<<" "<<y;
}
void main()
{
	clrscr();
	int *x,*y,a,b;
	a=100;
	b=200;
	x=&a;
	y=&b;
	swap(*x,*y);
	cout<<"\nInside main: ";
	cout<<*x<<" "<<*y;
	getch();
}