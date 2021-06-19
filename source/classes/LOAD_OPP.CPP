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
 void operator ++();
 void show()
 {
 cout<<"\n a="<<a<<"\n b="<<b;
 }
};
void num::operator ++()
{
 a=a+1;
 b++;
}
void main()
{
 num n1,n2;
 clrscr();
 n1.get(23,45.231); n2.get(43,34.67);
 n1++;               n2++;
 n1.show();		   n2.show();
 getch();
}
