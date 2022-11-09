#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,sp,lim;
	cout<<"\nEnter the lim: ";
	cin>>lim;
	for(i=1;i<=lim;i++)
	{
		for(sp=i;sp<=lim;sp++)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
			if(j>=10)
				cout<<(j%10);
			else
				cout<<j;
		}
		for(k=j-2;k>=1;k--)
		{      	if(k>=10)
				cout<<k%10;
			else
				cout<<k;
		}
		cout<<"\n";
	}
	lim=lim-1;
	int n=lim;
	for(i=1;i<=lim;i++)
	{
		cout<<" ";
		for(sp=1;sp<=i;sp++)
		cout<<" ";
		for(j=1;j<=n;j++)
		{
			if(j>=10)
				cout<<(j%10);
			else
				cout<<j;
		}
		for(k=j-2;k>=1;k--)
		{      	if(k>=10)
				cout<<k%10;
			else
				cout<<k;
		}
		cout<<endl;
		n--;
	}
	getch();
	}