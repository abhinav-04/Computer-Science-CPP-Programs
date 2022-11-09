#include<iostream.h> //cout,cin
#include<stdio.h>    //gets(),puts()
#include<conio.h>    //clrscr(),getch()
#include<string.h>   //strcpy(),strcat()
#include<fstream.h>

class adm
{
	char nm[31],cat[31],gen,cls[5];
	public:
	void input()
	{
	cout<<"Nter the stud name : ";
	gets(nm);
	cout<<"Nter the class :";
	gets(cls);
	cout<<"Nter the category (BSP/NBSP) : ";
	gets(cat);
	cout<<"Nter the gender : ";
	cin>>gen;
	}
	void show()
	{
		cout<<nm<<"\t"<<cls<<"\t\t"<<cat<<"\t\t"<<gen;
		cout<<endl;
	}
	char *retcat()
	{
		return cat;
	}
	char retgen()
	{
		return gen;
	}

};
void count()
{
	fstream fin;
	adm a[10];
	fin.open("stud.dat",ios::out|ios::binary|ios::trunc);
	int rec=0,i;
	int bsp,nbsp,boy,gir;
	bsp=nbsp=boy=gir=0;
	cout<<"Nter how many rec u wanna enter : ";
	cin>>rec;
	for(i=0;i<rec;i++)
	{
	      a[i].input();
	      fin.write((char*)&a[i],sizeof(a[i]));
	};
	fin.close();
	fin.open("stud.dat",ios::in|ios::binary);
	clrscr();
	cout<<"---------------------------------------------\n";
	cout<<"Name     class      cat(BSP/NBSP)    gender\n";
	cout<<"---------------------------------------------\n";
	i=0;
	while(i<rec)
	{
		fin.read((char*)&a[i],sizeof(a[i]));
		a[i].show();
		if(strcmpi(a[i].retcat(),"bsp")==0)
		bsp++;
		else if(strcmpi(a[i].retcat(),"nbsp")==0)
		nbsp++;
		if(a[i].retgen()=='m')
		boy++;
		else if(a[i].retgen()=='f')
		gir++;
		i++;
	}
	cout<<"\n---------------------------------------------";
	fin.close();
	cout<<"\nTotal BSP   :"<<bsp;
	cout<<"\nTotal NBSP  :"<<nbsp;
	cout<<"\nTotal boys  :"<<boy;
	cout<<"\nTotal girls :"<<gir;
}
void main()
{
	clrscr();
	count();
	getch();
}