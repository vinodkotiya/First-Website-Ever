#include<stdio.h>
#include<conio.h>
void main()
{
int x=0,i,j,l;
char nm[10];
clrscr();
printf("Enter a string");
scanf("%s",nm);
for(i=0;nm[i]!=0;i++);
l=i;
for(i=0,j=l-1;i<l/2;i++,j--)
  {
  if(nm[i]!=nm[j])
  {
  printf("\nNot a palindrome");
  x=1;
  break;
  }
 }
if (x==0)
printf("\npalindrome");
getch();
}