#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void func_pat(int x,int n)
{       float sum=0;
	float f=1,a;
	for(int i=1;i<=n+1;i++)
{	f=f*i;
	a=pow(x,(i-1));
	sum=sum+(a/f);
}	cout<<sum;
}
void main()
{       clrscr();
	int y,m;
	cout<<"\nEnter the value of x";
	cin>>y;
	cout<<"\nEnter the value of n";
	cin>>m;
	//cout<<"\nSum of the series is: "<<
	func_pat(y,m);
	getch();

}


