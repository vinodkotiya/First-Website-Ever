//to print the price and name of twenty items
#include<iostream.h>
#include<conio.h>

int i;
class description
{
 char name[10];
 float price;
 public:
 void get();
 void show();
};
void description :: get()
 {
   cin>>name>>price;
 }
void description :: show()
 {
   cout<<"\nName Of The Item no "<<i<<" is "<<name<<" And its price "<<price;
 }

void main()
{
 clrscr();
 description item[10];
  for (i=1;i<=10;i++)
  {
   cout << "\nEnter the name & price of item no.  "<<i<<endl;
   item[i].get();
  }
for (i=1;i<=10;i++)
 item[i].show();
getch();
}