#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int x[4][4],a;
	cout<<"\nenter number of characters"<<endl;
	for(int c=0;c<4;c++)
	for(int r=0;r<4;r++)
	cin>>x[r][c];
	cout<<"\nthe required thing is"<<endl;
	for(c=0;c<4;c++)
	for(r=0;r<4;r++)
{	if((r==c)||((r+c)==3))
	continue;
	else
	cout<<x[r][c]<<endl;
}	getch();
	}

