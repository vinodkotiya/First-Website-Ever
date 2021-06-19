/*******************    MULTIPLE LEVEL INHERITANCE EXAMPLE-2  ******************/

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
  void show()
  {
  cout<<"\n \aa="<<a<<"\n\ab="<<b;
  }
  int set_k()
  {
   int x=a*b;
   return(x);
  }
};
class drv1:private base
{
 protected:
  int k;
 public:
  void call_k()
  {
   k=set_k();

  }
  void disp()
  {
  cout<<"\n\ak ="<<k;
  }
};
class drv2:public drv1
{
 int m;
public:
 void setm()
 {
  m=0;
 }
 void display()
 {
 cout<<"\n\a\am=:"<<m;
 }
};
void main(void)
{
 base b;   drv1 d1;  drv2 d2;
 clrscr();
 b.get(10,20);
 b.show();

 //d1.get(30,40);
 //d1.show();
 d1.call_k();
 d1.disp();

 //d2.get(50,60);
 d2.setm();
 d2.display();
 d2.call_k();
 d2.disp();
 //d2.show();

 getch();
}