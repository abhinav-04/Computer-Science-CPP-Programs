/*write a func totteach() to read binary files school.dat find total no. of
teachers whose data is stored in files and display*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
class school
{
	int scode;
	char sname[20];
	int not;
	public:
	void display()
	{
		cout<<scode<<"#"<<sname<<"#"<<not<<endl;
	}
	int rnot()
	{
		return not;
	}
	void input()
	{
		cout<<"\nEnter school code: ";
		cin>>scode;
		cout<<"\nEnter scool name: ";
		gets(sname);
		cout<<"\nEnter no. of teachers: ";
		cin>>not;
	}
	void totteach();
};
void append()
{
	fstream f;
	school s;
	f.open("school.dat",ios::binary|ios::app|ios::in);//app is used to append
	int i,rec;			   //i.e. add new data when program ran again it will add new data and also keep old data that was entered when the program was ran last time
	cout<<"\nEnter how many records: ";
	cin>>rec;
	for(i=0;i<rec;i++)
	{
		s.input();
		f.write((char*)&s,sizeof(s));
	}
	f.close();
}
void school::totteach()
{
	fstream f;
	f.open("school.dat",ios::binary|ios::in);
	school s;
	int sum=0;
	while(f.read((char*)&s,sizeof(s)))
	{
		if(s.rnot()>0)
		sum+=s.not;
	}
	cout<<"\nTotal no. of teachers are: "<<sum;
}
void show()
{
	fstream f;
	school s;
	f.open("school.dat",ios::binary|ios::in);
	while(f.read((char*)&s,sizeof(s)))
	{
		s.display();
	}
	f.close();
}
void main()
{
	clrscr();
	school s;
	append();
	show();
	s.totteach();
	getch();
}