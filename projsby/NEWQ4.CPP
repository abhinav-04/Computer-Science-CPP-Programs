#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
class student
{
	char name[31];
	char house[31];
	public:
	void input()
	{
	cout<<"Nter student's name: ";
	gets(name);
	cout<<"Nter student's house :";
	gets(house);
	}
	void display()
	{
	cout<<"\nName : "<<name;
	cout<<"\nHouse: "<<house;
	}
};
class marks:public student
{
	int eng,phy,chem,maths,cs;
	public:
	void read()
	{
		input();
		cout<<"Nter english marks   : ";
		cin>>eng;
		cout<<"Nter physics marks   : ";
		cin>>phy;
		cout<<"Nter chemistry marks : ";
		cin>>chem;
		cout<<"Nter maths marks     : ";
		cin>>maths;
		cout<<"Nter cs marks        : ";
		cin>>cs;
	}
	void show()
	{
		display();
		cout<<"\nEnglish marks   : "<<eng;
		cout<<"\nPhysics marks   : "<<phy;
		cout<<"\nChemistry marks : "<<chem;
		cout<<"\nMaths marks     : "<<maths;
		cout<<"\ncomputer science: "<<cs;
	}
};


void main()
{
	clrscr();
	marks m;
	m.read();
	m.show();
	getch();
}

