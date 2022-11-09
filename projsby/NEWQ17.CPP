#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
class person
{
	char nm[31];
	long income;
	float tax;
	public:
	void input()
	{
		cout<<"Nter name :";
		gets(nm);
		cout<<"Nter the total income: ";
		cin>>income;
	}
	void calc()
	{
		if(income>=1 && income<=35000)
			tax=0;
		else if(income>=35001 && income<=60000)
			tax=.20*income;
		else if(income>=60001 && income<=120000)
			tax=.30*income;
		else
			tax=.40*income;
	}
	void show()
	{
		cout<<"\n------------------------------";
		cout<<"\nName      Income      tax";
		cout<<"\n------------------------------\n";
		cout<<nm<<"     "<<income<<"    "<<tax;
	}
};
void main()
{
	clrscr();
	person p;
	p.input();
	p.calc();
	p.show();
	getch();
}