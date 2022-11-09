#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
int arr[10],sz;
int bin_search(int arr[],int sz,int ele)
{
	int mid,b,l,r;
	l=sz-1,r=0;
	b=0;
	while(b<l)
	{
		mid=(b+l)/2;
		if(arr[mid]==ele)
		{
		r=1;
		break;
		}
		else if(ele<arr[mid])
			b=mid+1;
		else if(ele>arr[mid])
			l=mid-1;
	}
	return r;
}
void show(int arr[],int sz)
{
	for(int i=0;i<sz;i++)
	cout<<arr[i]<<"\n";
}

void main()
{
	clrscr();
	int i;
	cout<<"Nter the size of array : ";
	cin>>sz;
	for(i=0;i<sz;i++)
	{
	cout<<"Nter the value: ";
	cin>>arr[i];
	}
	int ele;
	show(arr,sz);
	cout<<"\nNter the elem to search : ";
	cin>>ele;
	int r=bin_search(arr,sz,ele);
	if(r==1)
	cout<<"\nElement found";
	else
	cout<<"\nElement Not found";
	getch();
}