#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
struct stud
{
int roll;
char nm[10];
float per;
};
void search(struct stud [],char find[],char replace[],int&,int&);
void swap(struct stud[],int&,int&);
void display(struct stud[]);
void accept(struct stud[]);
void main()
{
 stud s[5];
 char find[10],replace[10]; int i,j;
 clrscr();
 accept(s);
 cout<<"Enyter the name to be searched"; cin>>find;
 cout<<"\nEnter 2nd name to be searched"; cin>>replace;
 search(s,find,replace,i,j);
 swap(s,i,j);
 display(s);
 getch();
}
void accept (struct stud s[5])
{
 int i;
 for(i=0;i<5;i++)
  {
  cout<<"Enter roll,name,&per";
  cin>>s[i].roll>>s[i].nm>>s[i].per;
  }
}
void search(struct stud s[5],char find [10],char replace[10],int &i,int &j)
{
 int k,flag1=0,flag2=0;
 for(k=0;k<5;k++)
  {if(strcmp(s[k].nm,find)==0)
    {
    i=k;flag1=1;
    }
   if(strcmp(s[k].nm,replace)==0)
   {j=k;flag2=1;
   }
 }
 if(flag1==0||flag2==0)
  {
  cout<<"Swaping not possible";
  exit (0);
  }
}
void swap(struct stud s[5],int &i,int &j)
{
 struct stud temp;
 strcpy(temp.nm,s[i].nm);
 strcpy(s[i].nm,s[j].nm);
 strcpy(s[j].nm,temp.nm);
 }
void display (struct stud s[5])
{
int i;
for (i=0;i<5;i++)
 {
 cout<<s[i].nm<<s[i].roll<<s[i].per;
 }
}
