#include<stdio.h>
#include<conio.h>
void main()
{
char a[6],b[6],c[12];
int i,j,k=0;
clrscr();
printf("Enter 1st NAME");
for(i=0;i<6;i++)
 {scanf(" %c",&a[i]);
	c[k]=a[i];k<6;
  }
printf("Enter 2nd name");
for(j=0;j<6;j++)
  {scanf(" %c",&b[j]);
  c[k]=b[j];k++; k<12;
  }
for(k=0;k<12;k++)
printf(" %c",c[k]);
getch();
}
