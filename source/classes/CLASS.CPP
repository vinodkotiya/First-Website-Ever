#include<iostream.h>
#include<conio.h>
#include<dos.h>
class stud
{
 int roll;
 char grade;
 float per;
 public:
 void get();
 void show();
};
void stud :: get()
{
 cout<<"\nEnter roll,grade & per";
 cin>>roll>>grade>>per;
}
void stud ::show()
{
 cout<<"Roll"<<roll<<"\nGrade"<<grade<<"\nPer"<<per;
}
void main(void)
{
 stud s[2],p;
 int i;
 for(i=0;i<2;i++)
 {
  s[i].get();
  s[i].show();
 }
 delay(2100);
 clrscr();
 p.get();
 p.show();
 getch();
}
