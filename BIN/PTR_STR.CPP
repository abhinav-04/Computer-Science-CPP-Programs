#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct emp
{
	int eno;
}*e;

void main()
{
	clrscr();
	cout<<"\nEnter emp no.: ";
	cin>>e->eno;
	cout<<"\nEmo no. is: "<<e->eno;
	getch();
}
