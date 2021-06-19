#include<iostream.h>
#include<conio.h>
inline int sq(int);
void main()
{
 int a,b,c;clrscr();
 cout<<"\nEnter a no";
 cin>>a;
 c=sq(a);
 cout<<"\n sqare="<<c;
 cout<<"\nenter a no";
 cin>>b;
 c=sq(b);
 cout<<"\nsqare="<<c;
 getch();
}
int sq(int x)
{
 return(x*x);
}


