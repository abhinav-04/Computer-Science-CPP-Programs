#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>

class emp
{
	char enm[31];
	long int basic;
	float da,hra,pf;
	long tot,net;
	public:
	void input()
	{
		cout<<"Nter emp name : ";
		gets(enm);
		cout<<"Nter emp basic : ";
		cin>>basic;
		da=.30*basic;
		hra=.10*basic;
		pf=.10*(basic+da);
		tot=(basic+da+hra);
		net=(basic+da+hra)-pf;
	}
	void show()
	{
		cout<<"\t"<<enm<<"\t"<<basic<<"\t"<<da<<"\t"<<hra<<"\t"<<tot<<"\t"<<pf<<"\t"<<net;
	}

}e[5];

void main()
{
	clrscr();
	fstream f1;
	f1.open("emp.txt",ios::in|ios::out|ios::binary);
	for(int i=0;i<5;i++)
	{
		e[i].input();
		f1.write((char*)&e[i],sizeof(e[i]));
	}

	cout<<"\t\tSALARY REGISTER\n";
	cout<<"\n---------------------------------------------------------------";
	cout<<"\nSno\tName\tBasic\tDa\tHra\tTotal\tPf\tNet-Pay";
	cout<<"\n---------------------------------------------------------------";
	f1.seekp(0);
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<i+1<<" ";
		e[i].show();
	}
	cout<<"\n---------------------------------------------------------------";
	getch();
}