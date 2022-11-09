#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class city
{
	private:
	int code;
	char cname[31];
	long pop;
	float km,density;
	void dencal()
	{
		density=pop/km;
	}
	public:
	void record()
	{
		cout<<"\Enter city code: ";
		cin>>code;
		cout<<"\nEnter city name: ";
		gets(cname);
		cout<<"\nEnter the population of city: ";
		cin>>pop;
		cout<<"\nEnter area coverage: ";
		cin>>km;
		dencal();
	}
	void view()
	{
		cout<<"\nThe city code is "<<code;
		cout<<"\nThe city name: "<<cname;
		cout<<"\nThe population of city: "<<pop;
		cout<<"\nThe area coverage: "<<km;
		cout<<"\nThe density of population is: "<<density;
		if(density>10000)
		cout<<"\nHighly populated city";
	}
};
void main()
{
	clrscr();
	city a;
	a.record();
	a.view();
	getch();
}


