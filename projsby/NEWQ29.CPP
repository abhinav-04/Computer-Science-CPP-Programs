#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void list_palindrome()
{
	ifstream fin;
	ofstream fout  ;
	int i,j,f=0;
	fin.open("words.txt");
	fout.open("pal_word.txt");
	char str[31];
	while(!fin.eof())
	{
		fin>>str;
		int l=strlen(str)  ;
		f=0;
		for(i=0,j=l-1;i<l/2;i++,j--)
		{
			if(str[i]==str[j])
			{
				f=1;
			}
			else
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
		fout<<str<<" ";
		}
	}
}

void show()
{
	ifstream f1("words.txt");
	ifstream f2("pal_word.txt");
	char ch[21];
	cout<<"\nOriginal words list\n";
	while(!f1.eof())
	{
		f1>>ch;
		cout<<ch<<" ";
	}
	f1.close();
	cout<<"\nWords that are palindromes\n";
	while(!f2.eof())
	{
		f2>>ch;
		cout<<ch<<" ";
	}
	f2.close();

}
void main()
{
	clrscr();
	ofstream fout;
	char word[31],ans='y';
	fout.open("words.txt");
	while(ans=='y')
	{
		cout<<"Nter some words: " ;
		gets(word);
		fout<<word<<" ";
		cout<<"Nter another word y/n ?";
		cin>>ans;
	}
	fout.close();
	list_palindrome();
	show();





	getch();
}

