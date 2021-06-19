#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

{
char nm[5][20],temp[29],c;
int i,j,t=0;
clrscr();
printf("Enter 5 names");
for(i=0;i<5;i++)
  gets(nm[i]);
printf("\nenter any character");
scanf(" %c ",&c);
for(i=0;i<4;i++)
 {
 for(j=i+1;j<=4 ;j++)
  {
  if(strcmp(nm[i],nm[j])>0)
   {
   strcpy(temp,nm[i]);
   strcpy(nm[i],nm[j]);
   strcpy(nm[j],temp);
   }
 }
 }
for(i=0;i<5;i++)
 {
 for(j=0;j<20;j++)
  {
   if(c==nm[i][j])
   t++;
   }
  }
for(i=0;i<5;i++)
{ printf("\n%s",nm[i]);}
 printf(" %c is occuring %d times",c,t);
 getch();
 }












































































