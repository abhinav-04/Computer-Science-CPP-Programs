#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
//wap to store login nd password in file password.dbf
//ask for password and login if correct disp "access allowed"
//if incorrect disp "access denied"
class login
{
	char pwd[31],uid[31];
	public:
	void read()
	{
		cout<<"Nter login    : ";
		gets(uid);
		cout<<"Nter password : ";
		gets(pwd);
	}

	void show()
	{
		cout<<"User-id : "<<uid;
		cout<<" Password : "<<pwd;
	}
	char *ret_pwd()
	{
		return pwd;
	}
	char *ret_uid()
	{
		return uid;
	}

}p[5];

void create()
{
	fstream f;
	f.open("password.dbf",ios::out|ios::binary);
	for(int i=0;i<5;i++)
	{
		p[i].read();
		f.write((char*)&p[i],sizeof(p[i]));

	}
	f.close();
}
void search()
{

	int i=0,found=0;
	fstream f;
	f.open("password.dbf",ios::in|ios::binary);
	char us[31],pw[31];
	cout<<"Nter user-id: ";
	gets(us);
	cout<<"Nter password: ";
	gets(pw);
	while(f.read((char*)&p[i],sizeof(p[i])))
	{
		if((strcmpi(us,p[i].ret_uid())==0) && (strcmpi(pw,p[i].ret_pwd())==0))
		{
			found=1;
			break;
		}
		else
		{
			found=0;
		}
		i++;
	}
	if(found==1)
	cout<<"\nAccess Allowed";
	else
	cout<<"\nAccess Denied";

	f.close();
}

void main()
{
	clrscr();
	create();
	search();
	getch();
}

