#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
	int i=1,s=0,n,a=2,b=9;
	cout<<"\nenter no. of terms"<<endl;
	cin>>n;
	cout<<endl;
       //	while(a<=(a+(3*n)))
       do
       {
       /*	do
	{
	do
	{ */
       //	while(b<=(b+(4*n)))
	if(i%2!=0)
{	s=s+(a/b);	}
	else if(i%2==0)
{       s=s-(a/b);	}
	a+=3;
	b+=3; i++;
	}while(i<=n);
       //	while(a<=(a+(3*n)));}
       //	while(a<=(b+(4*n)));
	cout<<s;
	getch();}
