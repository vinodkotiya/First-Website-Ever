#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
printf("Enter array of positive & negative no");
for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  a[i]=-a[i];
  }
for(i=0;i<10;i++)
  {
    printf("\n%d",a[i]);
  }
getch();
}