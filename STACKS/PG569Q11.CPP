#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	long pincode;
	char noc[31];
	node *link;
}*temp,*top,*nptr;
void push()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"\nEnter the pincode of the city: ";
	cin>>nptr->pincode;
	cout<<"\nEnter the city name: ";
	gets(nptr->noc);
	if(top==NULL)
	{
		top=nptr;
	}
	else
	{
		nptr->link=top;
		top=nptr;
	}
}
void pop()
{
	if(top==NULL)
		cout<<"\nUnderflow";
	else
	{
		cout<<"\nPopped element: "<<top->pincode<<" "<<top->noc<<endl;
		node *ptr;
		ptr=top;
		top=top->link;
		delete ptr;
	}
}
void show()
{
	temp=top;
	cout<<"\nThe list is :"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->pincode<<" "<<temp->noc;
		temp=temp->link;
		cout<<"\n";
	}
}
void main()
{
	clrscr();
	top=NULL;
	char ans='y';
	while(ans=='y')
	{
		push();
		cout<<"\nWanna enter more: ";
		cin>>ans;
	}
	show();
	pop();
	show();
	getch();
}


