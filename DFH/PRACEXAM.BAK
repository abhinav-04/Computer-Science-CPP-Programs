#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class coun
{
	char cname[21],cap[21];
	public:
	void getcou()
	{
		cout<<"\nEnter country name: ";
		gets(cname);
		cout<<"\nEnter capital name: ";
		gets(cap);
	}
	void show()
	{
		cout<<"\nThe capital of "<<cname<<" is "<<cap;
	}
	char *retcname()
	{
		return cname;
	}
};
void append()
{
	coun c;
	fstream fil;
	fil.open("QUIZ.DBF",ios::binary|ios::out);
	for(int i=0;i<5;i++)
	{
		c.getcou();
		fil.write((char*)&c,sizeof(c));
	}
	fil.close();

}
void quiz()
{
	coun c;
	char country[21];
	fstream fil;
	fil.open("QUIZ.DBF",ios::binary|ios::in|ios::out);
	cout<<"\nEnter the country:" ;
	gets(country);
	while(fil.read((char*)&c,sizeof(c)))
	{
		if(!strcmpi(c.retcname(),country))
		{
			c.show();
		}
	}
	fil.close();
}
void main()
{
	clrscr();
	append();
	quiz();
	getch();
}

