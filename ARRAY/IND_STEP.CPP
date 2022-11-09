#include<iostream.h>
#include<conio.h>
#include<stdio.h>
/*wap to create a func to disp the array from index given,step value given,
count given,then add them
eg a[]=2,3,4,5,6,7,8
index =3
step =2
count =5
*/
#define N 100
int sum_index(int arr[],int ind,int step,int ctr,int sz)
{
	int i,j,k,sum=0,c=0,st=step;
	for(j=ind;j<sz;)
	{
		cout<<arr[j]<<" ";
		sum+=arr[j];
		c=c+1;
		if(c==ctr)
		{
		break;
		}
		j+=st;
		if(j>sz-1)
		{
		ind=j-sz;
		j=ind;
		}
	}
	return sum;
}
void main()
{
	clrscr();
	int arr[N];
	int ind,step,count,sz,res;
	cout<<"\nEnter size: ";
	cin>>sz;
	for(int i=0;i<sz;i++)
	{
		cout<<"Enter the elements: ";
		cin>>arr[i];
	}
	cout<<"\nEnter index value: ";
	cin>>ind;
	cout<<"\nEnter step value: ";
	cin>>step;
	cout<<"\nEnter count value: ";
	cin>>count;
	res=sum_index(arr,ind,step,count,sz);
	cout<<res;
	getch();
}