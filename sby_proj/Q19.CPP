#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()

int arr[10],sz=10;
void show();

void del(int arr[],int sz)
{
	int i,ele;
	cout<<"Nter the elemen 2 del : ";
	cin>>ele;
	for(i=0;i<sz;i++)
	{
		if(ele==arr[i])
		{
		cout<<"Elem deleted is :"<<arr[i];
		arr[i]=0;
		}
	}
	cout<<"\nThe array is : ";
	show();
}
void show()
{
	for(int i=0;i<sz;i++)
	{
	if(arr[i]!=0)
	cout<<arr[i]<<" ";
	}
}

void main()
{
	clrscr();
	cout<<"nter the size of array : ";
	cin>>sz;
	for(int i=0;i<sz;i++)
	{
	cout<<"Nter the elem  : ";
	cin>>arr[i];
	}
	char ans='y';
	while(ans=='y')
	{
		del(arr,sz);
		cout<<"do u wish to del again ";
		cin>>ans;
	}
	getch();
}