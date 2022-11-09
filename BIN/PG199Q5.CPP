//PG199 Q5
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class ticbooth
{
	int nop_vis;
	float tamt;
	public:
	void init()
{	nop_vis=0;
	tamt=0;
}
	void nop_v()
{       nop_vis++;
}
	void pt_amt()
{       tamt=tamt+2.5;
	nop_vis++;
}
	void tot()
{
	cout<<"\nTotal number of people visied: "<<nop_vis;
	cout<<"\nTotal ticket amount: "<<tamt;
}
	void tot_pp()
{
	cout<<"\nNumber of people who visited and purchased: "<<(tamt/2.5);
}
};
void main()
{
	clrscr();
	ticbooth tc;
	char ans='y';
	int ch;
	tc.init();
	while(ans=='y')
	{
		cout<<"\n1.Only visited";
		cout<<"\n2.Visited and also purchased";
		cout<<"\n3.To display the two totals";
		cout<<"\n4.To display amount of tickets sold";
		cin>>ch;
		switch(ch)
		{
	case 1:  tc.nop_v();
		 break;
	case 2:  tc.pt_amt();
		 break;
	case 3:  tc.tot();
		 break;
	case 4:  tc.tot_pp();
		 break;
		 default:
		 cout<<"\nInvalid choice";
		 }
	cout<<"\nDo you wanna continue";
	cin>>ans;
	}
	getch();
}











