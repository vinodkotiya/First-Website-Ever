#include<iostream.h>
#include<conio.h>
#include<string.h>
struct stud
{
 int roll;
 char nm[10];
 float per;
 };
void main(void)
{
 stud s[4],temp;
 int i,x,j;
 clrscr();
 for(i=0;i<4;i++)
    {
    cout<<"Enter roll,name,percentage";
    cin>>s[i].roll>>s[i].nm>>s[i].per;
    }
 for(i=0;i<4;i++)
   {
     for(j=i+1;j<4;j++)
     {
		x=strcmp(s[i].nm,s[j].nm);
		if(x>0)
		{
		temp=s[i];s[i]=s[j];s[j]=temp;
		}
     }
   }
 for(i=0;i<4;i++)
  {
  cout<<"\nRoll->"<<s[i].roll;
  cout<<"\nName->"<<s[i].nm;
  cout<<"\nper->"<<s[i].per;
  }
getch();
}