#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define s1 10
#define s2 10
int altersum(int b[s1][s2],int m,int n)
{
	int asum=0,i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j)%2==0)
			asum+=b[i][j];
		}
	}
	return asum;
}
void main()
{
	clrscr();
	int b[s1][s2],m,n,i,j;
	cout<<"Nter the no of row : ";
	cin>>m;
	cout<<"Ntre the no of col : ";
	cin>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Nter the element : ";
			cin>>b[i][j];
		}
	}
	cout<<"\nSum of alternate elements are  : "<<altersum(b,m,n);



	getch();
}

