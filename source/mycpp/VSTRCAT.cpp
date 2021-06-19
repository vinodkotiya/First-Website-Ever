#include<stdio.h>
#include<conio.h>
/*#include<string.h>*/
void main()
{
char nm1[6],nm2[20];
int i,j,l;
clrscr();
printf("Enter 1st NAME");
gets(nm1);
printf("Enter 2nd name");
scanf("%s",nm2);
for(i=0;nm2[i]!='\0';i++);
l=i;
for(i=0,j=l;nm1[i]!='\0';i++,j++)
   {nm2[j]=nm1[i];
   }
   nm2[j]='\0';
printf("\n %s",nm2);
getch();
}
