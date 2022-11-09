#include<iostream.h>
#include<conio.h>
void main()
{
	char a,d;
	int b,c;
	clrscr();
	cout<<"\nput a character to show its ASCII value: ";
	cin>>a;
	b=int(a);
	cout<<"\nASCII VALUE IS: "<<b<<endl;
	cout<<"\put a number to see its ASCII character: ";
	cin>>c;
	d=char(c);
	cout<<"\nASCII CHARACTER IS: "<<d;
	getch();
}
