#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char ch;
printf("Enter 2 nos.");
scanf("%d%d",&a,&b);
printf("Sum of nos.=%d",a+b);
printf("wanna more");
scanf(" %c ",&ch);
if(ch=='y')
 main();/*return();*/
getch();
}