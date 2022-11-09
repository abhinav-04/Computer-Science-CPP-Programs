#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
#include<fstream.h>

void swappos(int arr[],int sz)
{
	ofstream fout;
	int i,t;
	fout.open("swaparr.txt");
	for(i=0;i<=sz-1;i++)
	{
		if(i%2==0)
		{
			t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
		}
		fout<<arr[i]<<" ";
	}
	fout.close();
}

void main()
{
	clrscr();
	int arr[10],sz,t;
	cout<<"Nter the size of array : ";
	cin>>sz;
	for(int i=0;i<=sz-1;i++)
	{
		cout<<"Ntre the elem : ";
		cin>>arr[i];
	}
	swappos(arr,sz);
	i=0;
	char ch;
	ifstream fin;
	fin.open("swaparr.txt");
	while(!fin.eof())
	{
		fin.get(ch);
		i++;
		cout<<ch;
	}
	fin.close();
	getch();
}