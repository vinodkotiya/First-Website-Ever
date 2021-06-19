#include<iostream.h>
#include<conio.h>
class stud
{
 int roll;
 char grade;
 float per;
public:
 stud();
 void show();
 ~stud();
};
 stud::stud()
{
 cout<<"\nEnter   roll  grade   & per";
 cin>>roll>>grade>>per;
}
  stud:: ~stud()
{
 cout<<"\nobject destroyed";
}
void stud::show()
{
 cout<<roll<<per<<grade;
}
void main(void)
{
 clrscr();

 stud s,p,x;
 //s.show();
 //p.show();
  {
   stud q,r;
   //q.show();
   //r.show();
  }
 //s.show();
 getch();
}