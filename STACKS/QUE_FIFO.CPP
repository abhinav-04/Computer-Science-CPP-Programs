//wap to insert and delete a queue as array FIFO
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
const int sz=5;
int que[sz],fr=-1,rr=-1;
int q_in(int ele)
{
	if(rr==sz-1)
		return -1;
	else if(rr==-1)
	{
		fr=rr=0;
		que[rr]=ele;
	}
	else
	{
		rr++;
		que[rr]=ele;
	}
	return 0;
}
void show()
{
	for(int i=fr;i<=rr;i++)
	{
		cout<<que[i]<<"\n";
	}
}
int q_del(int que[])
{
	int r;
	if(fr==-1)
		return -1;
	else
	{
		r=que[fr];
		cout<<"\nDeleting element: "<<r<<endl;
		if(fr==rr)
		{
			fr=rr=-1;
		}
		else
		{
			fr++;
		}
	}return 0;
}
void main()
{
	clrscr();
	int elem,res;
	char ans='y';
	while(ans=='y')
	{
		cout<<"\nEnter any element: " ;
		cin>>elem;
		res=q_in(elem);
		if(res==-1)
		{
			cout<<"\nOverflow";
			getch();
			exit(0);
		}
		cout<<"\nWanna insert more: ";
		cin>>ans;
	}
	show();

	ans='y';
	cout<<"\nDeleting element from queue array: "<<endl;
	while(ans=='y')
	{
		res=q_del(que);
		if(res==-1)
		{
			cout<<"\nUnderflow can't delete";
			break;
		}
		cout<<"\nQueue as array after deleting"<<endl;
		cout<<"Wanna delete more: ";
		cin>>ans;
		if(fr==-1)
		cout<<"\nNO ELEMENTS ";
		else
		show();
	}
	getch();
}

