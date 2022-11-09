#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class facto
{
	int f;
	public:
	facto(int n)
	{
		f=1;
		for(int i=1;i<=n;i++)
		f=f*i;
	}
	void show()
	{
		cout<<"factorial is: "<<f;
	}
};
void main()
{
	clrscr();
	facto ft(5);
	ft.show();
	getch();
}

