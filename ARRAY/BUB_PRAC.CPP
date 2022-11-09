#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void bsort(int a[],int s)
{
	int t;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<s;i++)
		cout<<a[i]<<" ";
}
void main()
{
	clrscr();
	int a[10],sz;
	cout<<"\nEnter the size of array: ";
	cin>>sz;
	cout<<"\nEnter the elements; ";
	for(int i=0;i<sz;i++)
	{
		cin>>a[i];
	}
	bsort(a,sz);
	getch();
}
