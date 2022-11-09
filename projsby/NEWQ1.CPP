#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
//wap to create a udf which accepts an
//int array and size as arg and swap odd loc
//elem with odd pos elem

void swapoddeven(int a[],int sz)
{
	int i,t;
	if(sz%2==0)
	{
		for(i=0;i<sz;i++)
		{
			if(i%2==0)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	else
	{
		for(i=0;i<sz-1;i++)
		{
			if(i%2==0)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}

}
void show(int a[],int sz)
{
	for(int i=0;i<sz;i++)
	cout<<a[i]<<" ";
}

void main()
{
	clrscr();
	int sz,a[10];
	cout<<"How many elements : ";
	cin>>sz;
	for(int i=0;i<sz;i++)
	{
		cout<<"Nter elem : ";
		cin>>a[i];
	}

	cout<<"\nArray before swapping\n";
	show(a,sz);
	swapoddeven(a,sz);
	cout<<"\nArray after swapping\n";
	show(a,sz);
	getch();
}