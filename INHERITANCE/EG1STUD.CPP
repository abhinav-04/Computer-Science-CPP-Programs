#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	char scnm[31];
	protected:
	int rno;
	char nm[31];
	public:
	void read()
	{
		cout<<"\nenter rno: ";
		cin>>rno;
		cout<<"\nEnter name: ";
		gets(nm);
	}
	void show()
	{
		cout<<"\nRbo: "<<rno;
		cout<<"\nName: "<<nm;
	}
};
class studinfo
{
	protected:
	char house[31];
	public:
	void readinfo()
	{
		cout<<"\nEnter house: ";
		gets(house);
	}
	void showinfo()
	{
		cout<<"\nHouse: "<<house;
	}
};
class marks : public stud,public studinfo
{
	int mrk;
	public:
	void readmrk()
	{
		read();
		readinfo();
		cout<<"\nEnter marks: " ;
		cin>>mrk;
	}
	void showmrk()
	{
		show();
		showinfo();
		cout<<"\nMarks: ";
		cout<<mrk;
	}
};
void main()
{
	clrscr();
	marks m;
	m.readmrk();
	m.showmrk();
	getch();
}