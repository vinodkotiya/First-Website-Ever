#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
struct stud
{
 int roll;
 char nm[10];
 float per;
 };
struct stud compare(stud[]);
void display(int &/*stud*/);
struct stud s[3];
void main()
{
 /*struct stud s[3],temp;*/
 int i;
 clrscr();
 cout<<"Enter roll,name &per";
 for(i=0;i<3;i++)
  {
  cin>>s[i].roll>>s[i].nm>>s[i].per;
  }
 compare(s);
 getch();
}
struct stud compare(stud s[5])
{
 int i,flag=0;
 char nm1[10];
 cout<<"Enter the name whose details to be displayed";
 cin>>nm1;
 for(i=0;i<3;i++)
 {
 if(strcmp(nm1,s[i].nm)==0)
   {flag=1;
    display(i/*s[i]*/);
   }
 }
 if (flag==0)
  {
   cout<<"name not found";
   exit(0);
  }
}
void display(int &i/*stud temp*/)
{
 /*cout<<temp.nm<<temp.roll<<temp.per;*/
 cout<<s[i].roll<<s[i].nm<<s[i].per;
}

