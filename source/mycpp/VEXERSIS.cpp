#include<stdio.h>
#include<conio.h>
void main()
{
int  n[]={10,20,30,40,50};
int i;
clrscr();
for(i=0;i<=4;i++)
 {
  printf("   %d ",*(n+i));

 }

getch();
}