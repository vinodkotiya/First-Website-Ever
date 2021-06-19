#include<iostream.h>
#include<conio.h>
class power
{
 int x,n,i,p;
 public:
 void get();
 void pow();
 void show();
};
void power::get()
{
cout<<"\nEnter base & index";
cin>>x>>n;
}
void power::pow()
{
 p=1;
 for(i=0;i<n;i++)
  {
    p=p*x;
  }
}
void power::show()
{
 cout<<"\nans is  "<<p;
}
void main(void)
{
 power s;
 clrscr();
 s.get();
 s.pow();
 s.show();
 getch();
}