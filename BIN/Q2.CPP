#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void longe(char a[n],char b[n],char c[n])
{	int x,y,z;
	x= strlen(a);
	y= strlen(b);
	z= strlen(c);
	if ((x>y)&&(x>z))
	puts(a);cout<<" is longest";
	if ((y>x)&&(y>z))
	puts(a);cout<<" is longest";
	if ((z>y)&&(z>x))
	puts(a);cout<<" is longest";
