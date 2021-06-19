#include<iostream.h>
#include<conio.h>

class num
{
 int a,b;
public:
 void get(int i ,int j)
 {
  a=i;b=j;
 }
friend void max(num);
};
void max(num m)
{
 if(m.a>m.b)
 cout<<"\mgreater is="<<m.a;
 else if(m.a<m.b)
 cout<<"\mgreater is="<<m.b;
 else
 cout<<"Both eqal";
}
void main (void)
{
 num n;
 clrscr();
 n.get(34,65);
 max(n);
 getch();
}