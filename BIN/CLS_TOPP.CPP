#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stud
{
	 int rno,m[3],tot,per;
	 char nm[31];
	 public:
	 void read()
	{
		cout<<"\nEnter rollno: ";
		cin>>rno;
		cout<<"\nEnter name: ";
		gets(nm);
		for(int i=0;i<2;i++)
		{
		cout<<"\nEnter marks: ";
		 cin>>m[i];
		 }
		}
	 void calcper()
	 {
		tot=0;
		for(int i=0;i<=1;i++)
		tot+=m[i];
		per=tot/2;
	 }
	 int return_per()
	 {

};
void main()
{
	clrscr();
	stud s[5];
	for(int i=0;i<=4;i++)
	{
		s[i].read();
		s[i].calcper();
	}
	cout<<"\nToppper is: ";
	int max=s[0].per;
	for(i=0;i<=5;i++)
	{
		if(max<s[i].return_per())
		max=s[i].return_per();
	}
	cout<<max;
