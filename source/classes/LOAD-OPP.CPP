#include<iostream.h>
#include<conio.h>
class complex
{
 int a;
 float b;
public:
 void get(int i,float j)
 {
  a=i;
  b=j;
 }
 complex operator ++();
 void show()
 {
 cout<<"\n a="<<a<<"\n b="<<b;
 }
};
complex complex::operator ++()
{
 complex temp;
 temp.a=a+1;
 temp.b=b+1;
 //return(temp);
  return(*this);
}
void main()
{
 complex c1,c2,c3;
 clrscr();
 c1.get(23,45.231); c2.get(43,34.67);
 c3=c1++;               c2++;
 c3.show();		   c2.show();
 getch();
}
