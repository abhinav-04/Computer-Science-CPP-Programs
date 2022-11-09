#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class strcount
{
	char *str;
	int ctr;
	public:
	strcount()
	{
		strcpy(str,"");
		ctr=0;
	}
	void surch(char *s,char c)
	{
	str=s;
	while(*str)
	{
		if(*str==c)
		{
		ctr++;
		}
		str++;
	}
	cout<<"\nthe char "<<c<<" occurs "<<ctr<<" times";
	}
};
void main()
{
	clrscr();
	strcount cs;
	char *s,ch;
	cout<<"Nter any string : ";
	gets(s);
	cout<<"Nter any char to search : ";
	cin>>ch;
	cs.surch(s,ch);
	getch();
}