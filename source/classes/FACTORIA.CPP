#include<iostream.h>
#include<conio.h>
class factorial
{
 int n,f;
 public:
 void fact();
 void get();
 void show();
};
void factorial::get()
{
 cout<<"\nEnter the no";
 cin>>n;
}
void factorial::fact()
{
 int i;
 f=1;
 for(i=n;n>=1;i--,n--)
  f=f*n;
}
void factorial::show()
{
 cout<<"\nfactorial is  "<<f;
}
void main (void)
{
 factorial s;
 s.get();
 s.fact();
 s.show();
 getch();
}