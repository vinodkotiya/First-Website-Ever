#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],b[6],c[12];
int i,j,k=0;
clrscr();
printf("Enter 1st array");
for(i=0;i<6;i++,k++)
 {
 scanf("%d",&a[i]);
 c[k]=a[i];
 }
printf("Enter 2nd array");
for(j=0;j<6;j++,k++)
  {
  scanf("%d",&b[j]);
  c[k]=b[j];
  }
for(k=0;k<12;k++)
 {
 printf("\n%d",c[k]);
 }
getch();
}
