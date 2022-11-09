#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define N 100
void in_top(int ar[],int sz,int ele)
{
	for(int i=sz;i>0;i--)
	{
		ar[i]=ar[i-1];
	}
	ar[0]=ele;
	/*for(int i=0;i<sz;i++)
	a[i]=ar[i];
	ar[0]=ele;
	for(i=0;i<=sz;i++)
	ar[i+1]=a[i];*/
	for(i=0;i<=sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}
void in_bot(int ar[],int sz,int ele)
{
	ar[sz]=ele;
	for(int i=0;i<=sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}

void in_bef(int ar[],int sz,int ele,int bef)
{
	for(int i=0;i<sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	for(i=0;i<sz;i++)
	{
		if(ar[i]==bef)
		{
			for(int j=sz;j>=i;j--)
			ar[j+1]=ar[j];
			ar[i]=ele;
			break;
		}
	}
	for(i=0;i<=sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}
void in_after(int ar[],int sz,int ele,int aft)
{
	for(int i=0;i<sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	for(i=0;i<sz;i++)
	{
		if(ar[i]==aft)
		{
			for(int j=sz;j>i;j--)
			ar[j+1]=ar[j];
			ar[i+1]=ele;
			break;
		}
	}
	for(i=0;i<=sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}
void at_pos(int ar[],int sz,int ele,int pos)
{
	for(int i=0;i<sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	for(i=sz;i>=(pos-1);i--)
	ar[i+1]=ar[i];
	ar[pos-1]=ele;
	for(i=0;i<=sz;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
}

void main()
{
	clrscr();
	int arr[]={11,22,33,44};
	//in_top(arr,4,10);
	//in_bot(arr,4,20);
	//in_bef(arr,4,25,33);
	//in_after(arr,4,25,33);
	at_pos(arr,4,99,3);
	getch();
}
