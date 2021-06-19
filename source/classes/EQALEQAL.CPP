#include<iostream.h>
#include<conio.h>
class distance
{
 int feet;
 float inches;
public:
 void get(int i,float j)
 {
  feet=i;
  inches=j;
 }
int operator ==(distance);
};
int distance::operator ==(distance d)
{
 float x,y;
 x=(12*feet)+inches;
 y=(12*d.feet)+d.inches;
 if(x==y)
  return(1);
 else
  return 0;

}
void main()
{
 distance d1,d2;
 d1.get(10,20); d2.get(30,40);
 if(d1==d2)
 cout<<"\nboth eqal";
 else
 cout<<"\nboth uneqal";
 getch();
}
