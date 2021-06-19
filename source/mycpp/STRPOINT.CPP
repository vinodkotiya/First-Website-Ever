#include<iostream.h>
#include<conio.h>
#include<string.h>
struct stud
{int roll;
 char nm[10];
 char grade;
 float per;
 };
void main()
{
 struct stud s,*p,q = { 10,"prince",'B',73.5};
 clrscr();
 p=&s;
 p->roll=10;
 p->grade='A';
 /*p->nm="vinod";   ||wrong way||             */
 strcpy(p->nm,"vinod");
 p->per=62.3;

 cout<<"\nroll"<<p->roll<<"\tgrade    "<<p->grade<<"\tper"<<p->per<<"\tname  "<<p->nm;
 cout<<"\nroll"<<s.roll<<"\tgrade    "<<s.grade<<"\tper"<<s.per<<"\tname  "<<s.nm;
 cout<<"\nroll"<<q.roll<<"\tgrade    "<<q.grade<<"\tper"<<q.per<<"\tname  "<<q.nm;
 getch();
}