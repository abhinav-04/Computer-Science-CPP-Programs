#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
/*
primary name: stud
extension name: txt
newf=stud,txt
ofstream fout(newf)
*/
void main()
{
	clrscr();
	char pnm[9],exnm[4],newf[13];
	cout<<"\nEnter primary name: ";
	gets(pnm);
	cout<<"\nEnter the extension name: ";
	gets(exnm);
	strcpy(newf,pnm);
	strcat(newf,".");
	strcat(newf,exnm);
	cout<<newf;
	ofstream fout(newf);
	int r,n1,n2;
	char n3[31];
	cout<<"\nEnter how many rec: ";
	cin>>r;
	for(int i=0;i<r;i++)
	{
		cout<<"\nEnter code: ";
		cin>>n1;
		fout<<n1<<" ";
		cout<<"\nEnter name: ";
		gets(n3);
		fout<<n3<<" ";
		cout<<"\nEnter value: ";
		cin>>n2;
		fout<<n2<<"\n";
	}
	fout.close();
	ifstream fin(newf);
	while(!fin.eof())
	{
		fin.getline(n3,31);
		cout<<n3<<endl;
	}
	fin.close();
	getch();
}
