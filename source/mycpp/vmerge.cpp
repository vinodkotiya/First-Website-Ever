#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],b[6],c[12],i,j,k=0,l,temp;
clrscr();
printf("Enter elements of 1st array");
for(i=0;i<6;i++)
 {
 scanf("%d",&a[i]);
 c[k]=a[i];
 k<6;k++;
 }
printf("Enter 2nd array");
for(j=0;j<6;j++)
 {
 scanf("%d",&b[j]);
 c[k]=b[j];
 k<12;k++;
 }
for(k=0;k<11;k++)
 {
 for(l=k+1;l<=11;l++)
  {
  if(c[k]>c[l])
  {temp=c[k];
  c[k]=c[l];
  c[l]=temp;
  }
 }
}
for(k=0;k<12;k++)
 {
 printf("\n%d",c[k]);
 }
getch();
}
