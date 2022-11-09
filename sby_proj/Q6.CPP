#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
int agg,tot;
class student
{
	int rno,mrk[5];
	char name[31],*stream;
	public:
	void input()
	{
		cout<<"Nter student roll no : ";
		cin>>rno;
		cout<<"nter student name    : ";
		gets(name);
		cout<<"Nter Marks of five sub :\n";
		for(int i=0;i<5;i++)
		{
		cout<<"sub"<<i+1<<":";
		cin>>mrk[i];
		}
	}
	void findstream()
	{
		tot=0;
		for(int i=0;i<5;i++)
		{
			tot=tot+mrk[i];
		}
		agg=tot/5;
		if(agg>=96)
		stream="Computer Science";
		else if(agg>=91 && agg<=95)
		stream="Electronics";
		else if(agg>=86 && agg<=90)
		stream="Mechanical";
		else if(agg>=81 && agg<=85)
		stream="Electrical";
		else if(agg>=76 && agg<=80)
		stream ="Chemical";
		else
		stream="Civil";
	}
	void output()
	{
	cout<<"\nRno   : "<<rno<<"\tName  : "<<name<<"\tstream: "<<stream;
	}

};
void main()
{
	clrscr();
	student s[5];
	for(int i=0;i<5;i++)
	{
	s[i].input();
	}
	for(i=0;i<5;i++)
	{
	s[i].findstream();
	}
	for(i=0;i<5;i++)
	s[i].output();
	getch();
}