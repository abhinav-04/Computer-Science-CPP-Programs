#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct book
{
	int bno;
	char bnm[20];
};
void stkpush(book b[],int &t)
{
	for(i=t;i<=2;i++,t++)
	{
		cout<<"\nEnter book num: ";
		cin>>b[i].bno;
		cout<<"\nEnter book name: ";
		gets(b[i].bnm);
	}
}
void stkpop(book b[],int &t)
{
	if(t<0)
	cout<<"\nUnderflow";
	else
	{
		cout<<"\nPopping element: "<<b[t].bno<<" "<<b[t].bnm;
		t--;
	}
}
void show(book b[],int &t)
{
	for(int i=t;i>=0;i--)
		cout<<b[i].bno<<" "<<b[i].bnm<<endl;
}
void main()
{
	clrscr();
	book b[3];
	int t=0;
	stkpush(b,t);
	show(b,t);
	stkpop(b,t);
	show(b,t);
	getch();
}
