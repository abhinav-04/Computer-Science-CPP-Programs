#define N 100
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int requ(char a[N],char b[N])
{	int x;
	x = strcmp(a,b);
	if (x==0)
	return(0);
	if(x<0)
	return(-1);
	else
	return(1);
	}
void main()
{       clrscr();
	char p[N],q[N];
	cout<<"\nEnter two char arguements";
	gets(p);
	gets(q);
	cout<<requ(p,q);
	getch();
	}

