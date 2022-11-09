#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	float s=1.0,p=1.0;
	int n;
	cout<<"\nenter no. of terms"<<endl;
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
{       for(int a=1;a<=i;a++)
	p=p*a;
	s=s+(1.0/p);
}	cout<<s;
	getch();
}