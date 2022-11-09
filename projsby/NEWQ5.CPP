#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
//q5: accept 10 integers and sort using bubble sort
//make functions accept,sort and show ,
//sort in descending order

int a[10];
void accept()
{
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"Nter elem : ";
		cin>>a[i];
	}

}
void sort(int a[])
{
	int t;
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(a[j]<a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
}

void show(int a[])
{
	for(int i=0;i<10;i++)
	cout<<a[i]<<" ";
}

void main()
{
	clrscr();
	accept();
	sort(a);
	show(a);
	getch();
}