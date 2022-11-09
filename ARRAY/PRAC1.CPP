#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int sortc(int a[],int sz)
{
	int t;
	for(int i=0;i<sz-1;i++) //sz-1 required beacuse below we are using
	{			//i and i+1 if sz is 4 the below will chaeck till
		if(a[i+1]>a[i]) //5th element
		t=1;
		else
		return (-1);
	}
	return t;
}
void main()
{
	clrscr();
	int a[10],sz;
	cout<<"\nEnter the size of array: ";
	cin>>sz;
	cout<<"\nenter the elements: ";
	for(int i=0;i<sz;i++)
		cin>>a[i];
	cout<<"The result is: "<<sortc(a,sz);
	getch();
}