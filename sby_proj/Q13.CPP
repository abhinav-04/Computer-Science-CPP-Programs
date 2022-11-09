#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
struct mydate
{
	int d,m,y;
};
void newdate(mydate md)
{
	char *mon;
	switch(md.m)
	{
		case 1:mon="january";break;
		case 2:mon="february";break;
		case 3:mon="March";break;
		case 4:mon="April";break;
		case 5:mon="May";break;
		case 6:mon="June";break;
		case 7:mon="July";break;
		case 8:mon="August";break;
		case 9:mon="September";break;
		case 10:mon="October";break;
		case 11:mon="November";break;
		case 12:mon="December";break;
	}

	if(md.d==1 || md.d==21 || md.d==31)
	{
		cout<<md.d<<"st "<<mon<<" " <<md.y;
	}
	if(md.d==2||md.d==22)
	{
		cout<<md.d<<"nd "<<mon<<" "<<md.y;
	}
	if(md.d==3||md.d==23)
	{
		cout<<md.d<<"rd "<<mon<<" "<<md.y;
	}
	if((md.d>=4 && md.d<20) || (md.d>=24 && md.d<=30))
	{
		cout<<md.d<<"th "<<mon<<" "<<md.y;
	}
}
void main()
{
	clrscr();
	mydate md;
	cout<<"Nter date (dd)  : ";
	cin>>md.d;
	cout<<"Nter month (mm) : ";
	cin>>md.m;
	cout<<"Nter year (yy)  : ";
	cin>>md.y;
	newdate(md);
	getch();
}