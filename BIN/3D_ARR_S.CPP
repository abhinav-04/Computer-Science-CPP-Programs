//Using 3-D array to store and show sales of area
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char sarea[2][31],sgname[2][2][31];
	//	   1   2         3  4   5
	int samt[2][2][3],sgtot[2][2],atot[2],gtot=0,i,j,k;
	//	 6  7  8        9  10     11
/*	1-for no. area
	2-for area's name
	3-for sales area name
	4-for which girl 1 or 2
	5-for sales girl's name
	6-area name
	7--no. of sales girl
	8-the amount girl has
	*/
	for(i=0;i<=1;i++)
	{
		cout<<"Enter sale area name: ";
		gets(sarea[i]);
		for(j=0;j<=1;j++)
		{
			cout<<"Enter the sales girl name: ";
			gets(sgname[i][j]);//s[0][0] s[0][1]
			for(k=0;k<=2;k++)
			{
				cout<<"Enter sale amt.: ";
				cin>>samt[i][j][k];
			}
		}
	}
	for(i=0;i<=1;i++)
	{
		atot[i]=0;
		for(j=0;j<=1;j++)
		{
			sgtot[i][j]=0;//sgtot[0][0] sgtot[0][1]
			for(k=0;k<=2;k++)
			{
				sgtot[i][j]=sgtot[i][j]+samt[i][j][k];
			}
			atot[i]=atot[i]+sgtot[i][j];
		}
		gtot=gtot+atot[i];
	}
	for(i=0;i<=1;i++)
	{
		cout<<"\nSales area: "<<sarea[i];
		for(j=0;j<=1;j++)
		{
			cout<<"\nSales girl name: "<<sgname[i][j];
			for(k=0;k<=2;k++)
			{
				cout<<"\n\tSales amount: "<<samt[i][j][k];
			}
			cout<<"\n---------------------------";
			cout<<"\nSales girl total: "<<sgtot[i][j];
			cout<<"\n---------------------------";
			cout<<"\narea total: "<<atot[i];
		}
	}
		cout<<"\n=======================";
		cout<<"\nGrand total: "<<gtot;
		cout<<"\n=======================";
		getch();
}