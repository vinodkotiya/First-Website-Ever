/************************  //  COPY CONSTRUCTOR  //     *************************/

#include<iostream.h>
#include<conio.h>
class stud
{
 int roll;
 char grade;
 float per;
public:
 void show();
 stud();
 stud (stud &);
};
stud::stud()
{
 cout<<"\n\aEnter\aroll\agrade\aper";
 cin>>roll>>grade>>per;
}
stud::stud(stud &s)
{
 roll=s.roll;
 grade=s.grade;
 per=s.per;
}
void stud::show()
{
 cout<<"\n\aroll="<<roll<<"\n\agrade="<<grade<<"\n\apercentage="<<per;
}
void main(void)
{
 stud s;
 stud p(s);clrscr();
 //p(s);
 s.show();
 p.show();
getch();
}