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
 friend num operator +(num,int);
 friend num operator +(int,num);
 void show()
 {
 cout<<"\na="<<a<<"\nb = "<<b;
 }
};
 num operator +(num n,int i)
{
 num temp;
 temp.a=n.a+i;
 temp.b=n.b+i;
 return(temp);
}
num operator +(int i,num n)
{
 num temp;
 temp.a=i+n.a;
 temp.b=i+n.b;
 return temp;
}
void main()
{
 num n1,n2;
 clrscr();
 n1.get(20,30.5);
 n2=n1+5;
 n2.show();
 n2=10+n1;
 n2.show();
 getch();
}