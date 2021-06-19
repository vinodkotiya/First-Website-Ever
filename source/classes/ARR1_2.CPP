#include<iostream.h>
#include<conio.h>
class arr1
{protected:
 int a[5];
public:
 void get()
 {
  int i;
  cout<<"\n\aenter elements";
  for(i=0;i<5;i++)
  cin>>a[i];
 }
 void show()
 {int i;
  cout<<"\n\a after swaping";
  for(i=0;i<5;i++)
  cout<<"\a"<<a[i];
 }
};
class arr2:public arr1
{
 int i,j,temp;
public:
 void sort()
 {
  for(i=0;i<5;i++)
   {
    for(j=i+1;j<5;j++)
     if(a[i]>a[j])
     {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
   }
 }
};
void main()
{
 arr2 a2; clrscr();
 a2.get();
 a2.sort();
 a2.show();
 getch();
}