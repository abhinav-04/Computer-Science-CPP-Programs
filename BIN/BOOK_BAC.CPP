#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main(){
	char s[N],str[N],p[N];
	int x,y;
	clrscr();
	cout<<"enter two strings";
	gets(s);
	gets(str);
	cout<<"\nentered string is";
	puts(s);
	puts(str);
	cout<<"\nlength of string is";
	x = strlen(s);
	y = strlen(str);
	cout<<"string1: "<<x;
	cout<<"string2: "<<y;
	cout<<"\	nconcatenated string: ";
	strcal(
	s,str);
	puts(p);
	cout<<"copied string: ";
	strcpy(p,s);
	puts(p);
	cout<<"\ncopied into p";
	puts(p);
	cout<<"\nstring1: ";
	puts(s);
	if(strcmp(s,str)==0) //strings are beu=ing compared
		cout<<"\nstrings are equal";
	else
		cout<<"strings are not equal";
	getch();
	}










