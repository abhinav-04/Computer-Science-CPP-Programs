//using function overloading
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void print()
{
	int not=25;
	char ch='@';
	for(int i=1;i<=not;i++)
	{
		cout<<ch;
	}
}
void print(int not)
{   	char ch='#';
	for(int i=1;i<=not;i++)
	cout<<ch;
}
void print(int not,char ch)
{
	for(int i=1;i<=not;i++)
	cout<<ch;
}
void main()
{
	clrscr();
	int not;
	char c;
	cout<<"\nPrint char according to prog choice\n";
	print();
	cout<<"\nEnter number of times: ";
	cin>>not;
	print(not);
	cout<<"\nEnter the char to repeat: ";
	cin>>c;
	cout<<"\nEnter the number of times";
	cin>>not;
	print(not,c);
	getch();
}