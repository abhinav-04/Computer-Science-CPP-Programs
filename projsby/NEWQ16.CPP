#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
const int sz=6;

void transfer(int a[],int b[])
{
	int i,t;
	for(i=0;i<sz;i++)
	{
		if(i%2==1)
		{
			t=a[i];
			a[i]=b[i];
			b[i]=t;
		}
	}
};
void main()
{
	clrscr();
	int a[]={15,10,12,21,52,76};
	int b[]={23,41,67,83,13,53};
	cout<<"\A contains : ";
	for(int i=0;i<6;i++)
	cout<<a[i]<<" ";
	cout<<"\nB contains : ";
	for(i=0;i<6;i++)
	cout<<b[i]<<" ";
	cout<<"\n\nAfter calling a function\n";
	transfer(a,b);
	cout<<"\nA will be : ";
	for(i=0;i<6;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl<<"B will be : ";
	for(i=0;i<6;i++)
	cout<<b[i]<<" ";
	getch();
}

