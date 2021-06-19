#include<iostream.h>
#include<conio.h>

class base
{
 protected:
  int i,j;
 public:
  void setij(int a,int b)
   {
    i=a;
    j=b;
   }
  void showij()
   {
    cout<<"\ni="<<i<<"\nj="<<j;
   }
};
class derived:protected base
{
 int k;
public:
 void setk()
 {
  setij(10,20);
  k=i*j;
 }
 void showk()
 {
  showij();
  cout<<"\nk="<<k;
 }
};
void main(void)
{
 clrscr();
 derived d;
 d.setk();
 d.showk();
 getch();
}
  /*
class derived
{
 int k;
protected:
  int i,j;

  void setij(int a,int b)
   {
    i=a;
    j=b;
   }
  void showij()
   {
    cout<<"\ni="<<i<<"\nj="<<j;
   }
public:
 void setk()
 {
  setij(10,20);
  k=i*j;
 }
 void showk()
 {
  showij();
  cout<<"\nk="<<k;
 }
};
void main(void)
{
 clrscr();
 derived d;
 d.setk();
 d.showk();
 getch();
}   */