#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void search(int arr[],int ele,int s)
{
	int i,found;
	for(i=0;i<s;i++)
	{
		if(arr[i]%2==0)
		arr[i]=2;
		else
		arr[i]=arr[i]/5;
	}
}
void main()
{
	clrscr();
	int arr[]={2,5,4,10,6,15};
	int ele,f;
	int s=6;
	//cout<<"\nEnter the element to search: ";
	//cin>>ele;
	search(arr,ele,s);
	for(int i=0;i<s;i++)
	cout<<arr[i]<<" ";
	/*f=search(arr,ele,s);
	if(f==1)
	cout<<"\nfound";
	else if(f==0)
	cout<<"\nNot found";*/
	getch();
}