#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int circle(int r)
{	float a,pi=3.14;
	a=pi*r*r;
	return(a);
	}
int rectangle(int l,int b)
{	int a;
	a=l*b;
	return(a);
	}
int square(int s)
{       int a;
	a=s*s;
	return(a);
	}
int triangle(int a,int b,int c)
{	int A,s;
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	return(A);
	}
void main()
{	clrscr();
	float R,A=3,B=4,C=5,L,BA,S,ch;
	cout<<"\nEnter 1 for circle";
	cout<<"\nEnter 2 for rect";
	cout<<"\nEnter 3 for square";
	cout<<"\nEnter 4 for triangle";
	cout<<"\nEnter 0 for exit";
	//cin>>ch;
	cout<<triangle(A,B,C)       /*	switch(ch)
case 1: cout<<"\nenter radius of circle";
	cin>>R;
case 2:   */


