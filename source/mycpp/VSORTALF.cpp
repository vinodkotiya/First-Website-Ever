#include<stdio.h>
#include<conio.h>
void main()
{
char a[12],temp;
int i,j;
clrscr();
printf("Enter characters");
for(i=0;i<12;i++)
  {
  scanf(" %c",&a[i]);
  }
for(i=0;i<11;i++)
  {
  for(j=i+1;j<=11;j++)
   {
   if(a[i]>a[j])
     {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
     }
   }
  }
for(i=0;i<12;i++)
 {
 printf("\n %c",a[i]);
 }
getch();
}