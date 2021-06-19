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
stud v[2];clrscr();
int i;
for(i=0;i<2;i++)
 {
 cout<<"enter roll";
 cin>>v[i].roll;
 cout<<"enter name";
   cin>>v[i].name;
   cout<<"enter marks of p,c,m";
   cin>>v[i].m>>v[i].p>>v[i].c;
   v[i].per=(float)(v[i].m+v[i].p+v[i].c)/3;
  }
for(i=0;i<2;i++)
 {
 if(v[i].per>=65)
 strcpy(v[i].grade,"first div");
 else if(v[i].per>=45)
 strcpy(v[i].grade,"second div");
 else
 strcpy(v[i].grade,"third div");
 }

for(i=0;i<2;i++)
 {
 cout<<"\nroll-"<<v[i].roll<<"\n name-"<<v[i].name<<"\nper-"<<v[i].per<<"%";
 cout<<"\ngrade is "<<v[i].grade;
 }
getch();
}
