#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//queue of City name - dynamic allocation

struct node
{
	char city[31];
	node *link;
}*fr,*rr,*nptr,*temp;

void Add()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"Nter city name : ";
	gets(nptr->city);
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
void Delete()
{
	temp=fr;
	if(temp==NULL)
	{
		cout<<"Underflow ";
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
void View()
{

	temp=fr;
	cout<<"Start->..";
	while(temp!=NULL)
	{
		cout<<temp->city<<"->";
		temp=temp->link;
	}
	cout<<"..->End";
}
void main()
{
	clrscr();
	fr=rr=NULL;
	int ch;
	while(ch!=4)
	{
		cout<<"\n1.Add queue \n2.Delete queue \n3.View queue \n4.Exit";
		cout<<"\n\nNter ur choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:	Add(); break;
		case 2: Delete(); break;
		case 3: View(); break;
		case 4: exit(0);
		default: cout<<"\nInvalid choice";
		}
	}
	cout<<"\npress any key 2 exit\n";
	getch();
}