#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
struct stud
{
	int rno;
	float per;
};
void sort(stud s[])
{
	int trno,tper;
	for(int i=0;i<=9;i++)
	{
		for(int j=i+1;j<=9;j++)
		{
			if(s[i].per<s[j].per)
			{
			tper=s[i].per;
			trno=s[i].rno;

			s[i].per=s[j].per;
			s[i].rno=s[j].rno;

			s[j].per=tper;
			s[j].rno=trno;
			}
		}
	}
};

void main()
{
	clrscr();
	stud s[10];
	for(int i=0;i<=9;i++)
	{
		cout<<"Nter rno : ";
		cin>>s[i].rno;
		cout<<"Nter the percentage : ";
		cin>>s[i].per;
	}
	sort(s);

	cout<<"\nRno         Percentage\n";
	for(i=0;i<=9;i++)
	{
		cout<<s[i].rno<<"       "<<s[i].per;
		cout<<endl;
	}

	getch();
}