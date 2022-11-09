#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,res;
	char ans;
	randomize();
	do
	{
		n1=(rand()%9)+1;
		n2=(rand()%9)+1;
		lab1:  //means label1
		cout<<"\nHow much is: "<<n1<<" * "<<n2<<" : ";
		cin>>res;
		if(n1*n2==res)
		{
			cout<<"\nVery Good";
		}
		else
		{
			cout<<"\nTry Again";
			goto lab1;
		}
	cout<<"\nDo you wish to continue..!";
	cin>>ans;
	}while(ans=='y');
}
