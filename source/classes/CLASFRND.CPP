#include<iostream.h>
#include<conio.h>
class xyz
{
 int x;
public:
  friend class abc;
};
class abc
{
public:
 void get (xyz );
 void show(xyz);
};
void abc::get(xyz n2)
{
cout<<"\nenter a no.";
cin>>n2.x;
}
void abc::show(xyz n2)
{cout<<"\nno.is"<<n2.x;
}
void main()
{clrscr();
 abc n1;xyz n2;
 n1.get(n2);
 n1.show(n2);
 getch();
}