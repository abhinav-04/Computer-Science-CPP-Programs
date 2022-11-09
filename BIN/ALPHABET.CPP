#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{       clrscr();
	char a[100],temp;
	int n=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	n=n+1;
	for(i=0;i<n-1;i++)
{		for(int j=1;j<n;j++)
	   {	    	if(a[i]>a[j])
			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}	   }
	puts(a);
	getch();
	}

