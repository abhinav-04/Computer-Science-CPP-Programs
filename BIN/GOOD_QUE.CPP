/*wap which asks user's choice if
1.add two binary no.s
2.subtract two binary numbers
3.multiply two binary numbers
4.exit
*/
/*
 1  2  3 4
12 13 14 5
11 16 15 6
10  9  8 7
*/
/*
1.dec to binary
2.dec to oct
3.dec to hex
4.exit
*/
/*
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int no;
	cout<<"\nEnter how many no.: ";
	cin>>no;
	gotoxy(no-1,no-1);
	cout<<1;
	getch();
}