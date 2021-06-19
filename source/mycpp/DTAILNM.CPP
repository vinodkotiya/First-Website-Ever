#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct stud
{
 int roll;
 char nm[10];
 float per;
 };
struct stud compare(stud[],char[]);
void display(stud);
void main()
{
 struct stud s[3],temp;
 int i;
 char nm1[10];
 clrscr();
 cout<<"Enter roll,name &per";
 for(i=0;i<3;i++)
  {
  cin>>s[i].roll>>s[i].nm>>s[i].per;
  }
 clrscr();
 cout<<"Enter the name whose details to be displayed";
 cin>>nm1;
 temp=compare(s,nm1);
 display(temp);
 getch();
}
struct stud compare(stud s[5],char nm1[10])
{
 int i,flag=0;
 for(i=0;i<3;i++)
 {
 if(strcmp(nm1,s[i].nm)==0)
   {
    flag=1;
    return(s[i]);
   }
 }
 if (flag==0)
  {
   cout<<"name not found";
   exit(0);
  }
}
void display(stud temp)
{
 cout<<temp.nm<<temp.roll<<temp.per;
}

