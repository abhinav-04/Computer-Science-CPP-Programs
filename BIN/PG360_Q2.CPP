#define N 100
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void transpose(int e[N][N],int f[N][N],int p,int q)
{
	int i,j;
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
{			f[i][j]=e[j][i];}
	}
void main()
{
	clrscr();
	int a[N][N],b[N][N],c[N][N],d[N][N],r[N][N],m,n,i,j;
x:	cout<<"\nEnter the number of rows: ";
	cin>>m;
	cout<<"\nEnter the number of columns: ";
	cin>>n;
	if(m==n)
{	cout<<"\nEnter the A- matrix"<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cin>>a[i][j];} }
	cout<<"\nEnter the B- matrix"<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cin>>c[i][j];}  }
	cout<<"\nEntered matrices are: "<<endl;
	cout<<"\nMatrix A: "<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cout<<a[i][j]<<" ";}cout<<endl;}
	cout<<"\nMatrix B: "<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cout<<c[i][j]<<" ";}cout<<endl;}

	transpose(a,b,m,n);
	transpose(c,d,m,n);
	cout<<"\nNew Matrices are: "<<endl;
	cout<<"\nMatrix A: "<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cout<<b[i][j]<<" ";}cout<<endl;}
	cout<<"\nMatrix B: "<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cout<<d[i][j]<<" ";}cout<<endl;}
//Now multiplying b and d matrices
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{r[i][j]=b[i][j]*d[i][j];}}
	cout<<"\nMultiplied matrix is: "<<endl;
	for(i=0;i<m;i++)
{		for(j=0;j<n;j++)
			{cout<<r[i][j]<<" ";}cout<<endl;}
	goto y;
	}
	if((m==0)||(n==1))
	goto y;
	else
{	cout<<"\nNumber of rows should be equal to number of columns";
	goto x;}

    y:	getch();
	}
