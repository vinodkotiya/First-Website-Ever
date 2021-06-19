#include<iostream.h>
#include<conio.h>

class person
{
 public:
 char name[20],designation[20];
 int code;
 void set()
 {
	cout<<"\nEnter The Name -->";
	cin>>name;
	cout<<"\nEnter The Designation --> ";
	cin>>designation;
	cout<<"\nEnter The ID Number -->";
	cin>>code;
	}
 void show()
 {
	cout<<"\nName -->"<<name<<"\nDesignation --> "<<designation<<"\nID Number -->" <<code;
 }

};

class account : virtual public person
{
 public:
	float pay;

	void payinput()
	{
	 //person :: set();
	 cout<<"\nEnter pay -->";
	 cin>>pay;
	}
	void payshow()
	{
	//person :: show();
	cout <<"\nPay --> Rs "<<pay<<" /-\n";
	}
};

class admin : virtual public person
{
 public:
 int exp;
 void setexp()
 {
	person :: set();
	cout<<"\nEnter experience in year(s) -->";
	cin>>exp;
 }
 void showexp()
 {
 person :: show();
	cout<<"\nExperience -->"<<exp<<" year(s)";
 }
};

class master : public account , public admin
{
 public:
	void all()
	{
	 admin :: setexp();
	 account :: payinput();
	}
	void call()
	{
	 admin :: showexp();
	 account :: payshow();
	}
};
void main ()
{
 clrscr();
 master m [20];
 int n,i;
 cout<<"\Enter the no of employee(max 20) -->";
 cin>>n;
 for(i=0; i<n ;i++)
	m[i].all();
 for(i=0;i<n;i++)
	m[i].call();
 getch();
}
