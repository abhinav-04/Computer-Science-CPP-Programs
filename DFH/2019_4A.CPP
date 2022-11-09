/* hashdisplay in c++ that would display the entire content in "matter.txt" of file in desired format "the world is round"
t#h#e# #w#o#r#l#d# #i#s# #r#o#u#n#d#*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void hashdisplay()
{
	ifstream fin("matter.txt");
	char ch;
	fin.get(ch);
	while(!fin.eof())
	{
		cout<<ch<<"#";
		fin.get(ch);
	}
	fin.close();
}
void main()
{
	clrscr();
	ofstream fout("matter.txt");
	fout<<"THE WORLD IS ROUND";
	fout.close();
	hashdisplay();
	getch();
}
