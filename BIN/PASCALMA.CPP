#include<iostream.h>
#include<conio.h>

void pascal_t()
{
	int r,i,sp,j,c;
	cout<<"\nHow many rows: ";
	cin>>r;
	for(i=0;i<r;i++)
	{
		c=1;
		for(sp=i;sp<=r;sp++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
				c=1;
			else
				c=c*(i-j+1)/j;
			cout<<c<<" ";
		}
		cout<<"\n";
		}
}
void main()
{
	clrscr();
	pascal_t();
	getch();
}