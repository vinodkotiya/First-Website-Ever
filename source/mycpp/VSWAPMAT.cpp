#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2]={1,3,2,5}, b[2][2]={6,9,5,4},temp,i,j;
clrscr();
for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
  {
  temp=a[i][j];
  a[i][j]=b[i][j];
  b[i][j]=temp;
  }
  }
for(i=0;i<2;i++)
  {for(j=0;j<2;j++)
  {
  printf("%d\t",a[i][j]);
  printf("\n\t%d",b[i][j]);
  }
  }
getch();
}
