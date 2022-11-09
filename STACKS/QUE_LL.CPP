#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
	int info;
	node *link;
}*nptr,*fr,*rr,*temp;
void insert()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"\nEnter any no.: ";
	cin>>nptr->info;
	if(rr==NULL)
	{
		fr=rr=nptr;
	}
	else
	{
		rr->link=nptr;
		rr=nptr;
	}
}
void del()
{
	temp=fr;
	if(temp==NULL)
	{
		cout<<"Underflow";
		getch();
	}
	else if(fr==rr)
	{
		fr=rr=NULL;
	}
	else
	{
		fr=fr->link;
		delete temp;
	}
}
void show()
{
	temp=fr;
	if(temp==NULL)
	cout<<"\nNo Element found: ";
	while(temp!=NULL)
	{
		cout<<temp->info<<"<<-";
		temp=temp->link;
	}
}
void main()
{
	clrscr();
	fr=rr=NULL;
	int ch;
	do
	{
		cout<<"\n1. ins\n2.del\n3.show\n4.exit\nEnter your choice(1-4)";
		cin>>ch;
		switch(ch)
		{
			case 1:insert();
				break;
			case 2:del();
				break;
			case 3:show();
				break;
			case 4: break;
		}
	}while(ch<4);
	getch();
}