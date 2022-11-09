#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void halfswap(int a[],int sz)
{
	int i,mid,j=0,t;
	mid=sz/2;

	while(mid<sz)
	{
		t=a[j];
		a[j]=a[mid];
		a[mid]=t;
		mid++;
		j++;
	}
}
void show(int a[],int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		cout<<a[i]<<" ";
	}
}

void main()
{
	clrscr();
	int a[10],sz,i;
	cout<<"enter the size of array : ";
	cin>>sz;
	for(i=0;i<sz;i++)
	{
		cout<<"Nter elem : ";
		cin>>a[i];
	}
	show(a,sz);
	halfswap(a,sz);
	cout<<"\nAfter swapping from mid pos\n";
	show(a,sz);
	getch();
}