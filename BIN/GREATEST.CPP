#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int A,B,C;
	cout<<"\nenter As value: ";
	cin>>A;
	cout<<"\nenter Bs value: ";
	cin>>B;
	cout<<"\nenter Cs value: ";
	cin>>C;
	if(A>B)
{	if(B>C)
{	cout<<"\nsmallest number is: "<<C;
	cout<<"\nthe next higher number is: "<<B;
	cout<<"\nhighest number is: "<<A;}
	else if(C>B)
{	cout<<"\nsmallest number is: "<<B;
	cout<<"\nthe next higher number is: "<<C;
	cout<<"\nhighest number is: "<<A; }}
	if(B>C)
{	if(C>A)
{	cout<<"\nsmallest number is: "<<A;
	cout<<"\nthe next higher number is: "<<C;
	cout<<"\nhighest number is: "<<B;}
	else if(A>C)
{	cout<<"\nsmallest number is: "<<C;
	cout<<"\nthe next higher number is: "<<A;
	cout<<"\nhighest number is: "<<B; } }
	else if(C>A)
{	if(A>B)
{	cout<<"\nsmallest number is: "<<B;
	cout<<"\nthe next higher number is: "<<A;
	cout<<"\nhighest number is: "<<C;}
	else if(B>A)
{	cout<<"\nsmallest number is: "<<A;
	cout<<"\nthe next higher number is: "<<B;
	cout<<"\nhighest number is: "<<C; } }
	getch();
}

























/*{	cout<<"\nsmallest number is: "<<C;
	cout<<"\nthe next higher number is: "<<B;
	cout<<"\nhighest number is: "<<A;	}
	if((B>A)&&(A>C))
{	cout<<"\nsmallest number is: "<<C;
	cout<<"\nthe next higher number is: "<<A;
	cout<<"\nhighest number is: "<<A;	}*/
