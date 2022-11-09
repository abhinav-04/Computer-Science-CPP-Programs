#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
class hostel
{
	int roomno,tarrif,nofdays,amt;
	char name[31];
	public:
	void checkin()
	{
		cout<<"Nter Room no.  : ";
		cin>>roomno;
		cout<<"Nter the name  : ";
		gets(name);
		cout<<"Nter the tarrif: ";
		cin>>tarrif;
		cout<<"Nter no of days : ";
		cin>>nofdays;

	}
	void checkout()
	{
		cout<<"\nRoom No.  : "<<roomno;
		cout<<"\nName is   : "<<name;
		cout<<"\nTarrif    : "<<tarrif;
		cout<<"\nNo of days: "<<nofdays;
		cout<<"\nAmount    : "<<calc();


	}

	int calc()
	{
		amt=nofdays*tarrif;
		if(amt>10000)
		amt=1.05*tarrif*nofdays;
		return amt;
	}
};
void main()
{
	clrscr();
	hostel h;
	h.checkin();
	h.checkout();
	getch();
}

