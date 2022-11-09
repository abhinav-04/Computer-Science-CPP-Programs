#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int arr[10],sz;
void input_data(int arr[],int sz)
{
	int i;
	cout<<"Nter the size of array : ";
	cin>>sz;
	for(i=0;i<sz;i++)
	{
	cout<<"Nter the value in ascending order: ";
	cin>>arr[i];
	}
	cout<<"\nThe array is \n";
	for(i=0;i<sz;i++)
	cout<<arr[i]<<"\n";



}
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
		r=mid;
		break;
		}
		else if(ele<arr[mid])
			l=mid+1;
		else if(ele>arr[mid])
			b=mid-1;
	}
	return r;
}

void main()
{
	clrscr();
	int ele,sz=10;
	input_data(arr,sz);
	cout<<"\nNter the elem to search : ";
	cin>>ele;
	int r=bin_search(arr,sz,ele);
	if(r>0)
	cout<<"\nElement found at : "<<r+1;
	else
	cout<<"\nElement Not found";
	getch();
}