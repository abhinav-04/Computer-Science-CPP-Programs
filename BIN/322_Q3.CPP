# define N 100
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char a[N];
	cout<<"\nenter the string ";
	gets(a);
	for(int i=0;a[i]!='\0';i++)
{	if (a[i]>='A'&& a[i]<='Z')
	a[i]=a[i]+32;
	else
	a[i]=a[i]-32;  }
	cout<<"\nThe new string is :";
	puts(a);
	getch();
	}


