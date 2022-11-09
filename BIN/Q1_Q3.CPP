#define N 100
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void uplo(char str[N])
{	for(int i=0;str[i]!='\0';i++)
{	if ((str[i]>='a')&&(str[i]<='z'))
	str[i]=str[i]-32;
	else
	str[i]=str[i]+32;   }
	}
void main()
{	char a[N];
	clrscr();
	cout<<"enter the string";
	gets(a);
	uplo(a);
	puts(a);
	getch();
	}
