//passing variables or constant through data member
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class add
{
	int n1,n2,tot;    //data members
	public:
	void init(int a,int b)      //member function
	{
		n1=a;
		n2=b;
	}
	void calc()
	{
		tot=n1+n2;
	}
	void show()
	{
		cout<<"\nsum of "<<n1<<" and "<<n2<<" = "<<tot;
	}

};
void main()
{
	clrscr();
	add a;
	a.init(10,20);
	a.calc();
	a.show();
	getch();
}


