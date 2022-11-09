#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define N 100
void replace(int a[],int sz)
{
	int temp;
	for(int i=0;i<sz/2;i++)
	{
		if(sz%2==0)
		{
			temp=a[i];
			a[i]=a[(sz/2)+i];
			a[(sz/2)+i]=temp;
		}
		else
		{
			temp=a[i];
			a[i]=a[(sz/2)+1+i];
			a[(sz/2)+1+i]=temp;
		}
	}
}
void main()
{
	clrscr();
	int a[N],sz;
	cout<<"\nEnter the size of array: ";
	cin>>sz;
	cout<<"\nEnter the elements: ";
	for(int i=0;i<sz;i++)
	cin>>a[i];
	cout<<"\nThe elements are: ";
	for(i=0;i<sz;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	replace(a,sz);
	for(i=0;i<sz;i++)
	cout<<a[i]<<" ";
	getch();
}


