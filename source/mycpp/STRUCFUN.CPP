#include<iostream.h>
#include<conio.h>
struct stud
{int roll;char nm[10];float per;}
void display (struct stud);/*(int ,char[], float);*/
void main(void)
{
 struct stud s;
 clrscr();
 cout<<"Enter roll,grade & percentage";
 cin>>s.roll>>s.nm>>s.per;
 display(s); /*(s.roll,s.nm,s.per);*/
 getch();
 }
void display(stud s)/*(int s.roll,char s.nm[10],float z)*/
{
cout<<s.roll<<s.nm<<s.per;
}