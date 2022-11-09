#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int *big(int &x,int &y)
{
	if(x>y)
	return &x;
	else
	return &y;
}
void main()
{
	clrscr();
	int x,y;
	x=200;
	y=100;
	cout<<*big(x,y);
	getch();
}