#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int f,x,s=1,n;
	cout<<"\nenter value of x"<<endl;
	cin>>x;
	cout<<"\nenter no. of terms"<<endl;
	cin>>n;
	cout<<endl;
	//for(int i=1;i<=n;i++)
{	for(int a=1;a<=(n-1);a++)
	f=pow(x,a);
	s=s+f;	}
	cout<<s;
	getch();
	}