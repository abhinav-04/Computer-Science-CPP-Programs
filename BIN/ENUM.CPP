//wap to storedays of week sun to sat using enum then accept no between
//0-6 from user if days are sat/sun display"hurray it is weekend"else disp
//"it is working"
#include<iostream.h>
#include<conio.h>

enum days{sun,mon,tue,wed,thu,sat}
void main()
{
	clrscr();
	days theday;
	int dd;
	cout<<"\nEnter day of the week";
	cin>>dd;
	theday=(days)dd;
	if(theday==sun||theday==sat)
		cout<<"\nhurray it is weekend";
	else
		cout<<"\nwork sid work";
	getch();
	}