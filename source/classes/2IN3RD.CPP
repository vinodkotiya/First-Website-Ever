#include<iostream.h>
#include<conio.h>
class com
{
 int a;
 float b;
public:
 void get(int i,float j)
  {
  a=i;b=j;
  }
  void show()
  {
   cout<<"\na="<<a<<"\nb="<<b;
  }
  friend com add(com ,com );
};
   com add(com c1,com c2)
  {
  com temp;
  temp.a=c1.a+c2.a;
  temp.b=c1.b+c2.b;
  return(temp);
  }
void main(void)
{
 com c1,c2,c3;
 clrscr();
 c1.get(10 ,25.34);c2.get(21,34.56);
 c3=add(c1,c2);
 c1.show(); c2.show();
 c3.show();
 getch();
}
