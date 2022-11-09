//dfh revision all in one
//for better results open toys.dat and delete all its contents
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdio.h>
class toys
{
	int tid;
	char toy[20],status[20];
	float mrp;
	public:
	void getinstock()
	{
		cout<<"\nEnter id: ";
		cin>>tid;
		cout<<"\nEnter toy name: ";
		gets(toy);
		cout<<"\nEnter toy status(on offer/no offer): ";
		gets(status);
		cout<<"\nEnter rate: ";
		cin>>mrp;
	}
	void view()
	{
		cout<<":"<<tid<<":"<<toy<<":"<<status<<":"<<mrp;
	}
	char *seeoffer()
	{
		return status;
	}
	void modify()
	{
		cout<<"\nEnter status: ";
		gets(status);
	}
	char *toynm()
	{
		return toy;
	}
};
void append()
{
	fstream fin;
	fin.open("toys.dat",ios::binary|ios::in|ios::out);
	toys t;
	char ans='y';
	while(ans=='y')
	{
	       t.getinstock();
	       fin.write((char*)&t,sizeof(t));
	       cout<<"\nWanna continue: ";
	       cin>>ans;
	}
	fin.close();
}
void show()
{
	toys t;
	fstream fin;
	fin.open("toys.dat",ios::binary|ios::out|ios::in);
	while(fin.read((char*)&t,sizeof(t)))
	{
		t.view();
	}
	fin.close();
}
void onoffer()//searching part of question
{
	fstream fin;
	fin.open("toys.dat",ios::binary|ios::in|ios::out);
	toys t;
	while(fin.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(t.seeoffer(),"on offer")==0)
		{
			t.view();
		}
	}
	fin.close();
}
void changeoffer()//modify
{
	toys t;int pos;
	fstream fin;
	fin.open("toys.dat",ios::binary|ios::in|ios::out);
	while(fin.read((char*)&t,sizeof(t)))
	{
		if(strcmpi("on offer",t.seeoffer())==0)
		{
			pos=fin.tellg();
			fin.seekp(pos-sizeof(t));
			t.modify();
			fin.write((char*)&t,sizeof(t));
		}
	}
	fin.close();
}
void deleterec()
{
	fstream fin,fin1;
	char tnm[20];
	toys t;
	fin.open("toys.dat",ios::binary|ios::in|ios::out);
	fin1.open("toynew.dat",ios::binary|ios::out);
	cout<<"\nEnter the toy name to delete: ";
	gets(tnm);
	while(fin.read((char*)&t,sizeof(t)))
	{
		if(strcmpi(tnm,t.toynm())==0)
		{
			cout<<"\nDeleting" ;
			t.view();
		}
		else
		{
			fin1.write((char*)&t,sizeof(t));
		}
	}
	fin.close();
	fin1.close();
	remove("toys.dat");
	rename("toynew.dat","toys.dat");
}
void main()
{
	clrscr();
	append();
	show();
	onoffer();
	changeoffer();
	cout<<"\nAfter modification: ";
	show();
	deleterec();
	cout<<"\nAfter Deletion: ";
	show();
	getch();
}