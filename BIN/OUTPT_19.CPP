#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void alter(char *s1,char *s2)
{
	char *t;
	t=s1;
	s1=s2;
	s2=t;
	cout<<s1<<"&"<<s2<<endl;
}
void main()
{
	clrscr();
	char x[]="first",y[]="second";
	alter(x,y);
	cout<<x<<"*"<<y<<endl;
	getch();

}

