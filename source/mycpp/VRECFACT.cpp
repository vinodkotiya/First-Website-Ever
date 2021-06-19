#include<stdio.h>
#include<conio.h>
int fact(int);
void main(void)
{
int a,b;clrscr();
printf("Enter a no");scanf("%d",&a);
b=fact(a);
printf("Factorial=%d",b);
getch();
}
int fact(int a)
{
/*int i=1;
while(a>=1)
 {i=i*a;
 a--;
 }*/
int i;
/*for(i=1;a>=1;a--)
{i=i*a;}
return(i);*/
if(a<=1)
return (i=1);
else
i=a*fact(a-1);
return (i);
}