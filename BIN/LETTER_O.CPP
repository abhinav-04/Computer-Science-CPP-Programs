#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int a;
	char ch;
	cout<<"\nenter your input: ";
	cin>>ch;
	if((ch>='A')&&(ch<='Z'))
{	cout<<"\nyour input is letter";	}
	if((ch>='a')&&(ch<='z'))
{	cout<<"\nyour input is letter";	}
	else if((ch>='1')&&(ch<='9'))
{	cout<<"\nyour input is digit";	}
	getch();
}