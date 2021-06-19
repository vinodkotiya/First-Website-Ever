#include<iostream.h>
#include<conio.h>
#include<dos.h>
class stud
{
 int roll;
 int p,c,m,tot;
 char grd,nm[10];
 float pr;
 public:
 void get();
 void add();
 void per();
 void grade();
 void show();
};
void stud :: get()
{
 cout<<"\nEnter roll name & marks of p,c,m";
 cin>>roll>>nm>>p>>c>>m;
}
void stud ::add()
{
 tot=p+c+m;
}
void stud ::per()
{
 pr=tot/3;
}
void stud ::grade()
{
 if(pr>=65)
 grd='A';
 else if (pr>=45)
 grd='B';
 else
 grd='C';
}
void stud ::show()
{
 cout<<"\nName  "<<nm<<"\nRoll  "<<roll<<"\ntotal  "<<tot<<"\nGrade  "<<grd<<"\nPer  "<<pr;
}
void main(void)
{

 int i,n;
 cout<<"\nEnter how many students[maximum-15]";
 cin>>n;
 stud s[15];
 for(i=0;i<n;i++)
 {
  s[i].get();
  s[i].add();
  s[i].per();
  s[i].grade();
  s[i].show();

 delay(2100);
 clrscr();
 }
 getch();
}
