/*write a c++ program to define a class photo
priv:
phno int    //phno means photo no
category string
exhibit string
member func:
fixexhibit()(to assign exhibition gallery as per category)
category:      exhibit:
antique         zaveri
modern	       johanson
classic        terenida
public:
register()-allows user to enter phno,category and call function fixexhibit()
viewall()-which will display all the data
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class photo
{
	private:
	int phno;
	char categ[21],exhibit[21];
	void fixexhibit()
	{
		if(strcmp(categ,"antique")==0)
		strcpy(exhibit,"zaveri");
		if(strcmp(categ,"modern")==0)
		strcpy(exhibit,"johanson");
		if(strcmp(categ,"classic")==0)
		strcpy(exhibit,"terenida");
/*		else
		cout<<"\nDoes not have the data about the category";*/
	}
	public:
	void Register()
	{
		cout<<"\nEnter photo number: ";
		cin>>phno;
		cout<<"\nEnter the category of photo: ";
		gets(categ);
		fixexhibit();
	}
	void viewall()
	{
		cout<<"\nThe photo number is: "<<phno;
		cout<<"\nThe category of photo is: "<<categ;
		cout<<"\nThe exhibit of the photo is: "<<exhibit;
	}
};
void main()
{
	clrscr();
	photo a;
	a.Register();
	a.viewall();
	getch();
}