#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char nm1[10],nm2[10];int x;clrscr();
printf("Enter a string");
scanf("%s",nm1);
printf("Enter another string");
scanf("%s",nm2);
x=strcmp(nm1,nm2);
  if(x<0)
   printf("1st small by %d",x);
  else if(x>0)
  printf("2nd small    %d",x);
  else
  printf("Both eqal");
getch();
}