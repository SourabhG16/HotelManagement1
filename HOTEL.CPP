//this is program of restuarant and lodging system
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
char nm[20];
long long cost;
class info                         //class
{
private:
	char name[20];
	long long u_id;
	int i;
	long long p_no;
public:
	void getinfo();
	void putinfo();
};
	void info::getinfo()                //scope resolution operator
	{
	cout<<"\n....ENTER YOUR NAME...";
	cin>>name;
	cout<<"\nENTER YOUR ADDHAR CARD NUMBER";
	cin>>u_id;
	cout<<"\n enter phone number";
	cin>>p_no;
	}
	void info::putinfo()
	{
	cout<<"\n"<<name;
	cout<<"\n"<<u_id;
	cout<<"\n"<<p_no;
	}
class hotel:protected info
{
protected:
	char dish[20];
public:
	void getdate(struct date *datep);
	void gettime(struct time *timep);
	virtual void getcost()=0;               //pure-virtual method
	virtual void putcost()=0;               //pure-virtual method
};
class food:protected hotel
{
protected:
	  int a,b,no;
public:

	inline void getcost()                          //inline function
	{
	do
	{
	textcolor(YELLOW);
	cout<<"\n\tENTER YOUR CHOICE:";
	textcolor(RED);
	cout<<"\n1-BREAKFASRT\n2-LUNCH\n3-DINNER\n4-MAIN MENU";
	cin>>a;
	switch(a)
	{
			case 1:
				while(b!=7)
				{
				clrscr();
				 textcolor(YELLOW);
				cout<<"\n\t\t ENTER CHOICE OF BREAKFAST";
				 textcolor(RED);
				cout<<"\n1-abcd----100\n2-xyz----120\n3-pqr---75\n4-hijk----150\n5-lmnop----200\n6-sdijfg----250\n7-BACK";
				cin>>b;
				textcolor(YELLOW);
				cprintf("\nENTER QUANTITY");
				cin>>no;
				switch(b)
					{
					case 1:
						 cost=cost+no*100;

						 break;
					case 2:
						 cost=cost+no*120;
						 break;
					case 3:
						 cost=cost+no*75;
						 break;
					 case 4:
						 cost=cost+no*150;
						 break;
					case 5:
						 cost=cost+no*200;
						 break;
					case 6:
						 cost=cost+no*250;
						 break;
					}
				}
					b=0;
					break;
				case 2:
					while(b!=7)
					{
					clrscr();
					 textcolor(YELLOW);
					cout<<"\n\t\tENTER YOUR CHOICE IN LUNCH";
					 textcolor(RED);
					cout<<"\n1-abcd----1000\n2-xyz----1500\n3-pqr----900\n4-hijk----2000\n5-lmnop----800\n6-ferjh----2500\n7---back";
					cin>>b;
					 textcolor(YELLOW);
					cout<<"\nENTER QUANTITY:";
					cin>>no;
					switch(b)
					{
					case 1:
						cost=cost+no*1000;
						break;
					case 2:
						cost=cost+no*1500;
						break;
					case 3:
						cost=cost+no*900;
						break;
					case 4:
						cost=cost+no*2000;
						break;
					case 5:
						cost=cost+no*800;
						break;
					case 6:
						cost=cost+no*2500;
						break;
					}
					}
					b=0;
					break;
			case 3:
				while(b!=7)
				  {
					clrscr();
					 textcolor(YELLOW);
					cout<<"\n\t\tENTER YOUR CHOICE IN DINNER";
					 textcolor(RED);
					cout<<"\n1-abcd----1000\n2-xyz----1500\n3-pqr----900\n4-hijk----2000\n5-lmnop----800\n6-jsdfg----2500\n7----back";
					cin>>b;
					 textcolor(YELLOW);
					cout<<"\n ENTER QUANTITY";
					cin>>no;
					switch(b)
					{
					case 1:
						cost=cost+no*1000;
						break;
					case 2:
						cost=cost+no*1500;
						break;
					case 3:
						cost=cost+no*900;
						break;
					case 4:
						cost=cost+no*2000;
						break;
					case 5:
						cost=cost+no*800;
						break;
					case 6:
						cost=cost+no*2500;
						break;
					}
					}
					b=0;
					break;

				 }

		}while(a!=4);
	}
	inline void putcost()
	{
		textcolor(RED);
		clrscr();
		cout<<"\n----------BILL---------------\n";
     /*	     struct date d;
	     getdate(&d);
	     printf("The current year is: %d\n", d.da_year);
	     printf("The current day is: %d\n", d.da_day);
	     printf("The current month is: %d\n", d.da_mon); */
	     cout<<"cost:"<<cost;
	     cout<<"\n\n\n\n";
	}
};
class lodge:protected hotel,protected info
{
public:
	int a,b;
	void getcost()
	{
		textcolor(RED);
		cout<<"n\ !!!...WELCOME IN LODGING...!!!\n";
		info i;
		i.getinfo();
		textcolor(YELLOW);
		cout<<"ENTER ROOM TYPE...";
		textcolor(RED);
		x:cout<<"\n1-ORDINARY----RS 500 per day\n2-DELUX----RS 1000 per day\n3-SUPER DELUX----RS 2000 per day\n ENTER YOUR CHOICE";
		cin>>b;
		cout<<"\n\t\tENTER TIME FOR YOU TO STAY (IN DAYS)...\n";
		cin>>a;
		switch(b)
		{
			case 1:
				textcolor(YELLOW);
				cout<<"\n you have selected NORMAL room...";
				cout<<"\n your bill for"<<a;
				cost=a*500;
				cout<<" days is :"<<cost;
				cout<<"\nADVANCE IS RS 500...";
				cout<<"\n ROOM NO...307";
				break;
			case 2:
				cout<<"\n you have selected DELUX room...";
				cout<<"\n your bill for"<<a;
				cost=a*1000;
				cout<<" days is :"<<cost;
				cout<<"\nADVANCE IS RS 1000...";
				cout<<"\n ROOM NO...504";
				break;
			case 3:
				cout<<"\n you have selected SUEPER-DELUX room...";
				cout<<"\n your bill for"<<a;
				cost=a*2000;
				cout<<" days is :"<<cost;
				cout<<"\nADVANCE IS RS 2000...";
				cout<<"\n ROOM NO...703";
				break;
			default:
				textcolor(BLUE);
				cout<<"\n enter correct choice...";
				goto x;
	       }
	}
void putcost()
{
clrscr();
textcolor(RED);
cout<<"\n--------BILL FOR LODGING--------";
cout<<"\n\t\t your BILL for lodging is RS"<<cost;
}
};
void main()
{
	int ch,ch2;
	clrscr();
	textcolor(RED);
	cout<<"\n\t\t!!!...WELCOME TO HOTEL TAJ...!!!\n\t\tSIR,ENTER HAVE A SEAT....";
	do
	{
	textcolor(RED);
	cout<<"\n\t\t\t\t\tpress:\n\t\t\t\t\t1-FOOD\n\t\t\t\t\t2-LODGE\n\t\t\t\t\t3-EXIT";
	textcolor(YELLOW);
	cout<<"\nenter your choice";
	cin>>ch;
	if(ch==1)
	{
	clrscr();
	food f;
	f.getcost();
	f.putcost();
	}
	else if(ch==2)
	{
	clrscr();
	lodge l;
	l.getcost();
	l.putcost();
	}
	else if(ch==3)
	{
	 textcolor(RED);
	 cout<<"\n\t\t\t!!!...THANK YOU...!!!";
	getch();
	}
	else
	{
	textcolor(RED);
	cout<<"\nENTER CORRECT CHOICE...";
	}
	}while(ch!=3);
}