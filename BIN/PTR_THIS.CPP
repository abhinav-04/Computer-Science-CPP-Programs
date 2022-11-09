#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class per
{
	int age;
	char *nm;
	public:
	per(char *s,int ag)
	{
		strcpy(nm,s);
		age=ag;
	}
	per& greatest(per &p)
	{
		if(p.age>age)
		return p;
		else
		return *this; //here cannot use either this->age because it send
			     //just the age but we want both name and age also we
			     //can't use p1 directly because p1 is only defined in main
			    //so we use *this because it points to both age and name

	}
	void show()
	{
		cout<<"\nName: "<<nm<<"\nAge: "<<age;
	}
};
void main()
{
	clrscr();
	per p1("leo",8);
	per p2("elisa",18);
	per p3("alexa",2);
	per p("\0",0);
	p=p1.greatest(p2);
	p.show();
	p=p2.greatest(p2);
	getch();
}