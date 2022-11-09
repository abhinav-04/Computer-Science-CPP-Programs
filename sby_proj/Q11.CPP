#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
class elect
{
	char cname[31];
	int cur_read,prev_read,cu;
	float amt;
	public:
	void input()
	{
		cout<<"Nter customers name  :";
		gets(cname);
		cout<<"Nter current reading : ";
		cin>>cur_read;
		cout<<"Nter previous reading: ";
		cin>>prev_read;
	}
	void calc()
	{
		cu=cur_read-prev_read;
		if(cu<100)
		amt=(0.75*cu);
		else if(cu>100 &&cu<=200)
		amt=(1.25*cu);
		else if(cu>200 && cu<=300)
		amt=1.75*cu;
		else if(cu>300)
		amt=2.25*cu;
	}
	void show()
	{
		cout<<"\n------------------------------------------------\n";
		cout<<"Cust\tcurr\tprev\tcons\tbill\n";
		cout<<"Num\tread\tread\tunit\tamt";
		cout<<"\n-------------------------------------------------\n";
		cout<<cname<<"\t"<<cur_read<<"\t"<<prev_read<<"\t"<<cu<<"\t"<<amt;
		cout<<"\n--------------------------------------------------\n";
	}
};

void main()
{
	clrscr();
	elect e[5];
	for(int i=0;i<=4;i++)
	{
		e[i].input();
		e[i].calc();
	}
	for(i=0;i<=4;i++)
	{
		e[i].show();
	}
	getch();
}