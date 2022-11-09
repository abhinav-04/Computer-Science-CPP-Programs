#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct Date
{	short dd;
	short mm;
	short yy;
};

class Initial
{	int acno;
	char name[15];
	char add[20];
	float balance;
     public:
	Initial()
	{	acno=0;
		balance=0.0;
	}
	void add_to_file(int t_acno,char t_name[15],char t_add[15],float);
	void disp_list(void);
	int found_acct(int a);
	int recordno(int t_acno);
	char *return_name(int t_acno);
	char *return_add(int t_acno);
	float give_balance(int t_acno);
	void del_act(int);
	void update_bal(int t_acno,char t_name[15],char t_add[20],float t_balance);
	int last_accno(void);
};

class Account
{	int acno;
	Date dot;
	char tran;
	float amt;
	float bal;
     public:
	Account()
	{	acno=0;
		tran='d';
		amt=bal=0.0;
	}
	void add_file(int,Date,char,float,float);
	void new_act();
	void disp_act();
	void trans();
	void clear(int,int);
	void head_for_disp(int t_acno);
};

int Initial::recordno(int t_acno)
{	ifstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	int count=0;
	while(fin.read((char *)this,sizeof(Initial)))
	{       count++;
		if(acno==t_acno)
			break;
	}
	fin.close();
	return count;
}
void Initial::update_bal(int t_acno,char t_name[15],char t_add[20],float t_balance)
{	int recno;
	recno=recordno(t_acno);
	ofstream fout;
	fout.open("INITIAL.DAT",ios::out|ios::ate);
	strcpy(name,t_name);
	strcpy(add,t_add);
	balance=t_balance;
	int loc;
	loc=(recno-1) * sizeof(Initial);
	fout.seekp(loc);
	fout.write((char *)this,sizeof(Initial));
	fout.close();
}
char *Initial::return_name(int t_acno)
{	ifstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	char t_name[15];
	while(fin.read((char *)this,sizeof(Initial)))
	{	if(acno==t_acno)
		{	strcpy(t_name,name);
			break;
		}
	}
	fin.close();
	return t_name;
}
char *Initial::return_add(int t_acno)
{	ifstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	char t_add[20];
	while(fin.read((char *)this,sizeof(Initial)))
	{	if(acno==t_acno)
		{	strcpy(t_add,add);
			break;
		}
	}
	fin.close();
	return t_add;
}
float Initial::give_balance(int t_acno)
{	ifstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	float t_balance;
	while(fin.read((char *)this,sizeof(Initial)))
	{	if(acno==t_acno)
		{	t_balance=balance;
			break;
		}
	}
	fin.close();
	return t_balance;
}
void Account::clear(int c,int r)
{
	for(int j=c;j<=79;j++)
	{	gotoxy(j,r);
		cout<<" ";
	}
}
void Account::head_for_disp(int t_acno)
{	Date d;
	struct date s;
	getdate(&s);
	d.dd=s.da_day;
	d.mm=s.da_mon;
	d.yy=s.da_year;
	gotoxy(63,2);
	cout<<"Date : "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	gotoxy(4,2);
	cout<<"Account No. : "<<t_acno;
	Initial ini;
	char t_name[15],t_add[20];
	strcpy(t_name,ini.return_name(t_acno));
	strcpy(t_add,ini.return_add(t_acno));
	gotoxy(25,2);
	cout<<t_name;
	gotoxy(25,3);
	cout<<t_add;
	gotoxy(4,5);
	cout<<"Global Report of Account";
	gotoxy(1,6);
	for(int j=1;j<=79;j++)
		cout<<"=";
	gotoxy(4,7);
	cprintf("Date                         Deposit     Withdraw                Balance");
	gotoxy(1,8);
	for(j=1;j<=79;j++)
		cout<<"=";
}


void Account::add_file(int t_acno,Date d,char t_tran,float t_amt,float t_bal)
{       acno=t_acno;
	dot=d;
	tran=t_tran;
	amt=t_amt;
	bal=t_bal;
	ofstream fout;
	fout.open("BANKING.DAT",ios::app);
	fout.write((char *)this,sizeof(Account));
	fout.close();
}

