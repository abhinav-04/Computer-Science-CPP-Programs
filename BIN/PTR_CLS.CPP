#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	int rno;
	public:
	void read()
	{
		cout<<"\nenter roll no: ";
		cin>>rno;
	}
	void show()
	{
		cout<<"\nRno: "<<rno;
	}
};
void main()
{
	clrscr();
	stud *s;
	s->read();
	s->show();
	getch();
}
