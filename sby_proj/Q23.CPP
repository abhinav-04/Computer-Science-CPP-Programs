#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class phone
{
	char *nm,*pn;
	public:
	phone()
	{
		nm=new char[31];
		pn=new char[11];
	}
	void read()
	{
		cout<<"Nter name     : ";
		gets(nm);
		cout<<"Nter phone no : ";
		gets(pn);
	}
	void showall()
	{
		cout<<"\nName :"<<nm<<"	Phone : "<<pn;
	}
	void show()
	{
		cout<<"\nphone no is : " <<pn;
	}
	char *retnm()
	{
		return nm;
	}
}s[5];
void store()
{
	fstream fin;
	fin.open("phone.dat",ios::binary|ios::out|ios::trunc);
	int rec=5,i=0;
	while(i<rec)
	{
	      s[i].read();
	      fin.write((char*)&s[i],sizeof(s[i]));
	      i++;
	}
}

void search()
{
	fstream fin;
	fin.open("phone.dat",ios::binary|ios::in);
	int i=0,f=-1;
	char *nam;
	while(fin.read((char*)&s[i],sizeof(s[i])))
	{
	s[i].showall();
	i++;
	}
	fin.close();

	cout<<"\n\nNter the name 2 surch the ph.no. :";
	gets(nam);
	nam[strlen(nam)]='\0';
	i=0;
	fin.open("phone.dat",ios::binary|ios::in);
	fin.seekg(ios::beg);
	while(fin.read((char*)&s[i],sizeof(s[i])))
	{
		if(strcmp(s[i].retnm(),nam)==0)
		{
		f=i;
		break;
		}
		else
		{
		f=-1;
		}
		i++;
	}
	if(f>-1)
	s[f].show();
	else
	cout<<"\nNot found";
	fin.close();
}


void main()
{
	clrscr();
	store();
	search();
	getch();
}