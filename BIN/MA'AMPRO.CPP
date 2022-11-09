#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	float s=1,n,a=2,p;
	cout<<"enter no. of terms";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=(n-1);i++)
{	p= 1/pow(i,a);
	s+=p;
	a=a++;     }
	cout<<"the sum of the series is: "<<s;
	getch();
}
