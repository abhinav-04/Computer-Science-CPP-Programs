#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
#include<stdlib.h>
//queue dynamic allocation

struct node
{
	int no;
	node *link;
}*fr,*rr,*nptr,*temp;

void creat_q()
{
	nptr=new node;
	nptr->link=NULL;
	cout<<"Nter any no : ";
	cin>>nptr->no;
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
void del_q()
{
	temp=fr;
	if(temp==NULL)
	{
		cout<<"Underflow";
		getch();
		exit(1);
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
void print_q()
{

	temp=fr;
	while(temp!=NULL)
	{
		cout<<temp->no<<"->";
		temp=temp->link;
	}
}
void main()
{
	clrscr();
	fr=rr=NULL;
	int ch;
	char ans='y';
	while(ans=='y')
	{
		cout<<"\n1.create q \n2.delete q \n3.print q";
		cout<<"\n\nNter ur choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:	creat_q(); break;
		case 2: del_q(); break;
		case 3: print_q(); break;
		default: cout<<"\nInvalid choice";
		}
		cout<<"\nDo wish to continue...";
		cin>>ans;
	}
	cout<<"\npress any key 2 exit\n";
	getch();
}