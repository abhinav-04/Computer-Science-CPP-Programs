#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define N 100
void sel_srt(int arr[],int sz)
{
	int i,j,smallpos,temp;
	for(i=0;i<sz;i++)
	{
		smallpos=i;
		for(j=i+1;j<sz;j++)
		{
			if(arr[j]<arr[smallpos])
			{
				smallpos=j;
			}
		}
		temp=arr[smallpos];
		arr[smallpos]=arr[i];
		arr[i]=temp;
	}
}
void main()
{
	clrscr();
	int arr[N],sz;
	cout<<"\nEnter the size of array: ";
	cin>>sz;
	for(int i=0;i<sz;i++)
	{
		cin>>arr[i];
	}
	sel_srt(arr,sz);
	for(i=0;i<sz;i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}

