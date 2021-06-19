#include<stdio.h>
#include<conio.h>
void main()
{
char nm[10];
int i;
clrscr();
printf("Enter your name");
scanf("%s",nm);
for(i=0;nm[i]|='\0';i++)
 {
 nm[i]=nm[i]+1;
 }
printf("your name is %s",nm);
getch();
}