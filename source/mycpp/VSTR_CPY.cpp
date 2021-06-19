#include<stdio.h>
#include<conio.h>
/*#include<string.h>*/
void main()
{
char nm1[10],nm2[10];clrscr();int i;
printf("Enter a string");
gets (nm1);
 /*strcpy(nm2,nm1);*/
for(i=0;nm1[i]!='\0';i++)
  {
  nm2[i]=nm1[i];
  }
  nm2[i]!='\0';
printf("%s ",nm2);
getch();
}