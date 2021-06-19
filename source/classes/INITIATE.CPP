#include<iostream.h>
#include<conio.h>
class stud
{
 int roll;
 char grd;
 char nm[10];
 float per;
public:
 void set (int ,char,char[],float);
 void show();
};
void stud::set(int x,char y,char n[10],float z)
{
 roll=x;
 grd=y;
 strcpy(nm,n);
 per=z;
}
void stud::show()
{
 cout<<roll<<grd<<per<<nm;
}
void main(void)
{
 stud s;clrscr();
 s.set(10,'A',"vinod",45.4);
 s.show();
 getch();
}