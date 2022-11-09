//to mohan das karam chand gandhi as mdkc gandhi
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void word(char str[])
{
	int l,i,j;
	l=strlen(str);
	cout<<str[0];
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			cout<<str[i+1]<<" ";
			j=i;
		}
	}
	cout<<"\b\b";
	for(i=j+1;i<l;i++)
	cout<<str[i];
}


void main()
{
	clrscr();
	char str[81];
	cout<<"\nEnter your name: ";
	gets(str);
	word(str);
	getch();
}