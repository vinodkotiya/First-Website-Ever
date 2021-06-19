#include<iostream.h>
#include<conio.h>
class num
{
 int a;
 float b;
public:
 void get(int i,float j)
 {
  a=i;
  b=j;
 }
void operator +=(num);
void show()
 {
  cout<<"\na="<<a<<"\nb="<<b;
 }
};
void num::operator +=(num n)
{
 a=a+n.a;
 b+=n.b;
}
void main()
{
 num n1,n2;
 n1.get(10,20); n2.get(30,40);
 n1+=n2;
 n1.show();
 getch();
}
