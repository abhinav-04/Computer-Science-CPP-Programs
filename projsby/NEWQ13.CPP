#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void sel_sort(char nm[][31],int no)
{
	int i,j,small;
	char temp[31];
	for(i=0;i<no;i++)
	{
		small=i;
		for(j=i+1;j<no;j++)
		{
			if(strcmp(nm[small],nm[j])>0)
			small=j;
		}
		strcpy(temp,nm[i]);
		strcpy(nm[i],nm[small]);
		strcpy(nm[small],temp);
	}
}
void show(char nm[][31],int no)
{
	for(int i=0;i<no;i++)
	{
		cout<<nm[i]<<"\n";
	}
}
void main()
{
	clrscr();
	char nam[10][31];
	int n;
	cout<<"Nter how many name : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Netr name : ";
		gets(nam[i]);
	}
	show(nam,n);
	sel_sort(nam,n);
	cout<<"\nAfter arranging in alphabetical order\n";
	show(nam,n) ;
	getch();
}

