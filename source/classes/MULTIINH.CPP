#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//char s;
void creators();
int total = 0;
class student
{
protected:
 char name[20];
 int roll;
public:
 void getdata();
 void showdata();
};
void student::getdata()
{
cout<<"\nEnter the name of the student "<<"\n";
cin>>name;
cout<<"Enter the roll number of the student"<<"\n";
cin>>roll;
}
void student::showdata()
{
//if(s!='j')
// exit(0);
cout<<"Name of the student is "<<name<<"\n";
cout<<"Roll number is "<<roll<<"\n";

}

class test:public student
{
protected:
 float p,c,m;
public:
 void getmarks(float, float ,float);
 void showdata(void);
};
void test::getmarks(float a,float b,float d)
{
p=a;
c=b;
m=d;
}
void test::showdata(void)
{
student::showdata();
cout<<"Marks in Physics ," <<p<<" Chemistry ,"<<c<< " Maths "<<m<<"\n";

}

class result : public test
{
public:
 void display(void);
};

void result :: display(void)
{
 total = p+c+m;
 showdata();
 cout<<"Total Marks Are " <<total<<"\n\n";
}

void main()
{
 clrscr();
 creators();
 float m,n,o;
 int number;
 result t[10];
 cout<<"Enter The Number Of Students ";
 cin>>number;
 for(int i=0;i<number;i++)
 {
	cout<<"Student "<<i+1<<"\n";
	t[i].getdata();
	cout<<"Enter the marks in Physics, Chemistry, Maths "<<"\n";
	cin>>m>>n>>o;
	t[i].getmarks(m,n,o);
 }
 for(i=0;i<number;i++)
 {
	t[i].display();
 }
getch();
}

void creators()
{
 cout<<"****************************************************************************";
 char n1[7] = {"Vinod,"},n2[10] = {"Digvijay,"},n3[8] = {"Sameer,"},n4[9] = {"Peeyush,"},n5[8] = {"Vishwas"};
 cout<<"\nCreated by "<<n1<<n2<<n3<<n4<<n5;
	cout<<"\n****************************************************************************\n";
// return n2[5];
}