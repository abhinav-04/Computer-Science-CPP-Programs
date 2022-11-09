#define N 100
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void display(int a[N][N], int m,int n)
{
	for (int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	}
void times2(int a[N][N],int m,int n)
{
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	a[i][j]=a[i][j]*2;
	}
void main()
{
	clrscr();
	int mat[N][N],row,col,i,j;
	cout<<"\nEnter total rows: "<<endl;
	cin>>row;
	cout<<"\nEnter no. of columns: "<<endl;
	cin>>col;
	cout<<"\nEnter the elements of the matrix";
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	cin>>mat[i][j];
	cout<<"\nThe original matrix is: "<<endl;
	display(mat,row,col);
	times2(mat,row,col);
	cout<<"\nThe new Matrix is:"<<endl;
	display(mat,row,col);
	getch();
	}








