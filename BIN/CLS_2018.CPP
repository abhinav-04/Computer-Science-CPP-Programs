#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define pi 3.14
class container
{
	private:
	float rad,vol,h;
	int type;      //1 for cone 2 for cylinder
	void calvol()
	{
		if(type==1)
		{
			vol=(pi*rad*rad*h)/3;
		}
		else if(type==2)
		{
			vol=pi*rad*rad*h;
		}
		else
		{
			cout<<"\nWrong choice";
		}
	}
	public:
	void getvalues()
	{
		cout<<"\nEnter Radius: ";
		cin>>rad;
		cout<<"\nEnter height: ";
		cin>>h;
		cout<<"\nEnter type: "<<endl;
		cout<<"\n1 for cone"<<endl<<"\n2 for cylinder";
		cin>>type;
		calvol();
	}
	void showall()
	{
		cout<<"\nThe radius is: "<<rad;
		cout<<"\nThe height is: "<<h;
		cout<<"\nIt is of type: ";
		if(type==1)
		cout<<"cone";
		else if(type==2)
		cout<<"cylinder";
		cout<<"\nVol of container: "<<vol;
	}
};
void main()
{
	clrscr();
	container a;
	a.getvalues();
	a.showall();
	getch();
}

