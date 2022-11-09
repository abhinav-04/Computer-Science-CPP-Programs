//recurssion using of same function within itself
#include<iostream.h>
#include<conio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
	}
void main()
{
	clrscr();
	int no;
	cout<<"\nenter any num";
	cin>>no;
	cout<<fact(no);
	getch();
	}