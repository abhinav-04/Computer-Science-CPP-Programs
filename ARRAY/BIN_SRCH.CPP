#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int bsearch(int a[],int s,int ele)
{
	int mid;
	int f=0;
	int l=s-1;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(a[mid]==ele)
		return mid;
		else if(ele>a[mid])
		f=mid+1;   //+1 because already checked at mid
		else
		l=mid-1;  //similarly -1
	}
	return -1;
}
void main()
{
	clrscr();
	int arr[]={2,3,4,5,6,7,8};
	int ele,sz=7;
	cout<<"\nenter element to search: ";
	cin>>ele;
	int fn=bsearch(arr,sz,ele);
	if(fn>0)
	cout<<"ele found at: "<<fn+1;
	else
	cout<<"\nNot found";
	getch();
}

