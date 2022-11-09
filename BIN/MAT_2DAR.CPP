#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int x[4][4];
	cout<<"enter the elements";
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	cin>>x[i][j];

	for(i=0;i<4;i++)
{	for(j=0;j<4;j++)
	cout<<x[i][j]<<"  ";
	cout<<endl;}
	getch();
	}