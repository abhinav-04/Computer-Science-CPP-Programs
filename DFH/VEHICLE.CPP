#include<fstream.h>
#include<conio.h>
#include<stdio.h>
/*void read -vehicle type and no. of wheels
void show-show vehicle type and no. of wheels
write a function show details to read all the records in binary file read.dat
also display count of records*/
class vehicle
{
	int vno;
	char vtype[31];
	public:
	void read()
	{
		cout<<"\nEnter vehicle type: ";
		gets(vtype);
		cout<<"\nEnter no. of wheels: ";
		cin>>vno;
	}
	void show()
	{
		cout<<"\nVehicle type: ";
		cout<<vtype;
		cout<<"\nNo. of wheels: ";
		cout<<vno;
	}
}v;
void append()
{
	fstream fil;
	fil.open("vehicle.txt",ios::binary|ios::in|ios::out);
	int nor;
	cout<<"\nEnter how many records: ";
	cin>>nor;
	for(int i=0;i<nor;i++)
	{
		v.read();
		fil.write((char*)&v,sizeof(v));
	}
	fil.close();
}
void show()
{
	fstream fil;
	int count=0;
	fil.open("vehicle.txt",ios::binary|ios::in);
	while(fil.read((char*)&v,sizeof(v)))
	{
		v.show();
		count+=1;
	}
	cout<<"\nNo. of records: "<<count;
}
void main()
{
	clrscr();
	append();
	cout<<"\nVehicle details: ";
	show();
	getch();
}