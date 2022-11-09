#define N 100
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void lower_half(int L[N][N],int n)
{
	int i,j;
	for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
{		if(i>=j)
			cout<<L[i][j]<<" ";
		else
			cout<<" ";
		}
		cout<<"\n";
		}                   }
void upper_half(int u[N][N],int n)
{
	int i,j;
	for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
{	if(i<=j)
		cout<<u[i][j]<<" ";
	else
		cout<<" ";
		}
		cout<<"\n";  }
		}
void main()
{
	clrscr();
	int a[N][N],b[N][N],arg,i,j;
	cout<<"\nEnter the number of rows and columns";
	cin>>arg;
	cout<<"\nEnter the matrix for lower half: "<<endl;
	for(i=0;i<arg;i++)
		for(j=0;j<arg;j++)
			cin>>a[i][j];
	cout<<"\nEnter the matrix for upper half: "<<endl;
	for(i=0;i<arg;i++)
		for(j=0;j<arg;j++)
			cin>>b[i][j];

	cout<<"\nthe lower half function is"<<endl;
	lower_half(a,arg);
	cout<<"\nthe upper half function is"<<endl;
	upper_half(a,arg);
	getch();
	}                            



