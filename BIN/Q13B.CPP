#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float s=0,p;
	int x,n;
	cout<<"\nenter x"<<endl;
	cin>>x;
	cout<<"\nenter no. of terms: ";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
{       // for(int a=1;a<=i;a++)
	p=(pow(x,i))/i;
	s=s+p;
}	cout<<s;
	getch();
	}