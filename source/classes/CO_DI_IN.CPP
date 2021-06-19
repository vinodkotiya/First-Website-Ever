#include<iostream.h>
#include<conio.h>
class base
{
 public:
  base()
  {
   cout<<"\nBase constructor evoked  ";
  }
  ~base()
  {
   cout<<"\n base destructor evoked";
  }
};
class derived : public base
{
 public:
 derived()
 {
  cout<<"\nderived constructor evoked";
 }
 ~derived()
 {
  cout<<"\nderived distructor evoked";
 }
};
void main(void)
{
clrscr();
 derived obj;
 getch();
}

