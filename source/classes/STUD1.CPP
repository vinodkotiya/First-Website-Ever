#include<iostream.h>
#include<conio.h>
class roll
{
 protected:
  int r,avg;
public:
 void getroll()
 {
  cout<<"\n\aEnter roll";
  cin>>r;
 }
 void show_ra()
 {
  cout<<"\n\aroll no ="<<r<<"\n\a avg of marks ="<<avg;
 }
};
class marks:public roll
{
 int p,c,m;
public:
 void getm()
 {
  cout<<"\n\aEnter marks of p,c,m:- ";
  cin>>p>>c>>m;
  avg=(p+c+m)/3;
 }
};
void main()
{
 marks r1;
 clrscr();
 r1.getroll();
 r1.getm();
 r1.show_ra();
 getch();
}