#include<iostream.h>
#include<conio.h>
class num
{
 int a,b;
public:
 void get(int i,int j)
  {
   a=i;b=j;
   }
 friend void swap(num &);
 void show()
 {
  cout<<"\nafter swaping a="<<a<<"   b="<<b;
 }
};
 void swap(num &m)
{
 int temp;
 temp=m.a;
 m.a=m.b;
 m.b=temp;            cout<<"a"<<m.a;
}
void main()
{
 num n;
 clrscr();
 n.get(23,56);
 swap(n);
 n.show();
 getch();
}