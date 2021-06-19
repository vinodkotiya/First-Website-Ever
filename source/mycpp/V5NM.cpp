#include<stdio.h>
#include<conio.h>>
void main()
{
char nm[5][19],j;
int i;
clrscr();
//scanf(" %c ",&j);
printf("Enter 5  names\n\t");
for(i=0;i<5;i++)
 {
 gets(nm[i]);
 }

for(i=0;i<5;i++)
 {//if(nm[i][0]==j)
 printf("\nHELLO!Mr.%s",nm[i]);
 }
getch();
}