#include<stdio.h>
#include<conio.h>
void main()
{
char nm1[10],nm2[10],sr[10];
clrscr();
printf("Enter your name,\n middle name,\n& surname");
scanf("%s%s%s",nm1,nm2,sr);
printf("HELLO!Mr.%c.%c.%s",nm1[0],nm2[0],sr);
getch();
}
