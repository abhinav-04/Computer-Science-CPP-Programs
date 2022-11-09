#include<iostream.h>
#include<conio.h>
//how to make it
//  3             02
// 56          11 12
//789       20 21 22
void main()
{
	clrscr();
	int a[3][3],i,j,n,sp;
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
		{
			cout<<"\nEnter no.";
			cin>>a[i][j];
		}
	n=2;
	for(i=0;i<=2;i++)
	{
		for(sp=i;sp<=2;sp++)
		cout<<" ";
		for(j=n;j<=2;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
		n--;
	}
}