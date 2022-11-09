#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
class travel
{
	int nop_v,nop_vp;
	float tamt;
	public:
	void init()
	{
	nop_v=0;
	nop_vp=0;
	tamt=0;
	}
	void nop_vis()
	{
		nop_v++;
	}
	void nop_vis_pur()
	{
		nop_v++;
		nop_vp++;
		tamt=nop_vp*50;
	}
	void tot()
	{
		cout<<"\nTotal number of people visited  : "<<nop_v;
		cout<<"\nTotal amount collected: "<<tamt;
	}
};


void main()
{
	clrscr();
	travel tr;
	char ans='y';
	int ch;
	tr.init();
	while(ans=='y')
	{
		cout<<"\n\n1. Only visited";
		cout<<"\n2. Visited & Purchased ticket";
		cout<<"\n3. Show totals";
		cout<<"\n4. Exit";
		cout<<"\n\nNtre ur choice (1/2/3/4) : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			tr.nop_vis();
			break;
			case 2:
			tr.nop_vis_pur();
			break;
			case 3:
			tr.tot();
			break;
			case 4:
			break;
			default:
			cout<<"\nInv choice";
		}
		cout<<"\nDo u wanna continue...!";
		cin>>ans;
	}
}
