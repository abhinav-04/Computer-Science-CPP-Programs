#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
class student
{
	char name[31],house[31];
	int amt;
	public:
	void input()
	{
		cout<<"Nter name : ";
		gets(name);
		cout<<"Nter house : ";
		gets(house);
		cout<<"Nter amount collected: ";
		cin>>amt;
	}
	void show()
	{
		cout<<name<<"\t\t\t"<<house<<"\t\t"<<amt;
	}
}s[5];
void append()
{
	fstream f;
	f.open("student.txt",ios::out|ios::binary);
	int rec;
	cout<<"Ntre how many records: ";
	cin>>rec;
	for(int i=0;i<rec;i++)
	{
		s[i].input();
		f.write((char*)&s[i],sizeof(s[i]));
	}
	f.close();
}
void view()
{
	fstream f;
	int i=0;
	f.open("student.txt",ios::in|ios::binary);
	cout<<"\nName of the student\tHouse\tAmount Collected";
	cout<<"\n------------------------------------------------\n";
	while(f.read((char*)&s[i],sizeof(s[i])))
	{
		s[i].show();
		cout<<endl;
	}
	cout<<"\n------------------------------------------------\n";
}


void main()
{
	clrscr();
	append();
	view();
	getch();
}

