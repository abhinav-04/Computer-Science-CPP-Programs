//classes
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class stud
{
	private:
	int rno,mrk[3],avg;         //rno and mrk are data members
	char nm[31];                //to make it not accesible to public side i.e. cannot be initialised by public side
	public:
	void read()         //read is member function
	{
		cout<<"\nEnter roll no.: ";
		cin>>rno;
		cout<<"\nEnter name: ";
		gets(nm);
		for(int i=0;i<=2;i++)
		{
			cout<<"\nEnter marks: ";
			cin>>mrk[i];
		}
	}
	void show();
	void calcavg();
};

	/*{
		cout<<"\nRno: "<<rno;
		cout<<"\nName: "<<mrk;
		cout<<"\nMarks: "<<mrk;
	} */
void stud::show()
{
	cout<<"\Rno: "<<rno;
	cout<<"\nName: "<<nm;
	for(int i=0;i<=2;i++)
	{
		cout<<"\nMarks: "<<mrk[i];
	}
	cout<<"\nAverage is: "<<avg;
}
void stud::calcavg()
{
	int s;
	s=0;
	for(int i=0;i<=2;i++)
	{
		s=s+mrk[i];
	}
	avg=s/i;
}
void main()
{
	clrscr();
	stud s[3];
	for(int i=0;i<=2;i++)
	{
		s[i].read();
		s[i].calcavg();
	}
	for(i=0;i<=2;i++)
	s[i].show();
	getch();
}
