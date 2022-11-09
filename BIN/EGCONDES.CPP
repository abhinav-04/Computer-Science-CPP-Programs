#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class constr
{
	int x;
	public:
	constr() //default constructor
	{
	x=0;
	}
	constr(int n) //parametrised constructor
	{
	x=n;
	}
	constr(constr &c) //copy constructor
	{
	x=c.x;
	}
	void show()
	{
	cout<<"\nx: "<<x;
	}
	~constr()         //tilde
	{
		cout<<"Destructor invoked";
	}
};
void main()
{ 	clrscr();
	constr c;
	c.show();
	constr c1(100);
	c1.show();
	constr c2(c1);
	c2.show();
	constr c3=c;
	c3.show();
	getch();
}
