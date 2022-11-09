/*Write a definition of class box whose
private data members are:
boxno int
side float
area float
exexarea()(calc and assign area as s*s)

public members:
getbox() func allows to enter val boxno,side
and call execarea() to calc area
showbox() to disp boxno,side and area
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class box
{
	private:
	int boxno;
	float side,area;
	void execarea()
	{
		area=side*side;
	}
	public:
	void getbox()
	{
		cout<<"\nenter the box no.: ";
		cin>>boxno;
		cout<<"\nEnter the side: ";
		cin>>side;
		execarea();
	}
	void showbox()
	{
		cout<<"\nBox no.: "<<boxno<<endl;
		cout<<"\Box side: "<<side;
		cout<<"\nArea: "<<area;
	}
};
void main()
{
	clrscr();
	box b;
	b.getbox();
	b.showbox();
	getch();
}