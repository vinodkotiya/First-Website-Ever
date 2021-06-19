#include<iostream.h>
#include<conio.h>
#include<string.h>
struct stud
{
int roll;
char grade;
float per;
};
void main (void)
{
stud v;
v.roll=1102;
v.grade='A';
v.per=78.3;
cout<<"\nroll-"<<v.roll<<"\n grade-"<<v.grade<<"\nper-"<<v.per;
getch();
}
