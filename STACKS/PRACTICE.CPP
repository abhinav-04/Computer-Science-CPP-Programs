#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	int ino;
	char inm[31];
	node *link;
}*nptr,*temp,*ptr,*top;
void push()
{
	nptr=new node;
	cout<<"\nEnter the item no.: ";
	cin>>nptr->ino;
	cout<<"\nEnter the item name: ";
	gets(nptr->inm);
	nptr->link=NULL;
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
		cout<<"\npopped element: "<<top->ino<<endl;
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
		cout<<temp->ino<<" "<<temp->inm;
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
		cout<<"\nEnter More? ";
		cin>>ans;
	}
	show();
	pop();
	show();
	getch();
}

