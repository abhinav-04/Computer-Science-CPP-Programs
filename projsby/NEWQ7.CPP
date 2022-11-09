#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
class student
{
	int rno;
	char name[31];
	public:
	void getdata()
	{
		cout<<"Nter roll number : ";
		cin>>rno;
		cout<<"Nter name        : ";
		gets(name);
	}
	void printdata()
	{
		cout<<"\nRoll number : "<<rno;
		cout<<"\nStudent name: "<<name;
	}
};
class marks:public student
{
	int mrk[5];
	public:
	void inputdata()
	{
		getdata();
		for(int i=0;i<5;i++)
		{
			cout<<"Enter marks of sub :"<<i+1<<" : ";
			cin>>mrk[i];
		}
	}
	void outdata()
	{
		printdata();
		cout<<"\nSubject marks are : " ;
		cout<<"\n  Eng  Maths  Phy  chem   Cs\n";
		for(int i=0;i<5;i++)
		{
			cout<<"  "<<mrk[i]<<"  ";
		}
	}
};


void main()
{
	clrscr();
	marks m;
	m.inputdata();
	m.outdata();
	getch();
}

