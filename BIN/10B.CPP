#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int s=0,n,a=1;
	cout<<"\nenter no. of terms"<<endl;
	cin>>n;
	cout<<endl;
	//for(int i=1;i<=n;i++)
	for(int i=1;i<=n;i++)
{	s+=pow(a,2);
	a+=2;
		}
	cout<<s;
	getch();
}
