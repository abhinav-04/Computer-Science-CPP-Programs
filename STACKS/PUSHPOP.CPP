#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//push and pop in stack
const int sz=5;

void push(int arr[],int &top,int no)
{
	if(top>sz-1)
	{
		cout<<"\nOverflow:";
		getch();
		exit(0);
	}
	else
	{
		top++;
		arr[top]=no;
	}
}
void pop(int arr[],int &top)
{
	if(top<0)
	cout<<"\nUnderflow";
	else
	{
		cout<<"\nDeleting element "<<arr[top];
		top--;
	}
}
void show(int arr[],int top)
{
	for(int i=top;i>=0;i--)
	{
		cout<<"\n"<<arr[i]<<" ";
	}
}
void main()
{
	clrscr();
	int arr[sz],top=-1,no;
	char ans='y';
	while(ans=='y')
	{
		cout<<"\nEnter the no,: ";
		cin>>no;
		push(arr,top,no);
		cout<<"\nWanna add more: ";
		cin>>ans;
	}
	cout<<"\nThe stack array is: ";
	show(arr,top);
	cout<<"\nAfter deleting the top element: ";
	pop(arr,top);
	show(arr,top);
	getch();
}