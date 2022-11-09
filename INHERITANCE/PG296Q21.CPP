#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	int Rno;
	char Sname[21];
	float marks;
protected:
	void result(){}
public:
	student(){}
	void enroll(){}
	void display(){}
};
class teacher
{
	long tcode;
	char tname[20];
	protected:
		float salary;
	public:
		teacher(){}
		void enter(){}
		void show(){}
};
class course:public student,private teacher
{
	long ccode[10];char coursename[50];
	char startdate[8],enddate[8];
	public:
		course(){}
		void commence(){}
		void cdetail(){}
};
void main()
{
	clrscr();
	course c;
	c.enroll();
	c.display();
	getch();
}

