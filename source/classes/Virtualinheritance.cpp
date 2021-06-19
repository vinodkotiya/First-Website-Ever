#include<iostream.h>
#include<conio.h>
class student
{
 protected:
  int roll;
 public:
  void get (int a)
  {
   roll = a;
  }
  void show()
  {
   cout<<"roll = "<<roll;
  }
};
class sports:virtual public student
{
 protected:
  float score;
 public:
  void set(float b)
  {
   score = b;
  }
  void display()
  {
   cout<<"\nscore = "<<score;
  }
};
class test: public virtual student
{
 protected:
  float p1,p2;
 public:
  void getmarks(float x,float y)
  {
   p1 = x; p2 = y;
  }
  void showmarks()
  {
  cout<<"\nmarks obtained :p1 = "<<p1<<" p2 = "<<p2;
  }
};
class result : public test , public sports
{
 float total;
public:
 void displayt()
 {
  total=p1+p2+score;
   show();
  display();
   showmarks();
  cout<<"\ntotal score = "<<total;
 }
};
void main()
{
 clrscr();
 result s;
 s.get(123);
 s.getmarks(34.56,26.5);
 s.set(6.4);
 s.displayt();
 getch();
}
