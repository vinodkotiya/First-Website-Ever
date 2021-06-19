#include<stdio.h>
#include<conio.h>
void main()
{
char nm[10];
int i;
clrscr();
printf("Enter name in tOgGle case");
scanf("%s",nm);
for(i=0;nm[i]!='\0';i++)
 {
 if(nm[i]>=65 && nm[i]<=90)
   nm[i]=nm[i]+32;
 else if(nm[i]>=97&&nm[i]<=122)
   nm[i]=nm[i]-32;
   }
printf("\n%s",nm);
getch();
}
