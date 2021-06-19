#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,l=0;
clrscr();
printf("Enter 10 + &- no");
for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  }
for(i=0;i<10;i++)
   {
    for(j=l;j<i ;  )
    { if(a[i]>=0)
    a[j]=a[i];
    l++;
    }
   }
for(i=l;i<10;i++)
 {
   for(j=l;j<i ; )
    {if(a[i]<0)
    a[j]=a[i]; l++;
    }
   }
for(j=0;j<10;j++)
printf("\n%d",a[j]);
getch();
}