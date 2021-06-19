#include<stdio.h>
#include<conio.h>
int sum(int);
void main(void)
{
int n,d;clrscr();
printf("Enter a no");scanf("%d",&n);
d=sum(n);
printf("\nsum of digits=%d",d);
getch();
}
int sum(int )
{
int a,n,s=0;
while(n!=0)
 {
 a=n%10;s=s+a;n=n/10;
 }
 return(s);
/*int s,a,n;

if(n<10)
 return(n);
else
 s=a+sum(n%10,n/10)
 return(s);*/
}



