#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char nm[10];
int len;
clrscr();
printf("Enter a string");
gets(nm);
len=strlen(nm);
printf("Length=%d",len);
getch();
}