#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class book
{
	int bno;
	char bname[21];
	public:
	void readbook()
	{
		cout<<"\nEnter book number: ";
		cin>>bno;
		cout<<"\nEnter book name: ";
		gets(bname);
	}
	void showbook()
	{
		cout<<bno<<":"<<bname;
	}
	void modify_book()
	{
		cout<<"\nEnter modified book name: ";
		gets(bname);
	}
	int retbookno()
	{
		return bno;
	}
};
void append()
{
	int nor;
	fstream fil;
	fil.open("book.dat",ios::binary|ios::out);

	book b;
	cout<<"\nHow many records: ";
	cin>>nor;
	for(int i=0;i<nor;i++)
	{
		b.readbook();
		fil.write((char*)&b,sizeof(b));
	}
	fil.close();
}
void show()
{
	fstream fil;
	fil.open("book.dat",ios::binary|ios::in);
	book b;
	while(fil.read((char*)&b,sizeof(b)))
	{
		b.showbook();
	}
	cout<<"\nPress any key to continue: ";
	fil.close();
}
void modify()
{
	int pos;
	fstream fil;
	fil.open("book.dat",ios::binary|ios::out|ios::in);
	book b;
	int bkno;
	cout<<"\nEnter book number to modify: ";
	cin>>bkno;
	while(fil.read((char*)&b,sizeof(b)))
	{
		if(bkno==b.retbookno())
		{
			pos=fil.tellg();
			fil.seekp(pos-sizeof(b));
			b.retbookno();
			b.modify_book();
			fil.write((char*)&b,sizeof(b));
		}
	}
	fil.close();
}
void deletebook()
{
	int bno;
	book b;
	fstream fil,fil1;
	fil.open("book.dat",ios::binary|ios::out|ios::in);
	fil1.open("book1.dat",ios::binary|ios::in|ios::out);
	cout<<"\nEnter book number to delete: ";
	cin>>bno;
	while(fil.read((char*)&b,sizeof(b)))
	{
		if(bno==b.retbookno())
		{
			cout<<"\nDeleting book number: "<<bno<<endl;
		}
		else
		{
			fil1.write((char*)&b,sizeof(b));
		}
	}
	fil.close();
	fil1.close();
	remove("book.dat");
	rename("book1.dat","book.dat");
}
void main()
{
	clrscr();
	append();
	show();
	modify();
	cout<<"\nContents after modification: ";
	show();
	deletebook();
	show();
	getch();
}



