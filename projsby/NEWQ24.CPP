#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define sz 3

int magic_sqr(int arr[sz][sz])
{
	int dsum=0,rsum,csum,r=0;
	for(int i=0;i<sz;i++)
	{
		dsum+=arr[i][i];
	}
	for(i=0;i<sz;i++)
	{
		rsum=0;
		for(int j=0;j<sz;j++)
		rsum+=arr[i][j];
	}
	cout<<endl<<"row sum: "<<rsum;
	if(rsum==dsum)
	r=1;
	else
	r=0;
	for(i=0;i<sz;i++)
	{
		csum=0;
		for(int j=0;j<sz;j++)
		csum+=arr[j][i];
	}
	cout<<" column sum: "<<csum<<" Diagonal sum: "<<dsum;
	if(csum==dsum)
	r=1;
	else
	r=0;
	return r;
}


void main()
{
	clrscr();
	int arr[sz][sz];
	cout<<"Ntre the elem : ";
	for(int i=0;i<sz;i++)
	{
		for(int j=0;j<sz;j++)
		{
		cin>>arr[i][j];
		}
	cout<<"\n";
	}
	cout<<"\nMatrix is:\n";
	for(i=0;i<sz;i++)
	{
		for(int j=0;j<sz;j++)
		{
		cout<<arr[i][j]<<" ";
		}
	cout<<"\n";
	}

	int f=magic_sqr(arr);
	if(f==1)
	cout<<"\n\nIt is magic square";
	else
	cout<<"\n\nIt is not a magic square";
	getch();
}

