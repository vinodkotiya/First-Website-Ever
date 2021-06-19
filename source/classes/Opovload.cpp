#include<iostream.h>
#include<dos.h>
#include<conio.h>
class num
{ int a;
 float b;
 char c;
public:
 void get ();
 void operator ++();
 void show();
};
void num::get()
{ textbackground(RED);
 textcolor(BLUE);
 cout<<"\nenter an intger float & character";
 cin>>a>>b>>c;
}
void num::operator ++()
{ a++;b++;c++;
};
void num::show()
{
 cout<<a<<b<<c;
}
void main()
{
clrscr();
num n;
n.get();
n++;
n.show();
getch();
}