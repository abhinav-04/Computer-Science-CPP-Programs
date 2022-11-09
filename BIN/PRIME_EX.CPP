#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void func(int a,int b,int d,int e)
{	for(int i=b;i<=a;i*=i)
{	d=b/i;
	e+=d;		}
	cout<<"exponent of prime number added by the user"<<e;
}
void main()
{	clrscr();
	int P,N,c,sum=0;
	cout<<"enter the factorial whose prime exponent you wanna see";
	cin>>N;
	cout<<"enter the prime number whose multiple you wanna check";
	cin>>P;
	func(P,N,c,sum);
	getch();
	}