#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char nm1[10],nm2[20];
printf("type ILOVEYOU ");
gets(nm1);
printf("Enter the name");
scanf("%s",nm2);
strcat(nm2,nm1);
printf("%s",nm2);
getch();
clrscr();
}