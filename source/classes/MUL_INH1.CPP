#include<iostream.h>
#include<conio.h>
class base1
{
 protected:
  int a,b;
 public:
  void get(int i,int j)
  {
   a = i;
   b = j;
  }
};
class base2
{
protected:
 int x,y;
public:
 void set(int p,int q)
 {
  x = p;
  y = q;
 }
};
class derived:public base1,public base2
{
 int m,n;
 public:
  void cal()
  {
   m=a+b;
   n = x*y;
  }
  void print()
  {
   cout<<a<<b<<x<<y<<m<<n;
  }
};
void main()
{
 derived obj;
 obj.get(10,20);
 obj.set(30,40);
 obj.cal();
 obj.print();
 getch();
}
