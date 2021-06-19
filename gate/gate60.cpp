#include<stdio.h>
void  wrt_it(void);
int main(void)
{
 printf("Enter Text");
 printf("\n");
 wrt_it();
 printf("\n");
 return 0;
}

void wrt_it(void)
{
 int c;
 if( (c = getchar()) != '\n')
   wrt_it();
 else
   putchar(c);
}