/*question from 2018
struct packet
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct packet
{
	int pid;
	char add[20];
	packet *link;
};
class queue
{
	packet *front,*rear;
	public:
	queue()
	{
		front=NULL;
		rear=NULL;
	}
	void addpacket();
	void show();
	void deletepacket();
	~queue(){};
};
void queue::addpacket()
{
	packet *nptr;
	nptr=new packet;
	cout<<"\nEnter packet id: ";
	cin>>nptr->pid;
	cout<<"\nenter packet address: ";
	gets(nptr->add);
	nptr->link=NULL;
	if(rear==NULL)
		front=rear=nptr;
	else
	{
		rear->link=nptr;
		rear=nptr;
	}
}
void queue::deletepacket()
{
	packet *ptr;
	ptr=front;
	cout<<"\nDeleting packet: "<<ptr->pid<<" "<<ptr->add;
	front=ptr->link;
	delete ptr;
}
void queue::show()
{
	packet *temp;
	temp=front;
	while(temp!=NULL)
	{
		cout<<temp->pid<<" "<<temp->add<<endl;
		temp=temp->link;
	}
}
void main()
{
	clrscr();
	queue q;
	int ch;
	while(ch!=4)
	{
		cout<<"\n1. addpacket";
		cout<<"\n2. delete packet";
		cout<<"\n3. show";
		cout<<"\n4. exit";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			q.addpacket();
			break;
			case 2:
			q.deletepacket();
			break;
			case 3:
			q.show();
			break;
			case 4:
			break;
		}
	}
}