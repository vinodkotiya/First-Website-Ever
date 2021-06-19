#include<iostream.h>
#include<conio.h>
class base
{protected:
 int a;
 public:
  base(int i)
  {
   a=i;
   }
};
class drv: public base
{
 int b;
public:
 drv(int x,int y):base(x)
 {
  b = y;
 }
 void show()
 {
  cout<<"\na = "<<a<<"\nb = "<<b;
 }
};
 void main()
 {
  drv obj(10,20);
  obj.show();
  getch();
 }