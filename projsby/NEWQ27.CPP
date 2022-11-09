#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

const int rec=5;
int i;
class country
{
	char cnm[31],capi[31];
	public:
	void input()
	{
		cout<<"Enter country name : ";
		gets(cnm);
		cout<<"Nter capital name  : ";
		gets(capi);
	}
	void view()
	{
		cout<<"\nCountry Name : "<<cnm;
		cout<<"\nCapital Name : "<<capi;
	}
	char *ret_con()
	{
		return cnm;
	}
}c[3];

void add()
{
	fstream fin;
	fin.open("quiz.dbf",ios::binary|ios::out);
	int rec;
	cout<<"How many records: ";
	cin>>rec;

	while(i<rec)
	{
		c[i].input();
		fin.write((char*)&c[i],sizeof(c[i]));
		i++;
	}
}
void show()
{
	fstream fin;
	fin.open("quiz.dbf",ios::binary|ios::in);
	int i=0;
	cout<<"\ncountry name   Capital name\n";
	cout<<"\n---------------------------------\n";
	while(fin.read((char*)&c[i],sizeof(c[i])))
	{
		c[i].view();
		i++;
	}
	cout<<"\n----------------------------------\n";
	fin.close();
}

void find_capi()
{
	i=0;
	int f=0;
	char con[31];
	fstream fin("quiz.dbf",ios::in|ios::binary);
	cout<<"Nter the country to display the capital : ";
	gets(con);
	while(i<rec)
	{
		fin.read((char*)&c[i],sizeof(c[i]));
		if(strcmp(c[i].ret_con(),con)==0)
		{
			c[i].view();
		}
		i++;
	}
	fin.close();
}


void main()
{
	clrscr();
	add();
	show();
	find_capi();
	getch();
}