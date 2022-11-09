#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
const int rec=5;
int i;
struct country
{
	char cnm[31],capi[31];
}c[3];
void add()
{
	fstream fin;
	fin.open("country.dat",ios::binary|ios::out);
	while(i<rec)
	{
		cout<<"Nter country name  : ";
		gets(c[i].cnm);
		cout<<"Nter capital name  : ";
		gets(c[i].capi);
		fin.write((char*)&c[i],sizeof(c[i]));
		i++;
	}
}

void find()
{
	fstream fin;
	fin.open("country.dat",ios::binary|ios::in);
	int f=0;
	cout<<"\ncountry name   Capital name\n";
	cout<<"\n---------------------------------\n";
	for(i=0;i<rec;i++)
	cout<<"\n"<<c[i].cnm<<"\t\t"<<c[i].capi;
	cout<<"\n--------------------------------\n";
	char cname[31];
	cout<<"\n\nNter the country name 2 surch the capital :";
	gets(cname);
	i=0;
	while(i<rec)
	{
		fin.read((char*)&c[i],sizeof(c[i]));
		if(strcmp(c[i].cnm,cname)==0)
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
	if(f>0)
	cout<<"capital is : "<<c[f].capi;
	else
	cout<<"\ncapi Not found";
	fin.close();
}


void main()
{
	clrscr();
	add();
	find();
	getch();
}