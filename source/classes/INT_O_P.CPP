#include<iostream.h>
#include<conio.h>
class num
{
 int a ;float b;
public:
 void get (int i,float j)
  {
   a=i;b=j;
  }
 num operator +(int);
 void show()
 {
 cout<<"\na="<<a<<"\nb = "<<b;
 }
};
num num::operator +(int i)
{
 num temp;
 temp.a=a+i;
 temp.b=b+i;
 return(temp);
}
void main()
{
 num n1,n2;
 clrscr();
 n1.get(20,30.5);
 n2=n1+5;
 n2.show();
 //n2=5+n1;
 n2.show();
 getch();
}