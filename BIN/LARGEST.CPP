#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int i,n,large=0,x;
	cout<<"\nhow many numbers: ";
	cin>>n;
	for(i=1;i<=n;i++)
{	cout<<"\nenter number"<<i<<":";
	cin>>x;
	if(x>large)
	large=x;
}	cout<<"\nlargest number is: "<<large;
	getch();
}