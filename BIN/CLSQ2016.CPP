/*wap to make a class to create a class candidate
priv:
regno long
nm char 30
score float
remarks char 50
assignment():should assign either
"selected" if score>50
"not selected"if score<50
public:
enter() read all values
display() to show values
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class candidate
{
	private:
	long regno;
	float score;
	char nm[30],rem[50];
	//there is another way to assign rem
	//char *rem; and in assignment function write rem="\nSelected";
	void assignrem()
	{
		if (score>=50)
		strcpy(rem,"\nSelected"); //for doing like this it should be like
		else		  // this *rem if don't want to use *
		strcpy(rem,"\nNot Selected");//use strcpy function
	}
	public:
	void enter()
	{
		cout<<"\nEnter regno.: ";
		cin>>regno;
		cout<<"\nEnter name: ";
		gets(nm);
		cout<<"\nEnter score: ";
		cin>>score;
		assignrem();
	}
	void display()
	{
		cout<<"\nRegno.: "<<regno;
		cout<<"\nName: "<<nm;
		cout<<"\nScore is: "<<score;
		cout<<"\nRemarks: "<<rem;
	}

};
void main()
{
	clrscr();
	candidate c;
	c.enter();
	c.display();
	getch();
}

