#include<iostream.h>
#include<conio.h>
//123 00 01 02
// 56    11 12
//  9       22
void main()
{
	clrscr();
	int a[3][3],i,j,n,sp;
	for(i=0;i<=2;i++)
		for (j=0;j<=2;j++)
	{	cout<<"\nEnter no.: ";
		cin>>a[i][j];
	}
	n=0;
	for(i=0;i<=2;i++)
	{
		for(sp=2;sp>=i;)
			cout<<" ";
			for(j=n;j<=0;j++)
			cout<<a[i][j];
		}
	}
	getch();
}

