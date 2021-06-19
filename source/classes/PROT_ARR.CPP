#include<iostream.h>
#include<conio.h>
class base
{
 protected:
  int a[10];
 public:
  void show()
  {
   cout<<"\nAfter swapping";
   for(int i=0;i<9;i++)
   cout<<a[i];
  }
};
class drv1:
