//wap to accept h,m,s to reach a destination and return from
//disp the tot time taken
//1 35 45
//
#include<iostream.h>
#include<conio.h>


struct time
{
	int h,m,s;
};
time sum(time t1,time t2)
{
	time t3;
	t3.h=t1.h+t2.h;
	t3.m=t1.m+t2.m;
	t3.s=t1.s+t2.s;
	if((t3.s)>=60)
	{
		t3.s=t3.s-60;
		t3.m=t3.m+1;
	}

	if(t3.m>=60)
	{
			t3.m=t3.m-60;
			t3.h=t3.h+1;
	}
	return t3;
      }

	//t1.m=0;t2.m=0;t3.m=0;t3.h=0;
       /*	if((t3.s)>=60)
	{
		t3.s=(t1.s+t2.s)-60;
		t3.m=t3.m+1;
	}
	else
	{
		t3.s=t1.s+t2.s;

	}
	if((t1.m+t2.m)>=60)
	{
			t3.m=(t3.m+t1.m+t2.m)-60;
			t3.h=t3.h+1;
			t3.h=t3.h+t1.h+t2.h;
	}
	return t3;
      }  */
void main()
{
	clrscr();
	time tt1,tt2,tt3;
	cout<<"\nEnter time 1 in (hours,min,sec)";
	cin>>tt1.h>>tt1.m>>tt1.s;
	cout<<"\nEnter time 2 in (hours,min,sec)";
	cin>>tt2.h>>tt2.m>>tt2.s;
	tt3=sum(tt1,tt2);
	cout<<"\nthe added time is: ";
	cout<<tt3.h<<":"<<tt3.m<<":"<<tt3.s;
	getch();
	}