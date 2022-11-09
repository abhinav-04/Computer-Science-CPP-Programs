#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class clothing
{
	private:
	char code[21],type[11],material[11];
	int size;
	float price;
	void calc_price()
	{
		if(strcmpi(type,"trouser")==0)
		{
			if(strcmpi(material,"cotton")==0)
				price=1500;
			else
				price=1500-(1500/4);
		}
		else if(strcmpi(type,"shirt")==0)
		{
			if(strcmpi(material,"cotton")==0)
				price=1200;
			else
				price=1200-(1200/4);
		}
	}
	public:
	clothing()
	{
		strcpy(code,"not assigned");
		strcpy(type,"not assigned") ;
		strcpy(material,"not assigned") ;
		size=0;
		price=0;
	}
	void enter()
	{
		cout<<"\nEnter code: ";
		gets(code);
		cout<<"\nEnter type[trouser/shirt]: ";
		gets(type);
		cout<<"\nEnter size: ";
		cin>>size;
		cout<<"\nEnter material: ";
		gets(material);
		calc_price();
	}
	void show()
	{
		cout<<"\nCode is: "<<code;
		cout<<"\nType is: "<<type;
		cout<<"\nMareial: "<<material;
		cout<<"\nSize: "<<size;
		cout<<"\nPrice: "<<price;
	}
};
void main()
{
	clrscr();
	clothing c;
	c.enter();
	c.show();
	getch();
}

