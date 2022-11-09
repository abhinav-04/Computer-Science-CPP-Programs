#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
	char enm[31];
	long int basic;
	float da,hra,pf;
	long tot;
};
void main()
{
	clrscr();
	emp e[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Nter emp name : ";
		gets(e[i].enm);
		cout<<"Nter emp basic : ";
		cin>>e[i].basic;
		e[i].da=.30*e[i].basic;
		e[i].hra=.10*e[i].basic;
		e[i].pf=.10*(e[i].basic+e[i].da);
		e[i].tot=(e[i].basic+e[i].da+e[i].hra)-e[i].pf;
	}
	cout<<"\t\tSALARY REGISTER\n";
	cout<<"\n----------------------------------------------------------";
	cout<<"\nSno\tName\tBasic\tDa\tHra\tPf\tNET-Pay";
	cout<<"\n----------------------------------------------------------";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<i+1<<"\t"<<e[i].enm<<"\t"<<e[i].basic<<"\t"<<e[i].da<<"\t"<<e[i].hra<<"\t"<<e[i].pf<<"\t"<<e[i].tot;
	}
	cout<<"\n----------------------------------------------------------";
	getch();
}