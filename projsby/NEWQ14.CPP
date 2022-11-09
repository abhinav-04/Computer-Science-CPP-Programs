#include<fstream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()

class elect
{
	char cname[31];
	int cur_read,prev_read,cu;
	float amt;
	public:
	void input()
	{
		cout<<"Nter customers name  :";
		gets(cname);
		cout<<"Nter current reading : ";
		cin>>cur_read;
		cout<<"Nter previous reading: ";
		cin>>prev_read;
	}
	void calc()
	{
		cu=cur_read-prev_read;
		if(cu<=100)
		amt=(2*cu);
		else if(cu>100 &&cu<=200)
		amt=200+3.25*(cu-100);
		else if(cu>200 && cu<=300)
		amt=200+325+4.75*(cu-200);
		else if(cu>300)
		amt=200+325+475+5.25*(cu-300);
	}
	void show()
	{
		cout<<"\n"<<cname<<"\t"<<cur_read<<"\t"<<prev_read<<"\t"<<cu<<"\t"<<amt;
	}
};
void append()
{
	fstream f1;
	f1.open("cgeb.txt",ios::binary|ios::out);
	elect e[5];
	for(int i=0;i<=4;i++)
	{
		e[i].input();
		e[i].calc();
		f1.write((char*)&e[i],sizeof(e[i]));
	}
	f1.close();
}
void display()
{
	int i=0;
	fstream f2;
	elect e[5];
	f2.open("cgeb.txt",ios::binary|ios::in);

	while(f2.read((char*)&e[i],sizeof(e[i])))
	{
		e[i].show();
		i++;
	}
	f2.close();

}
void main()
{
	clrscr();
	append();
	cout<<"\n------------------------------------------------\n";
	cout<<"Cust\tcurr\tprev\tcons\tbill\n";
	cout<<"Num\tread\tread\tunit\tamt";
	cout<<"\n-------------------------------------------------\n";
	display();
	cout<<"\n--------------------------------------------------\n";
	getch();
}