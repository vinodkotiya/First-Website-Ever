#include<stdio.h>
#include<conio.h>
int pow(int ,int );
void main(void)
{
int a,b,p;
clrscr();
printf("Enter base & index");
scanf("%d%d",&a,&b);
p=pow(a,b);
printf("Ans =%d",p);
getch();
}
int pow(int a, int b)
{
/*int c=1;
while(b>=1)
 {c=c*a;
 b--;
 }
return (c);*/
int c;
if(b==1)
 return a;
 else
 c=a*pow(a,b-1);
 return(c);

}

