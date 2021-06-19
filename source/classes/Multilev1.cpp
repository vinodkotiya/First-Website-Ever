/**********************    MULTIPLE LEVEL INHERITANCE EXAMPLE  ******************/

#include<iostream.h>
#include<conio.h>
class base
{
 protected :
  int a,b;
 public:
  void get(int i,int j)
  {
   a=i;
   b=j;
  }
  void add()
  {
  cout<<"\n \asum="<<a+b;
  }
};
class drv1:public base
{
 protected:
  int c,d;
 public:
  void set(int p,int q)
  {
   c=p;
   d=q;
  }
  void sub()
  {
  cout<<"\n\asubtraction ="<<a-b;
  }
};
class drv2:public drv1
{
 int e,f;
public:
 void gset(int x,int y)
 {
  e=x;
  f=y;
 }
 void multi()
 {
 cout<<"\n\a\amultiplication=:"<<e*f;
 }
};
void main(void)
{
 base b;   drv1 d1;  drv2 d2;
 clrscr();
 b.get(10,20);
 b.add();

 d1.get(30,40);
 d1.add();
 d1.set(50,60);
 d1.sub();

 d2.get(70,80);
 d2.add();
 d2.set(90,100);
 d2.sub();
 d2.gset(110,120);
 d2.multi();

 getch();
}