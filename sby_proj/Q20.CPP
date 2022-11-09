#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
#include<fstream.h>
const int sz=10;
int arr[sz];
void show(int [],int);
void sort_arr(int arr[],int s)
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
	cout<<"\nArray is not sorted\n";
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
	sort_arr(arr,s);
	getch();
}