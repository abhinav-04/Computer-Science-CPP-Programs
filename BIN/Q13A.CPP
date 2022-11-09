#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float s=0,b;
	int x,p=1;
	cout<<"\nenter the value of x"<<endl;
	cin>>x;
	cout<<endl;
	for(int i=1;i<=6;i++)
{	for(int a=1;a<=i;a++)
	{ p=p*a; }
	b= pow(x,a)/p;
	if(i%2!=0)
{	s=s+b;	}
	else if(i%2==0)
{	s=s-b;	}
}	cout<<s;
	getch();
}
