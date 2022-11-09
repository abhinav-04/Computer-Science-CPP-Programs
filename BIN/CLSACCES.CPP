#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	int rno,mrk;
	char name[21];
	public:
	void read()
	{
		cout<<"\nEnter Student roll no.: ";
		cin>>rno;
		cout<<"\nEnter Name: ";
		gets(name);
		cout<<"\nEnter marks: ";
		cin>>mrk;
	}
	void show()
	{
		cout<<"\nRoll no.: "<<rno;
		cout<<"\nName: "<<name;
		cout<<"\nMarks: "<<mrk;
	}
	int ret_rno()
	{
		return rno;
	}
};
void main()
{
	clrscr();
	stud s[3];
	int srno;
	for(int i=0;i<3;i++)
	{
		s[i].read();
	}
	cout<<"\nEnter the rno to search: ";
	cin>>srno;
	for(i=0;i<3;i++)
	{
		if(srno==s[i].ret_rno())
		{
			s[i].show();
		}
	}
	getch();
}
