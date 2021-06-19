//p6 student simulation

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class student
{
 int roll,marks[3];   //store roll no & 3 sub marks
 char name[20];       //store name of 20 student
 int total;
 float avg;
 char grade;
public:
 void set()
 {
	 cout<<"\nEnter Roll no -->";
	 cin>>roll;
	 cout<<"\nEnter name -->";
	 cin>>name;
	 cout<<"\nEnter marks of 3 subjects-->";
	 cin>>marks[0]>>marks[1]>>marks[2];
	 total=marks[0]+marks[1]+marks[2];
	 avg=total/3;
	 if (avg>=90 && avg<100)
	 grade='A';
	 else if (avg>=75 && avg<90)
	 grade='B';
	 else if (avg>=60 && avg<75)
	 grade='C';
	 else if (avg>=50 && avg<60)
	 grade ='D';
	 else
	 grade='E';
 }
 void show()
 {
		cout<<"\n Rollno.-->  "<<roll<<", name -->"<<name<<" \nmarks in three subjects are :- ";
		cout<<marks[0]<<",  "<<marks[1]<<",  "<<marks[2]<<"\n";
		cout<<"Total Marks ---> "<<total<<"\n";
		cout<<"Percentage ---> " <<avg<<" % "<<"\n";
		cout<<"Grade ---> "<<grade<<"\n";
 }
};

void main()
{
 clrscr();
 int i,n;
 student std[20];
 cout<<"\nEnter the no of students(max 20) -->";
 cin >>n;
 if(n<=20)
 {
 for(i = 0; i< n && n <= 20; i++)
	{
	 cout<<"\nEnter the data of student --> "<<i+1;
	 std[i].set();
	}
 for(i=0;i<n;i++)
	{
	 cout<<"\nDetails of student -->"<<i+1;
	 std[i].show();
	}
	}
 else
	exit(0);
getch();
}
