#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct node
{
	int rno,age;
	node *link;
}*top,*nptr,*temp;

void stkpush()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"nter the rollno : ";
	cin>>nptr->rno;
	cout<<"Nter the age    : ";
	cin>>nptr->age;
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
	cout<<"Underflow";
	else
	{
		cout<<"\npopped element : "<<top->rno<<" "<<top->age<<endl;
		node *ptr;
		ptr=top;
		top=top->link;
		delete ptr;
	}
}
void show()
{
	temp=top;
	cout<<"the list is \n";
	while(temp!=NULL)
	{
		cout<<temp->rno<<" "<<temp->age;
		temp=temp->link;
		cout<<"\n";
	}
}
void main()
{
	clrscr();
	top=NULL;
	char ans='y';
	int ch;
	do
	{
		clrscr();
		cout<<"\nStack link list";
		cout<<"\n1. Push into stack";
		cout<<"\n2. Pop from stack";
		cout<<"\n3. show the stack list";
		cout<<"\n4. exit";
		cout<<"\nEnter yr choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			stkpush();
			break;
			case 2:
			stkpop();
			break;
			case 3:
			show();
			break;
			case 4:
			break;
		}
		cout<<"\nwish 2 continue....";
		cin>>ans;
	}while(ans=='y');



	getch();
}