#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	char nm[31];
	node *link;
}*top,*nptr,*temp;
void stkpush()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"\nEnter the name: ";
	gets(nptr->nm);
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
void stkpop()
{
	if(top==NULL)
		cout<<"\nUnderflow";
	else
	{
		cout<<"\nPopped element: "<<top->nm<<endl;
		node *ptr;
		ptr=top;
		top=top->link;
		delete ptr;
	}
}
void show()
{
	temp=top;
	cout<<"\nThe list is: "<<endl;
	while(temp!=NULL)
	{
		cout<<temp->nm;
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
		stkpush();
		cout<<"\nWanna continue:";
		cin>>ans;
	}
	show();
	stkpop();
	show();
	getch();
}