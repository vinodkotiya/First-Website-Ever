#include<iostream.h>
#include<conio.h>
struct vin
{
 int roll;
 char nm[10];
 float per;
 };
void main(void)
{
 vin s[4],temp;
 int i,j;
 clrscr();
 for(i=0;i<4;i++)
    {
    cout<<"Enter roll,grade,percentage";
    cin>>s[i].roll>>s[i].nm>>s[i].per;
    }
 for(i=0;i<4;i++)
   {
     for(j=i+1;j<4;j++)
	if(s[i].roll>s[j].roll)
	  {
	  temp=s[i];s[i]=s[j];s[j]=temp;
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