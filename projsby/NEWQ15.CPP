#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	node *link;
}*np,*fr,*rr,*temp;

void Add()
{
	np=new node;
	np->link=NULL;
	cout<<"Nter any no. : ";
	cin>>np->info;

	if(rr==NULL)
	{
		fr=rr=np;           //11
	}
	else
	{
		rr->link=np;        //11->12->13
		rr=np;              //rr=12
	}
}
void Delete()
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

void View()
{
	temp=fr;
	if(temp==NULL)
	cout<<"\nNo elem found\n";
	cout<<"First<-";

	while(temp!=NULL)    //11!=NULL            12
	{
		cout<<temp->info<<"<<-";   //11      12
		temp=temp->link;          //11->link 12 12->link NULL
	}
	cout<<"last";
}
void main()
{
	clrscr();
	fr=rr=NULL;
	int ch;
	do
	{
		cout<<"\n1.Add\n2.Delete\n3.View\n4.Exit\nEnter your choice (1-4) : ";
		cin>>ch;
		switch(ch)
		{
			case 1:Add();break;
			case 2:Delete();break;
			case 3:View();break;
			case 4:break;
		}
	}while(ch<4);
}
