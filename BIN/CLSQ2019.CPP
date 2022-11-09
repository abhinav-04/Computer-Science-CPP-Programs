#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class graph
{
	private:
	int xunit,yunit;
	char type[20];
	void assigntype()
	{
		if((xunit==0)||(yunit==0))
		strcpy(type,"None");
		else
		{
			if(xunit>yunit)
			strcpy(type,"Bar");
			else if(xunit<=yunit)
			strcpy(type,"Line");
		}
	}
	public:
	void InXY()
	{
		cout<<"\nEnter value of Xunit: ";
		cin>>xunit;
		cout<<"\nEnter value of yunit: ";
		cin>>yunit;
		assigntype();
	}
	void OutXY()
	{
		cout<<"\nThe value of Xunit: "<<xunit;
		cout<<"\nThe value of yunit: "<<yunit<<endl;
		cout<<type;
	}
};
void main()
{
	clrscr();
	graph g;
	g.InXY();
	g.OutXY();
	getch();
}
