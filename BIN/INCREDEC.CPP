#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int a,b;
	cout<<"\nenter any value of a: ";
	cin>>a;
	cout<<"incremented prefix value is: "<<++a<<endl;
	cout<<"incremented suffix value is: "<<a++<<endl;
	b=5+a;
	cout<<"sum is: "<<b;
	getch();
}