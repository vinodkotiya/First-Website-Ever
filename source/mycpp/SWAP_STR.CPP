#include<iostream.h>
#include<conio.h>
struct stud
{int roll;
 char grade;
 float per;
 };
void swap(stud* ,stud*);
void main (void)
{
struct stud s,p;          clrscr();
cout<<"Enter 2 roll"; cin>>s.roll>>p.roll;
cout<<"Enter 2 grade";cin>>s.grade>>p.grade;
cout <<"Enter 2 per";cin>>s.per>>p.per;
 swap(&s,&p);
 cout<<s.roll<endl<<p.roll<<endl<<s.grade<<endl<<p.grade<<endl<<s.per<<endl<<p.per;
 getch();
 }
void swap(stud *s,stud *p)
{struct stud temp;
temp=*s;*s=*p;*p=temp;
return();
}