//To convert a binary number to decimal
#include<iostream.h>
#include<conio.h>
#include<math.h>
int bin2dec(int no)
{
	int rem,i=0,j,a[10],dec=0;
	while(no>0)
	{
		rem=no%10;
		a[i]=rem;
		no=no/10;
		i++;
	}
	int k=0;

	for(j=0;j<i;j++)
	{
		dec=dec+pow(2,k)*a[j];
		k++;
	}
	return dec;
}
void main()
{
	clrscr();
	cout<<"dec no."<<bin2dec(1100);
	getch();
	}