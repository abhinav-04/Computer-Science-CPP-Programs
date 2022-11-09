#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{	clrscr();
	int root1,root2,delta,a,b,c;
	cout<<"\nEnter a,b and c of ax^2+bx+c=0 :\n";
	cin>>a>>b>>c;
	if (a==0)
{		cout<<"\nvalue of a cannot be zero";
		cout<<"Aborting!!!!!";    }
	else
{	delta=((b*b)-(4*a*c));
	if(delta>0)
{		root1=(-b+delta)/2*a;
		root2=(-b-delta)/2*a;
		cout<<"roots are real and unequal";
		cout<<"root1 is \t "<<root1;
		cout<<"root2 is "<<root2;	}
	else if(delta==0)
	{	root1=root2=(-b/2*a);
		cout<<"roots are real and equal"<<endl;
		cout<<"root1 is:  "<<root1;
		cout<<"\t\nroot2 is:  "<<root2;}
	else
		cout<<"roots are complex and unimaginary";

}	getch();}





