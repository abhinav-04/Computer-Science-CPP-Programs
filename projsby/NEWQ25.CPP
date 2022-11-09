#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class student
{
	char *nm,*phone;
	public:
	void read()
	{
	cout<<"Nter stud name: ";
	gets(nm);
	cout<<"Nter phone num : ";
	gets(phone);
	}
	void show()
	{
	cout<<"\nStud name : "<<nm<<" Stud phone num : "<<phone;
	}
	char *retname()
	{
		return nm;
	}
}s[5];

void append()
{
	fstream f1("stud.dbf",ios::binary|ios::out);
	for(int i=0;i<=4;i++)
	{
		s[i].read();
		f1.write((char*)&s[i],sizeof(s[i]));
	}
	f1.close();
}
void findphone()
{
	fstream fin;
	fin.open("stud.dbf",ios::in|ios::binary);
	int i=0,f=0;
	char *nam;
	nam=new char[31];
	cout<<"\nNter the name to find the phone number\n";
	gets(nam);
	while(!fin.eof())
	{
		fin.read((char*)&s[i],sizeof(s[i]));
		if(strcmp(nam,s[i].retname())==0)
		{
		s[i].show();
		f=1;
		break;
		}
		else
		{
		f=0;
		}
		i++;
		if(i==5) break;
	}
	if(f==0)
	cout<<"\n\nNot found in directory.!!\n\n";
	fin.close();
}



void main()
{
	clrscr();
	append();
	findphone();
	getch();
}