#include<iostream.h>
#include<conio.h>
class num
{
 int a,b,g,c,l;
 public:
 void set(int ,int);
 void big();
 void show(int);
};
void num::set(int x,int y)
{
 a=x;b=y;
}
void num::big()
{
 if(a>b)
  show(a);
 else if(a<b)
  show(b);
  else
 show(1);
}
void num::show(int g)
{
 if(g==1)
 cout<<"\nboth eqal";
 else if(g!=1)
cout<<g<<"is max";
}
void main(void)
{
int l,m,g;
num n;
clrscr();
cout<<"\nEnter 2 nos.";
cin>>l>>m;
n.set(l,m);
n.big();
n.show(g);
getch();
}