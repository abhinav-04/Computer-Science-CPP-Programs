#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

void bub(int a[],int sz)
{
	int i,j,f=1,t;
	for(i=1;i<=sz;i++)
	{
		for(j=0;j<sz-1;j++)
		{
			if(a[j] > a[j+1])  //5 3 4 1 2           3 4 1 2 5   3 1 2 4 5
			{
				t=a[j];        //   3 5 4 1 2  3 1 4 2 5   1 3 2 4 5
				a[j]=a[j+1];   //   3 4 5 1 2  3 1 2 4 5   1 2 3 4 5
				a[j+1]=t;      //   3 4 1 5 2
			}
		}
	}
}
void show(int a[],int sz)
{
	for(int i=0;i<sz;i++)
	cout<<a[i]<<" ";
}

void main()
{
	clrscr();
	int a[]={5,1,3,4,2};
	int sz=5;
	bub(a,sz);
	show(a,sz);

	getch();
}