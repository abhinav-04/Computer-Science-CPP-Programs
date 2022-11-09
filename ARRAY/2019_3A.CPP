#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define n 100
void NoTwoThree(int arr[],int N)
{
	for(int i=0;i<N;i++)
	{
		if((arr[i]%2!=0)&&(arr[i]%3!=0))
		cout<<arr[i]<<" at location "<<i<<endl;
	}
}
void main()
{
	clrscr();
	int N,arr[n];
	cout<<"\nEnter the size :";
	cin>>N;
	cout<<"\nEnter the array: ";
	for(int i=0;i<N;i++)
		cin>>arr[i];
	NoTwoThree(arr,N);
	getch();
}