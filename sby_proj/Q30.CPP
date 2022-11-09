#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
class item
{
	char itnm[11];
	int qty,unitpr,amt;
	public:
	void read()
	{
		cout<<"Nter item name : ";
		gets(itnm);
		cout<<"Nter quantity : ";
		cin>>qty;
		cout<<"Nter unit price : ";
		cin>>unitpr;
		amt=qty*unitpr;

	}
	int returnamt()
	{
	return amt;
	}
	void show()
	{
		cout<<"\n"<<itnm<<"      "<<qty<<"       "<<unitpr<<"      "<<amt;
	}
}it[2];
void main()
{
	clrscr();
	int tot=0;
	for(int i=0;i<=1;i++)
	{
		it[i].read();
	}
	cout<<"\n--------------------------------------";
	cout<<"\nitemname item qty  unit price   amt ";
	cout<<"\n--------------------------------------";
	for(i=0;i<=1;i++)
	{
	it[i].show();
	tot=tot+it[i].returnamt();
	}
	cout<<"\n                               total : "<<tot;

	getch();
}