#include<iostream.h>
#include<conio.h>
class fabonacci
{
 int f,i,c,a,b,arr[50];
 public:
 void get();
 void fab();
 void show();
};
void fabonacci::get()
{
 cout<<"\nEnter the terms of fabonacci series";
 cin>>f;
}
void fabonacci::fab()
{

 a=0;b=1;
 arr[0]=0;arr[1]=1;
 for(i=2 ;i<=f; i++)
  {
   c=a+b;
   a=b;
   b=c;
   arr[i]=c;
  }
}
void fabonacci ::show()
{

 for(i=0;i<f;i++)
 cout<<"  "<<arr[i];
}
void main(void)
{
 fabonacci s;
 clrscr();
 s.get();
 s.fab();
 s.show();
 getch();
}
