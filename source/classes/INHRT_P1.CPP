#include<stream.h>
#include<conio.h>
class abc
{protected:
 int a,b;
public:
 void get(int i,int j)
 {
  a=i;
  b=j;
 }
 void show()
 {
 cout<<"\n\aa="<<a<<"\n\ab="<<b;
 }
};
class xyz :public abc
{
 int x,y;
public:
 void set(int p,int q)
 {
  x=p;
  y=q;
 }
 void display()
 {
 cout<<"\n\ax="<<x<<"\n\ay="<<y;
 cout<<"\n\aa="<<a<<"\n\ab="<<b;
 }
};
void main()
{
 abc n1;
 xyz n2;
 clrscr();
 n1.get(10,20);
 n2.get(30,40);
 n2.set(30,40);
 n1.show();
 n2.show();
 n2.display();
 getch();
}