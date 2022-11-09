#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	char Name;
	char post;
	int bas_pay;
	int b_amt;
	int tot_sal;
}
int get_value(struct employee d)
{	d.tot_sal=d.bas_pay+d.b_amt;
	return(d.tot_sal)
	}
void main()
{
	employee e;
	cout<<"\nenter name:":
	cin>>e.name;
	cout<<"\nenter basic pay:":
	cin>>e.bas_pay;
	cout<<"\nenter bonus amt.:":
	cin>>e.b_amt;
	cout<<"\nTotal salry of employee is :":
	cout<<get_value(e);
	getch();
	}