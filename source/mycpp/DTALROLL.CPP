#include<iostream.h>
#include<conio.h>
struct stud
{int roll;char nm[10];float per;};
void main()
{struct stud s[3];
int i,x;
cout<<"Enter roll,name &per";
for(i=0;i<3;i++)
 {
 cin>>s[i].roll>>s[i].nm>>s[i].per;
 }
cout<<"Enter any roll";
cin>>x;
for(i=0;i<3;i++)
 {
 if(x==s[i].roll)
  cout<<s[i].roll<<s[i].nm<<s[i].per;
 }
getch();
}
