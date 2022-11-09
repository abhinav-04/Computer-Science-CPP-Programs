#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void  main()
{
	clrscr();
	ofstream fout;
	fout.open("poem.txt");  //file type output file system
	fout<<"you all are great so keep awake\n";
	fout.close();
	ifstream fin;
	fin.open("poem.txt");
	char ch;
	int ctr=0,words=0;
	while(!fin.eof()) //eof-end of file
	{
		fin.get(ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		ctr++;
		if(ch==' ')
		words++;
	}
	fin.close();
	cout<<"\nTotal no. of vowels: "<<ctr;
	cout<<"\nTotal no. of words: "<<words+1;
	getch();
}