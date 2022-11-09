#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	int rno,mrk;
	char sname[31];
	public:
	void read()
	{
		cout<<"\nEnter rno: ";
		cin>>rno;
		cout<<"\nEnter stud name: ";
		gets(sname);
		cout<<"\nenter marks: ";
		cin>>mrk;
	}
	void showstud()
	{
		cout<<"\nRoll no.: "<<rno;
		cout<<"\nStudent name: "<<sname;
		cout<<"\nStudent marks: "<<mrk;
	}
	int ret_mrk()
	{
		return mrk;
	}
};
void find_topper()
{
	fstream fil;
	stud s;
	fil.open("mystud.dat",ios::binary|ios::in|ios::out);
	int max=0;
	while(fil.read((char*)&s,sizeof(s)))
	{
		if(max<s.ret_mrk())
		{
			max=s.ret_mrk();
		}
	}
	cout<<"\nTopper marks: "<<max;
	fil.close();
}
void show()
{
	fstream fil;
	fil.open("mystud.dat",ios::binary|ios::in|ios::out);
	stud s;
	while(fil.read((char*)&s,sizeof(s)))
	{
		s.showstud();
	}
	fil.close();
}
void append()
{
	fstream fil;
	fil.open("mystud.dat",ios::binary|ios::out);
	stud s;
	int nor;
	cout<<"\nNo. of records: ";
	cin>>nor;
	for(int i=0;i<nor;i++)
	{
		s.read();
		fil.write((char*)&s,sizeof(s));
	}
	fil.close();
}

void main()
{    	clrscr();
	append();
	cout<<"\ncontent: ";
	show();
	find_topper();
	getch();
}



