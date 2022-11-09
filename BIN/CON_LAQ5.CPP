/*
clss travelplan
private memb:
	plancode long
	place string array
	no_of_trav int
	no_of_bus int
public:
	a constructor to assign initial values
		plancode=1001
		place= agra
		no_of_trav=5
		no_of_buses=1
	a function new plan(): allow user to enter plancode,place,no_of_trav
	assign no_of_buses as per following conditions
	no.of.trav      no.of buses
	<20               1
	=>20 &<40	  2
	>=40		  3
showplan():to display data
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class travelplan
{
	long plancode;
	char place[31];
	int no_of_trav;
	int no_of_buses;
	public:
	travelplan()
	{
		plancode=1001;
		strcpy(place,"Agra");
		no_of_trav=5;
		no_of_buses=1;
	}
	void newplan()
	{
		cout<<"\nEnter plancode: ";
		cin>>plancode;
		cout<<"\nEnter place: ";
		gets(place);
		cout<<"\nEnter number of travellers: ";
		cin>>no_of_trav;
		if(no_of_trav<20)
		no_of_buses=1;
		if((no_of_trav>=20) && (no_of_trav<40))
		no_of_buses=2;
		else if(no_of_trav>=40)
		no_of_buses=3;
	}
	void showplan()
	{
		cout<<"\nPlancode is: "<<plancode;
		cout<<"\nPlace is: "<<place;
		cout<<"\nNo.of travellers are: "<<no_of_trav;
		cout<<"\nNo. of buses: "<<no_of_buses<<endl;
	}
};
void main()
{
	clrscr();
	travelplan p;
	p.showplan();
	p.newplan();
	p.showplan();
	getch();
}