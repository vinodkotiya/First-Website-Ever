#include<iostream.h>
#include<conio.h>
class xyz;
class abc
{ int a;
public:
 void get(int i)
  {a=i;
  }
 friend void swap(abc &,xyz&);
 void show()
 {cout<<"\nafter swap a="<<a;
 }
};
class xyz
{
int x;
public:
 void set(int i)
 {x=i;
 }
 void mhow()
 {cout<<"\nafter swapx="<<x;
 }
 friend void swap(abc&,xyz&);
};
 void swap(abc &obj1,xyz &obj2)
 {int temp;
 temp=obj1.a;
 obj1.a=obj2.x;
 obj2.x=temp;
 }
void main(void)
{
 abc n1;xyz n2;
 n1.get(30); n2.set(45);
 swap(n1,n2);
 n1.show();n2.mhow();
 getch();
}