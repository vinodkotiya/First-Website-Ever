#include<iostream.h>
#include<conio.h>
#include<string.h>
struct stud
{
int roll;
char name[10];
char grade[10];
int m,p,c;
float per;
};
void main (void)
{
stud v[2],*p;
clrscr();
int i;
for(i=0;i<2;i++)
 { p=&v[i];
 cout<<"enter roll";
 cin>>p->roll;
 cout<<"enter name";
   cin>>p->name;
   cout<<"enter marks of p,c,m";
   cin>>p->m>>p->p>>p->c;
  p->per=(float)(p->m+p->p+p->c)/3;
  }
for(i=0;i<2;i++)
 {
 p=&v[i];
 if(p->per>=65)
 strcpy(p->grade,"first div");
 else if(p->per>=45)
 strcpy(p->grade,"second div");
 else
 strcpy(p->grade,"third div");
 }

for(i=0;i<2;i++)
 {
 cout<<"\nroll-"<<p->roll<<"\n name-"<<p->name<<"\nper-"<<p->per<<"%";
 cout<<"\ngrade is "<<p->grade;
 }
getch();
}
