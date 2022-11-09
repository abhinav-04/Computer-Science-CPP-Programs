#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

class student
{
	char nm[31],ph[10];
	public:
	void read()
	{
		cout<<"Nter name         : ";
		gets(nm);
		cout<<"Nter phone number : ";
		gets(ph);
	}
	void show()
	{
		cout<<endl<<nm<<" "<<ph;
	}
	char* ret_nm()
	{
		return nm;
	}
}s[5];

void append()
{
	fstream f;
	f.open("std.txt",ios::out|ios::binary);
	for(int i=0;i<3;i++)
	{
		s[i].read();
		f.write((char*)&s[i],sizeof(s[i]));
	}
	f.close();
}
void display()
{
	fstream f1;
	int i=0;
	f1.open("std.txt",ios::in|ios::binary);
	while(f1.read((char*)&s[i],sizeof(s[i])))
	{
		s[i].show();
		i++;
	}
	f1.close();
}
void search()
{
	fstream f2;
	int i=0;
	char nam[31];
	f2.open("std.txt",ios::in|ios::binary);
	char f=1;
	cout<<"\nNter the name to disp the phno. : ";
	gets(nam);
	while(f2.read((char*)&s[i],sizeof(s[i])))
	{
		if(strcmpi(nam,s[i].ret_nm())==0)
		{
			s[i].show();
			break;
		}
		else
		{
			f=0;
		}
		i++;
	}
	if(f==0)
	{
		cout<<"\nNot found in the directory";
	}
	f2.close();
}

void main()
{
	clrscr();
	append();
	display();
	search();
	getch();
}

