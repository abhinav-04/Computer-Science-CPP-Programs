#include<iostream.h>
#include<conio.h>
void smallo(int*a,int*b)
{
	if(*b<*a)
	*b=0;
	else
	*a=0;
	}
void main()
{
	clrscr();
	int x,y;
	cout<<"\nEnter two integers";
	cin>>x>>y;
	cout<<"\nEntered value are:"<<endl<<"\nx= "<<x<<endl<<"\ny="<<y<<endl;
	smallo(&x,&y);
	cout<<"\nNew Values are";
	cout<<"x="<<x<<endl<<"y="<<y;
	getch();
	}
