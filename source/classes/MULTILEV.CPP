#include<iostream.h>
#include<conio.h>
class base1
{
 protected:
  int x;
 public:
  void showx()
  {
   cout<<"\n x = "<<x;
  }
};
class base2
{
 protected:
   int y;
 public:
   void showy()
   {
    cout<<"\ny = "<<y;
   }
};
class derived : public base1,public base2
{
 public:
  void getx()
  {
   cout<<"\nEnter a no.";
   cin>>x;
  }
  void gety()
  {
   cout<<"\nEnter a no.:";
   cin>>y;
  }
};
void main(void)
{
 clrscr();
 derived obj;
 obj.getx();
 obj.gety();
 obj.showx();
 obj.showy();
 getch();
}