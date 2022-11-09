#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
//q3 : store few settences and count to and the

void main()
{
	clrscr();
	ofstream fout("sent.txt");
	fout<<"To succeed have the momentum.";
	fout<<" The more they succeed,";
	fout<<" the more they find a way to succeed";
	fout.close();

	char str[31];
	int toctr=0,thectr=0;
	ifstream fin;
	fin.open("sent.txt");
	while(!fin.eof())
	{
		fin>>str;
		if(strcmpi(str,"to")==0 )
		toctr++;
		if(strcmpi(str,"the")==0)
		thectr++;
	}
	cout<<"\nCount of word \"to\" is : "<<toctr;
	cout<<"\nCount of word \"the\" is : "<<thectr;
	fin.close();
	getch();
}