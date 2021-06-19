#include<stdio.h>
#include<conio.h>
void main(void)
{
char nm1[10],nm2[10];
int i,j,x;
clrscr();
printf("Enter 1st name");
scanf("%s",nm1);
printf("\nEnter 2nd name");
scanf("%s",nm2);
for(i=0,j=0;nm1[i]!='\0';i++,j++)
 {
 x=nm1[i]-nm2[j];
 }
 if(x<0)
 printf("1st is small by%d",x);
 else if(x>0)
 printf("2nd is small by %d",x);
 else
 printf("Both eqal");
getch();
}