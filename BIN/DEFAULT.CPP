//default values
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void sim(int p=1000,float r=5,int t=4)
{
	int si;
	si=(p*r*t)/100;
	cout<<si;
}
void main()
{ 	clrscr();
	sim();
	getch();
}
