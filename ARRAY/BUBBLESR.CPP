/*
i ka loop 0 se sz tak
and j ka loop 0 se sz-1 tak*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i,j,temp;
	for(i=0;i<sz;i++)
	{
		for(j=0;j<sz-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void show(int arr[],int sz)
{
	cout<<"|nThe sorted array is: ";
	for(int i=0;i<sz;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void main()
{
	clrscr();
	int arr[]={50,40,30,20,10};
	int sz=5;
	bubble_sort(arr,sz);
	show(arr,sz);
	getch();
}


