#include<iostream.h>
#include<conio.h>
#include<string.h>
struct stud
{
int roll;
char name[10];
/*char grade;*/
float per;
};
void main (void)
{
stud v[4];clrscr();
int i;
for(i=0;i<4;i++)
 {
 cout<<"\nenter roll";
 cin>>v[i].roll;
 cout<<"\nenter name";
   cin>>v[i].name;
   cout<<"\nenter percentage";
   cin>>v[i].per;
  }
for(i=0;i<4;i++)
cout<<"\nroll-"<<v[i].roll<<"\n name-"<<v[i].name<<"\nper-"<<v[i].per<<"%";
getch();
}
