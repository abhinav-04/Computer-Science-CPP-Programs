//deletion of element from the array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define N 100
void Delete(int a[N],int sz,int pos)
{
	for(int i=pos-1;i<sz;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<sz-1;i++)
	cout<<a[i]<<" ";
}
void main()
{
	clrscr();
	int a[N],sz,pos;
	cout<<"\nEnter the size of array: ";
	cin>>sz;
	cout<<"\nEnter the elements: ";
	for(int i=0;i<sz;i++)
	cin>>a[i];
	cout<<"\nEnter the position you wanna delete: ";
	cin>>pos;
	Delete(a,sz,pos);
	getch();
}


