#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void print(char ch,int n=2)
{	for(int i=0;i<n;i++)
	cout<<ch;
	}
void main()
{       clrscr();
	char a;int b;
	cout<<"enter the character";
	cin>>a;
	cout<<"the integer: ";
	cin>>b;
	print(a,b);
	getch();
	}