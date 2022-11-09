#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class stack
{
	int top,stk[5];
	public:
	void init()
	{
		top=-1;
	}
	void push()
	{
		char ans='y';
		while (ans=='y')
		{
			cout<<"\nEnter the ele: ";
			cin>>stk[++top];
			cout<<"\nDo you wanna add more: ";
			cin>>ans;
		}
	}
	void pop()
	{
		if(top==0)
		{
			cout<<"Underflow";
		}
		else
		{
			cout<<stk[top--];
		}
	}
	void show()
	{
		for(int i=top;i>=0;i--)
		cout<<stk[i]<<" ";
	}
};
void main()
{
	clrscr();
	stack s;
	int n;
	char ans='y';
	s.init();
	s.push();
	s.show();
	while(ans=='y')
	{
		cout<<"\nPopping...";
		s.pop();
		cout<<"Wanna delete more...?";
		cin>>ans;
	}
	s.show();
	getch();
}