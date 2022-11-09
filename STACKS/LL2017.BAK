#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct gift
{
	int gcode;
	char gdesc[20];
	gift *link;
};
class stack
{
	gift *top;
	public:
	stack()
	{
		top=NULL;
	}
	void pushgift();
	void popgift();
	void show();
	~stack(){}
};
void stack::pushgift()
{
	gift *nptr;
	nptr=new gift;
	cout<<"\nEnter the gcode";
	cin>>nptr->gcode;
	cout<<"\nEnter the gdesc";
	gets(nptr->gdesc);
	nptr->link=NULL;    //just following a series giving new space
	if(top==NULL)	    //to nptr entering info then giving NULL to link
	{
		top=nptr;     //following a rhombus
	}                     //     top-    -nptr
	else                 //           -
	{                  //    nptr-> -   -top
		nptr->link=top;   //      -
		top=nptr;       //  top -   -nptr
	}
}
void stack::show()
{
	gift *temp;
	temp=top;
	while(temp!=NULL)
	{
		cout<<temp->gcode<<" "<<temp->gdesc<<endl;
		temp=temp->link;
	}
}
void stack::popgift()
{
	gift *ptr;
	ptr=top;
	cout<<"\nDeleted element: "<<ptr->gcode<<" "<<ptr->gdesc;
	top=top->link;
	delete ptr;
}
void main()
{
	clrscr();
	stack s;
	int ch;
	do
	{
		cout<<"\n1. push";
		cout<<"\n2. pop";
		cout<<"\n3. show";
		cout<<"\n4. exit";
		cout<<"\nEnter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:s.pushgift();
				break;
			case 2:s.popgift();
				break;
			case 3:s.show();
				break;
			case 4: break;
		}
	}while(ch!=4);
	getch();
}

