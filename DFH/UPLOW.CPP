#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
	clrscr();
	char ch,c[31];
	ofstream f1("text.txt");
	ofstream f2("modtext.txt");
	cout<<"\nEnter text: ";
	gets(c);
	f1<<c;
	/*if(ch>='a'&&ch<='z')
	ch=ch-32;
	else if(ch>='A'&&ch<='Z')
	ch=ch+32;  */
	ifstream f11("text.txt");
	while(!f11.eof())
	{
		f11.get(ch);

		if(isupper(ch))
			ch=tolower(ch);
		if(islower(ch))
			ch=toupper(ch);
		f2<<ch;
	 }
	 f2.close();
	 f11.close();
	 f1.close();
	 /*ifstream f11("text.txt");
	 {
		f11.getline(ch,31);
		cout<<ch;
	 }
	 f11.close(); */
	 ifstream f22("modtext.txt");
	 {
		f22.getline(c,31);
		cout<<c;
	 }
	 f22.close();
	 getch();
	}
