#include<fstream.h>
#include<conio.h>
#include<stdio.h>
/*wap to append book details
booknum and boook name for three books
101 eng 102 bio 103 phy*/
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
};
void append()
{
	fstream fil;
	fil.open("book.txt",ios::binary|ios::in|ios::out);
	book b;
	int nor;
	cout<<"\nEnter how many rec: ";
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
	fil.open("book.txt",ios::binary|ios::in);
	book b;
	while(fil.read((char*)&b,sizeof(b)))
	{
		b.showbook();
	}
	cout<<"\nPress any key to continue...";
	fil.close();
}
void main()
{
	clrscr();
	append();
	cout<<"\nBook details are: ";
	show();
	getch();
}