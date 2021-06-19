#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],b[6],c[12];
int i,j,k=0;
clrscr();
printf("Enter 1st array");
for(i=0;i<6;i++)
 {
 scanf("%d",&a[i]);
  }
printf("Enter 2nd array");
for(j=0;j<6;j++)
  {
  scanf("%d",&b[j]);
   }
for(i=0;i<6;i++)
  {
  for(j=0;j<6;j++)
   {
   if(a[i]!=b[j])
    {
    c[k]=a[i];k++;
    }
   }
 }
for(j=0;j<6;j++)
  {
   for(i=0;i<6;i++)
   {
    if(b[j]!=a[i])
    {
    c[k]=b[j];
    k++;
    }
    }
  }
for(k=0;k<12;k++)
  {
  printf("\n%d",c[k]);
  }
getch();
}
