#include<stdio.h>
#include<conio.h>
int sum();
void main(void)
{
int d;clrscr();
d=sum();
printf("\nsum of digits=%d",d);
getch();
}
int sum()
{
/*int a,n,s=0;
printf("Enter a no.");
scanf("%d",&n);
while(n!=0)
 {
 a=n%10;s=s+a;n=n/10;
 }
 return(s); */
int s,a,n;
printf("Enter ano");scanf("%d",&n);
if(n<10)
 return(n);
else
 s=a+sum(n%10,n/10)
 return(s);
}