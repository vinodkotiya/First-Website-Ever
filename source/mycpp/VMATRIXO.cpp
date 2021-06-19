#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],i,j,s[2][2],m[2][2];;
clrscr();
printf("Enter 1st matrtx\n");
for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
    }
    }
printf("\nEnter 2nd matrix\n");
for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
   {
    scanf("%d",&b[i][j]);
    }
    }
for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
   {
   s[i][j]=a[i][j]+b[i][j];
   m[i][j]=a[i][j]-b[i][j];
   }
 }
printf("\nsum of matrices \n");
for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
  printf("%d ",s[i][j]);
  }
  printf("\n");
 }
printf("\nsubtraction of matrices \n");
for(i=0;i<2;i++)
  {
  for(j=0;j<2;j++)
  {
  printf("%d ",m[i][j]);
  }
  printf("\n");
 }
getch();
}