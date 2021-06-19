#include<stdio.h>
#include<conio.h>
void main()
{
char a[6],b[6],c[12];
int i,j,temp,k=0,l;
clrscr();
printf("Enter 1st array");
for(i=0;i<6;i++,k++)
 {
 scanf(" %c",&a[i]);
 c[k]=a[i];
 }
printf("Enter 2nd array");
for(j=0;j<6;j++,k++)
  {
  scanf(" %c",&b[j]);
  c[k]=b[j];
  }
for(k=0;k<11;k++)
 {
 for(l=k+1;l<=11;l++)
  {
  if(c[k]>c[l])
   {
   temp=c[k];
   c[k]=c[l];
   c[l]=temp;
   }
  }
 }
for(k=0;k<12;k++)
  {
  printf("\n %c",c[k]);
  }
getch();
}
