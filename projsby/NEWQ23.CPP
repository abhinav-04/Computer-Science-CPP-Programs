#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
const int sz=10;
int arr[sz];
void show(int [],int);
void is_sort(int arr[],int s)
{
	int asort=0,dsort=0;  //sorted in asc order asort counter, similarly dsort for desc
	for(int i=0;i<s;i++)
	{
		if(arr[i]<arr[i+1])
		asort++;
		else
		break;
	}
	show(arr,s);
	for(int j=0;j<s;j++)
	{
		if(arr[j]>arr[j+1])
		dsort++;
		else
		break;
	}
	if(asort==s-1)
	cout<<"\nArray sorted in asc order\n";
	else if(dsort==s)
	cout<<"\nArray is sorted in desc order\n";
	else
	cout<<"\nArray is not in sorted order\n";
}
void show(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void main()
{
	clrscr();
	int s;
	cout<<"Nter how mny elem : ";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"Nter elem : ";
		cin>>arr[i];
	}
	is_sort(arr,s);
	getch();
}