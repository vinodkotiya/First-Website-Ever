#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{
char nm1[10],nm2[10];
int x;
clrscr();
printf("Enter 2 names");
scanf("%s%s",nm1,nm2);
x=strcmp(nm1,nm2);
if(x<0)
printf("ist is small %d",x);
else if(x>0)
printf("2nd is small %d",x);
else
printf("both eqal");
/*strrev(nm1);
printf("\n%s",nm1);
strlwr(nm1);
printf("\n%s",nm1);*/
getch();
}