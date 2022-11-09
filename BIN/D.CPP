#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b,c,i;
	cout<<"\nENTER A NUMBER WHOSE ROOT YOU WANT FIND IS PRIME OR NOT:"<<endl;
	cin>>a;
	b=sqrt(a);
	cout<<"\nSQUARE ROOT IS"<<b<<endl;
	for(i=1;i<=b;i++)
{	if(b%i==0)
	c++;}
	if(c==2)
	cout<<"prime";
	else
	cout<<"not prime";
	getch();

	}