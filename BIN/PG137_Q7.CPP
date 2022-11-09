//137 Q7
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define N 5
int sum(int a[])
{
	int sum=0,i;
	for(i=0;i<N;i++)
	sum=sum+a[i];
	return sum;
}
int sum(int a[],char ch)
{
	int esum=0,osum=0,i;
	if(ch=='E'||ch=='e')
	{
		for(i=0;i<N;i++)
		if(a[i]%2==0)
		esum=esum+a[i];
		return esum;
	}
	if(ch=='O'||ch=='o')
	{
		for(i=0;i<N;i++)
		if((a[i]%2)!=0)
		osum=osum+a[i];
		return osum;
	}
	else
	return 0;
}
void main()
{
	clrscr();
	int a[N];
	char ch;
	cout<<"\nEnter the elements: ";
	for(int i=0;i<N;i++)
	cin>>a[i];
	cout<<"\nSum of all elements are: ";
	cout<<sum(a);
	cout<<"\nEnter the character: ";
	cin>>ch;
	cout<<sum(a,ch);
	getch();
}








