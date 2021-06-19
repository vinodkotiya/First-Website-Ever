#include<iostream.h>
#include<conio.h>
class stud
{
 static int count;
 int roll;
 public:
  stud(int x)
   {
   roll=x;
   count++;
   }
  ~stud()
  {count--;
   cout<<"\nobject destroyed";
   }
  void show()
  {
  cout<<"\n roll="<<roll;
  cout<<"\ntotal students="<<count;
  }
};
int stud::count;
void main()
{
 stud s(10);clrscr();
 s.show();
 stud p(20);
 p.show();
  {
   stud q(30);
   q.show();
   stud r(40);
   r.show();
   }
 s.show();
 getch();
}



