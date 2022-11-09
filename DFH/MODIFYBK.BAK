#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class book
{
	int bno;
	char bname[31];
	public:
	void readbook()
	{
		cout<<"\nEnter the book no. :";
		cin>>bno;
		cout<<"\nEnter book name: ";
		gets(bname);
	}
	void showbook()
	{
		cout<<"\nBook num: "<<bno;
		cout<<"\nBook name: "<<bname;
	}
	void modify_book()
	{
		cout<<"\nEnter the modified book name: ";
		gets(bname);
	}
	int ret_bookno()
	{
		return bno;
	}
};
void append()
{
	fstream fil;
	fil.open("book.dat",ios::binary|ios::out);
	book b;
	int nor;
	cout<<"\nEnter no. of records:";
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
	fil.open("book.dat",ios::binary|ios::in|ios::out);
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
	fstream fil;
	fil.open("book.dat",ios::binary|ios::in|ios::out);
	book b;
	int bkno;
	cout<<"\nEnter book no. to modify: ";
	cin>>bkno;
	while(fil.read((char*)&b,sizeof(b)))
	{
		if(bkno==b.ret_bookno())
		{
			int pos=fil.tellg();
			fil.seekp(pos-sizeof(b));
			b.ret_bookno();
			b.modify_book();
			fil.write((char*)&b,sizeof(b));
		}
	}
	fil.close();
}
void main()
{
	clrscr();
	append();
	cout<<"\ncontents before modification: ";
	show();
	modify();
	cout<<"\nContents after modification: ";
	show();
	getch();
}