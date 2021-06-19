#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],f,i,j,per,sum,max;
clrscr();
printf("Enter the marks of all 5 students");
for(i=0;i<5;i++)
  {
  for(j=0;j<5;j++)
   {scanf("%d",&a[i][j]);
   }
  }
for(i=0;i<5;i++)
 {
  for(max=a[i][0],j=0;j<5;j++)
   {
   if(max<a[i][j])
   max=a[i][j];
   }
 printf("\nMax marks obtained by student%d=%d",i+1,max);
 }

for(i=0;i<5;i++)
  {
  for(sum=0,j=0;j<5;j++)
   {
     sum=sum+a[i][j];
   }
   per=sum/5;
  printf("\nPercentage of student%d= %d",i+1, per);
 }
for(f=0,i=0;i<5;i++);
 {if(per<33)
 f++; }
printf("\n%dstudents are fail \n %d student are pass",f,5-f);
getch();
}