void Account::new_act()
{       clrscr();
	cout<<"\t\t\t BANK MANAGEMENT ";
	cout<<"\n\t\t\t=================";
	cout<<"\n\t\t\t OPEN NEW ACCOUNT ";
	cout<<"\n\t\t\t==================";
	char ch;
	int i,valid,leap;
	Initial in;
	Date d;
	struct date s;
	getdate(&s);
	d.dd=s.da_day;
	d.mm=s.da_mon;
	d.yy=s.da_year;
	int t_acno;
	t_acno=in.last_accno();
	t_acno++;
	char t_name[15],t[10],t_add[20];
	float t_bal=0.0,t_amt=0.0;
	gotoxy(5,6);
	cout<<"Date : "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	gotoxy(5,8);
	cout<<"Account No.#"<<t_acno;
	gotoxy(5,10);
	cout<<"Name          : ";
	gotoxy(5,11);
	cout<<"Date Of Birth : ";
	gotoxy(5,12);
	cout<<"Address       : ";
	gotoxy(5,14);
	cout<<"Initial Deposit : ";
	do
	{	clear(20,10);
		clear(5,23);
		gotoxy(5,23);
		cout<<" Enter Name of the Person";
		gotoxy(5,24);
		cout<<"--------------------------";
		valid=1;
		gotoxy(20,10);
		gets(t_name);
		strupr(t_name);
		if(t_name[0]=='0'|| strlen(t_name)==0 || strlen(t_name)>15)
		{	valid=0;
			gotoxy(5,23);
			cprintf("\nInvalid Name........         ");
			getch();
		}
	}while(!valid);
		clear(5,23);
		clear(6,30);
		gotoxy(5,22);
		cout<<" Enter Date Of Birth";
		gotoxy(5,23);
		cout<<"---------------------------";
		Dayenter:
		 gotoxy(6,24);
		 cout<<"Enter The Date (dd) : ";
		 gotoxy(6,27);
		 cin>>d.dd;
		 clear(6,24);
		Monthenter:
		 gotoxy(6,24);
		 cout<<"Enter The month (mm) : ";
		 gotoxy(6,27);
		 cin>>d.mm;
		 clear(6,24);
		Yearenter:
		 gotoxy(6,24);
		 cout<<"Enter The Year (yy) : ";
		 gotoxy(6,27);
		 cin>>d.yy;
		 clear(6,23);
		 leap=(d.yy%100==0)?(d.yy%400==0?1:0):(d.yy%4==0?1:0);
		 if(d.yy<1900)
		 {
		   gotoxy(6,24);
		   cout<<"Invalid Age!!!";
		   getch();
		   clear(6,24);
		   goto Yearenter;
		 }
		 if((d.yy)>s.da_year-18)
		 {
		  gotoxy(8,24);
		  cout<<"AGE SHOULD BE ABOVE EIGHTEEN YEARS!!!";
		  getch();
		  clear(7,24);
		  goto Yearenter;
		 }
		 if(d.mm==2)
		 {
		   if(leap==1)
		   {
		     if(d.mm<1 || d.mm>29)
		     {
		      gotoxy(8,24);
		      cout<<"\nDay is wrong!!!";
		      getch();
		      clear(7,24);
		      goto Dayenter;
		     }
		   }
		   else if(d.dd<1 || d.dd>28)
		   {
		    gotoxy(8,24);
		    cout<<"Date is wrong!!!";
		    getch();
		    clear(7,24);
		    goto Dayenter;
		   }
		 }
		 else if(d.mm==1 || d.mm==3 || d.mm==5 || d.mm==7 || d.mm==8 || d.mm==10 || d.mm==12)
		 {
		  if(d.dd<1 || d.dd>31)
		  {
		   gotoxy(8,24);
		   cout<<"Day is wrong!!!";
		   getch();
		   clear(7,24);
		   goto Dayenter;
		  }
		 }
		 else if(d.mm==2 || d.mm==4 || d.mm==6 || d.mm==9 || d.mm==11)
		 {
		  if(d.dd<1 || d.dd>30)
		  {
		   gotoxy(8,24);
		   cout<<"Day is wrong!!!";
		   getch();
		   clear(7,24);
		   goto Dayenter;
		  }
		 }
		 else
		 {
		  gotoxy(8,24);
		  cout<<"Month is wrong!!!";
		  getch();
		  clear(7,24);
		  goto Monthenter;
		 }
		 gotoxy(20,11);
		 cout<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	do
	{	clear(20,12);
		clear(5,22);
		clear(5,23);
		gotoxy(5,23);
		cout<<" Enter Address of the Account holder : ";
		gotoxy(5,24);
		cout<<"------------------------------------";
		valid=1;
		gotoxy(20,12);
		gets(t_add);
		strupr(t_add);
		if(t_add[0]=='0'|| strlen(t_add)==0 || strlen(t_add)>20)
		{	valid=0;
			gotoxy(5,25);
			cout<<"Invalid Address.........!!!";
			getch();
		}
	}while(!valid);
	do
	{	clear(23,14);
		clear(5,23);
		clear(5,24);
		gotoxy(5,23);
		cout<<" Enter Initial Amount to be deposited : ";
		gotoxy(5,24);
		cout<<"--------------------------------------";
		valid=1;
		gotoxy(23,14);
		gets(t);
		t_amt=atof(t);
		t_bal=t_amt;
		if(t_bal<500)
		{	valid=0;
			gotoxy(5,23);
			cprintf("Should not be less than 500           ");
			getch();
		}
	}while(!valid);
	clear(5,23);
	clear(5,24);
	do
	{	clear(5,17);
		gotoxy(5,17);
		cout<<"Do you want to save the record (Y/N) : ";
		ch=getche();
		if(ch=='0')
			fflush(stdin);
		else
			ch=toupper(ch);
	}while(ch!='N' && ch!='Y');
	if(ch=='N')
		return;
	char t_tran='D';
	in.add_to_file(t_acno,t_name,t_add,t_bal);
	add_file(t_acno,d,t_tran,t_amt,t_bal);
}
void Account::disp_act()
{	clrscr();
	char t_acc[10];
	int j;
	float tamt=0.0,damt=0.0,wamt=0.0;
	int t,t_acno;
	gotoxy(71,1);
	cout<<"<0>=Exit";
	gotoxy(5,5);
	cout<<"Enter account No. : ";
	gets(t_acc);
	t=atoi(t_acc);
	t_acno=t;
	if(t_acno==0)
		return;
	clrscr();
	Initial ini;
	if(!ini.found_acct(t_acno) )
	{	gotoxy(5,5);
		cout<<"\nAccount not found        ";
		getch();
		return;
	}
	head_for_disp(t_acno);
	int row=9,flag;
	ifstream fin;
	fin.open("BANKING.DAT",ios::in);
	while(fin.read((char *)this, sizeof(Account)))
	{	if(acno==t_acno)
		{	flag=0;
			delay(2);
			gotoxy(4,row);
			cout<<dot.dd<<"-"<<dot.mm<<"-"<<dot.yy;
			if(tran=='D')
			{	damt+=amt;
				tamt+=amt;
				gotoxy(30,row);
			}
			else
			{	wamt+=amt;
				tamt-=amt;
				gotoxy(42,row);
			}
			cout<<setw(10)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<amt;
			gotoxy(66,row);
			cout<<setw(10)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<bal;
			row++;
			if(row>23)
			{	flag=1;
				row=7;
				gotoxy(4,24);
				cout<<"Press any key to continue";
				getch();
				clrscr();
				head_for_disp(t_acno);
			}
		}
	}
	fin.close();
	gotoxy(1,row);
	for(j=1;j<=79;j++)
		cout<<"=";
	row++;
	gotoxy(4,row);
	cout<<"Total ->";
	gotoxy(30,row);
	cout<<setw(10)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<damt;
	gotoxy(42,row);
	cout<<setw(10)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<wamt;
	gotoxy(66,row);
	cout<<setw(10)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<tamt;
	if(!flag)
	{	gotoxy(4,24);
		cout<<"Press any key to continue.........";
		getch();
	}
}

