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
};
class drv1:public base
{
 protected:
  int k;
 public:
  void setk()
  {
   k=a+b;

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
  m=a-b;
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

 d1.get(30,40);
 d1.show();
 d1.setk();
 d1.disp();

 d2.get(50,60);
 d2.setm();
 d2.display();
 d2.setk();
 d2.disp();
 d2.show();

 getch();
}