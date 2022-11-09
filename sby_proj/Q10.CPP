#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
//q10 wap to accept any string and
//print it in alphabetical order
//using selection sort

void sel(char a[],int sz)
{
	int i,j,f=1,t;
	for(i=0;i<sz;i++)
	{
		f=i;
		for(j=i+1;j<sz;j++)
		{
			if(a[j] < a[f])
			{
				f=j;
			}
		}
		t=a[i];
		a[i]=a[f];
		a[f]=t;
	}
}
void show(char a[],int sz)
{
	cout<<"\nAfter sorting the string is : \n";
	for(int i=0;i<sz;i++)
	cout<<a[i]<<" ";
}
void main()
{
	clrscr();
	char a[31];
	int l;
	cout<<"Nter any string : ";
	gets(a);
	l=strlen(a);
	sel(a,l);
	show(a,l);
	getch();
}