int Initial::found_acct(int a)
{	ifstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	int found=0;
	while(fin.read((char *)this,sizeof(Initial)))
	{	if(acno==a)
		{	found=1;
			break;
		}
	}
	fin.close();
	return found;
}
void Account::trans()
{	clrscr();
	char t_acc[10];
	int t,t_acno,valid;
	gotoxy(71,1);
	cout<<"<0>=Exit";
	gotoxy(5,5);
	cout<<"Enter the Account No : ";
	fflush(stdin);
	gets(t_acc);
	t=atoi(t_acc);
	t_acno=t;
	if(t_acno==0)
		return;
	clrscr();
	Initial ini;
	if(!ini.found_acct(t_acno))
	{	gotoxy(5,5);
		cout<<"\nAccont not found";
		getch();
		return;
	}
	gotoxy(71,1);
	cout<<"<0>=Exit";
	clear(3,3);
	gotoxy(29,3);
	cout<<"Transaction in Account";
	Date d;
	struct date s;
	getdate(&s);
	d.dd=s.da_day;
	d.mm=s.da_mon;
	d.yy=s.da_year;
	gotoxy(5,6);
	cout<<"Date : "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	gotoxy(5,8);
	cout<<"Account No. : "<<t_acno;
	char t_name[15],t_add[20];
	float t_balance;
	strcpy(t_name,ini.return_name(t_acno));
	strcpy(t_add,ini.return_add(t_acno));
	t_balance=ini.give_balance(t_acno);
	gotoxy(27,11);
	cout<<"Name    : "<<t_name;
	gotoxy(27,12);
	cout<<"Address : "<<t_add;
	gotoxy(5,15);
	cout<<"Last Balance Rs."<<setw(15)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<t_balance;
	char t_tran,tm[10];
	float t_amount,t_amt;
	do
	{       clear(5,10);
		valid=1;
		gotoxy(5,10);
		cout<<"Deposit or Withdraw (D/W) : ";
		t_tran=getche();
		if(t_tran==0)
			return;
		t_tran=toupper(t_tran);
	}while(t_tran!='D' && t_tran!='W');
	do
	{	clear(5,21);
		clear(5,23);
		gotoxy(5,23);
		cout<<"Enter the Amount for Transaction : ";
		valid=1;
		gotoxy(5,21);
		cout<<"Amount Rs.";
		gets(tm);
		t_amt=atof(tm);
		t_amount=t_amt;
		if((t_tran=='W' && t_amount>t_balance) || (t_amount<1))
		{	valid=0;
			gotoxy(5,23);
			cprintf("\7Invalid Data Entered");
			getch();
		}
	}while(!valid);
	char ch;
	clear(5,23);
	do
	{	clear(20,23);
		valid=1;
		gotoxy(40,20);
		cout<<"Save Transaction (Y/N) : ";
		ch=getche();
		if(ch=='0')
			return;
		ch=toupper(ch);
	}while(ch!='N' && ch!='Y');
	if(ch=='N')
		return;
	if(t_tran=='D')
		t_balance+=t_amount;
	else if(t_tran=='W')
		t_balance-=t_amount;
	ini.update_bal(t_acno,t_name,t_add,t_balance);
	add_file(t_acno,d,t_tran,t_amount,t_balance);
}
void Initial::add_to_file(int t_acno,char t_name[15],char t_add[20],float t_bal)
{       acno=t_acno;
	strcpy(name,t_name);
	strcpy(add,t_add);
	balance=t_bal;
	ofstream fout;
	fout.open("INITIAL.DAT",ios::app);
	fout.write((char *)this,sizeof(Initial));
	fout.close();
}
void Initial::disp_list()
{       clrscr();
	int flag;
	float t_bal=0.0;
	fstream fin;
	gotoxy(25,2);
	cout<<"Accounts List in Bank";
	gotoxy(25,3);
	cout<<"======================";
	Date d;
	struct date s;
	getdate(&s);
	d.dd=s.da_day;
	d.mm=s.da_mon;
	d.yy=s.da_year;
	gotoxy(62,3);
	cout<<"Date : "<<d.dd<<"/"<<d.mm<<"/"<<d.yy;
	gotoxy(1,4);
	for(int j=1;j<79;j++)
		cout<<"=";
	gotoxy(1,5);
	cout<<"AccNo#";
	gotoxy(10,5);
	cout<<"Name";
	gotoxy(30,5);
	cout<<"Address";
	gotoxy(65,5);
	cout<<"Balance";
	gotoxy(1,6);
	for(j=1;j<79;j++)
		cout<<"=";
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	int row=7;
	while(fin.read((char *)this,sizeof(Initial)))
	{	flag=0;
		delay(2);
		gotoxy(3,row);
		cout<<acno;
		gotoxy(10,row);
		puts(name);
		gotoxy(30,row);
		puts(add);
		gotoxy(65,row);
		cout<<setw(15)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<balance;
		t_bal+=balance;
		row++;
		if(row>23)
		{	flag=1;
			row=6;
			gotoxy(4,24);
			cout<<"Press any key to continue.......";
			getch();
			clrscr();
		}
	}
	gotoxy(1,row);
	for(j=1;j<79;j++)
		cout<<"=";
	row++;
	gotoxy(3,row);
	cout<<"Total Balance in Bank is : ";
	gotoxy(65,row);
	cout<<setw(15)<<setprecision(2)<<setiosflags(ios::right)<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<t_bal;
	fin.close();
	if(!flag)
	{	gotoxy(2,24);
		cout<<"Press any key to continue..........";
		getch();
	}
}

