#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
class iteminfo
{
	int icode,qty;
	float price,discount,netprice;
	char item[31];
	public:
	iteminfo()
	{
		icode=0;
		qty=0;
		netprice=0.0;
		discount=0.0;
		strcpy(item,NULL);
	}
	void buy()
	{
		cout<<"Nter the item code  : ";
		cin>>icode;
		cout<<"Nter the item name  : ";
		gets(item);
		cout<<"Nter the quantity   : ";
		cin>>qty;
		cout<<"Nter the item price : ";
		cin>>price;
		float disc;
		disc=finddisc();
		netprice=(qty*price)-disc;
	}
	float finddisc()
	{
		if(qty==10)
		{
			discount=(.10*(qty*price));
		}
		else if(qty>=11 && qty<=20)
		{
			discount=(.15*(qty*price));
		}
		else if(qty>20)
		{
			discount=(.20*(qty*price));
		}
		return discount;
	}
	void showall()
	{
		cout<<"\nItem code     : "<<icode;
		cout<<"\nItem name     : "<<item;
		cout<<"\nItem qty      : "<<qty;
		cout<<"\nItem price    : "<<price;
		cout<<"\nItem discount : "<<discount;
		cout<<"\nItem net price: "<<netprice;
	}
};
void main()
{
	clrscr();
	iteminfo i;
	i.buy();
	i.showall();
	getch();
}

