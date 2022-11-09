//wap to accept feet and inch of two trees
//add and disp the sum using struc variable
//pass struct varibleand return struc variable
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct dist
{
	int f,i;
};
dist sum(dist d1,dist d2)
{
	dist d3;
	d3.f=d1.f+d2.f+(d1.i+d2.i)/12;
	d3.i=(d1.i+d2.i)%12;
	return d3;

};
void main()
{
	clrscr();
	dist dt1,dt2,dt3;
	cout<<"\nEnter the 1st dist in feet and inches: ";
	cin>>dt1.f>>dt1.i;
	cout<<"\nEnter the 2nd dist in feet and inches: ";
	cin>>dt2.f>>dt2.i;
	dt3=sum(dt1,dt2);
	cout<<"\ntotal feet is: "<<dt3.f;
	cout<<"\ntotal inches is: "<<dt3.i;
	getch();
	}