int Initial::last_accno()
{	fstream fin;
	fin.open("INITIAL.DAT",ios::in);
	fin.seekg(0,ios::beg);
	int count=0;
	while(fin.read((char *)this,sizeof(Initial)))
		count=acno;
	fin.close();
	return(count);
}
void Initial::del_act(int tacno)
{       char ch;
	Initial inl;
	if(!inl.found_acct(tacno))
	{	gotoxy(5,7);
		cout<<"Account not found!!!!";
		getch();
		return;
	}
	ifstream fin;
	ofstream fout;
	fin.open("INITIAL.DAT",ios::in);
	fout.open("TEMP.DAT",ios::out);
	fin.seekg(0,ios::beg);
	cout<<"Are You Sure You Want To Remove Your Account(y/n)??? ";
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
	 while(!fin.eof())
	 {	fin.read((char *)this,sizeof(Initial));
		if(fin.eof())
			break;
		if(acno!=tacno)
			fout.write((char *)this,sizeof(Initial));
	 }
	 fin.close();
	 fout.close();
	 remove("INITIAL.DAT");
	 rename("TEMP.DAT","INITIAL.DAT");
	}
	else return;

}
void box1()
{
	gotoxy(7,4);
	for(int i=1;i<=55;i++)
	{
		cout<<"_";
	}
}
void box2()
{
	gotoxy(7,24);
	for(int i=1;i<=55;i++)
	cout<<"_";
}
void main()
{	int choice,accno;
	Account a;
	Initial in;
	do
	{       clrscr();
		box1();
		cout<<"\n\n\n\n";
		cout<<"\t\t\t BANK MANAGEMENT \n";
		cout<<"\t\t\t=================\n";
		cout<<"\n\t\t1. Open New Account";
		cout<<"\n\t\t2. List of Accounts";
		cout<<"\n\t\t3. Daily Transcation";
		cout<<"\n\t\t4. Individual Account";
		cout<<"\n\t\t5. Remove Account";
		cout<<"\n\t\t6. Exit";

		cout<<"\n\n\tEnter your choice (1-6) : ";
		box2();
		fflush(stdin);
		gotoxy(35,18);
		cin>>choice;
		switch(choice)
		{	case 1:	a.new_act();
				break;
			case 2:	in.disp_list();
				break;
			case 3: a.trans();
				break;
			case 4: a.disp_act();
				break;
			case 5: clrscr();
				cout<<"\t\t\t BANK MANAGEMENT \n";
				cout<<"\t\t\t=================";
				cout<<"\n\t\t\t REMOVE ACCOUNT ";
				cout<<"\n\t\t\t================";
				cout<<"\nEnter Account Number #";
				cin>>accno;
				in.del_act(accno);
				break;
			case 6:	cout<<"\n\n\t\t\tHave a nice time......";
				cout<<"\n\t\t\t\tSee U next time......";
				getch();
				break;
			default:cout<<"\n\n\t\t\tWrong choice????????";
				cout<<"\n\t\t\tTry again.............";
				getch();
				break;
		}
	}while(choice!=6);
}