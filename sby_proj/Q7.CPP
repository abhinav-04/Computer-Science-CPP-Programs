#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
struct house
{
	char nm[31],house[31];
	long amt;
};
void main()
{
	clrscr();
	house h[5];
	for(int i=0;i<=4;i++)
	{
		cout<<"nter student name  : ";
		gets(h[i].nm);
		cout<<"Nter House name    : ";
		gets(h[i].house);
		cout<<"Nter the amount collected : ";
		cin>>h[i].amt;
	}
	cout<<"\nNAME\t\tHouse\t\tAmount collected\n";
	for(i=0;i<5;i++)
	{
	cout<<h[i].nm<<"\t\t"<<h[i].house<<"\t\t"<<h[i].amt<<"\n";
	}
	getch();
}