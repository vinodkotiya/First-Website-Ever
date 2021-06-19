#include<iostream.h>
#include<conio.h>
class base1
{
 protected:
  int a,b;
 public:
  void get(int i, int j)
  {
   a = i;
   b = j;
  }
  void show()
  {
  cout<<"\n"<<a<<"\n"<<b;
  }
};
class base2
{
 protected:
  int x,y;
 public:
  void get(int p, int q)
  {
   x = p;
   y = q;
  }
  void show()
  {
  cout<<"\n"<<x<<"\n"<<y;
  }
};
class derived : public base1,public base2
{
 int m,n;
 public:
  void init(int k,int l)
  {
   m = k;
   n = l;
  }
  void print()
  {
  cout<<"\n"<<m<<"\n"<<n;
  }
};
void main()
{
 derived obj;
 obj.get(10,20);    obj.set(30,40);    obj.init(50,60);
 obj.show();        obj.display();     obj.print();
 getch();
}

