#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>

int part(int *a,int m,int p);
void quicksort(int p,int q);
int *a,p,q,n,i;

void main()
{
clrscr();
cout<<"Enter the number of elements to be sorted"<<"\n";
{
 cin>>n;
}
a=(int *) malloc(sizeof(int)*n);
cout<<"Enter the list to be sorted"<<"\n";
for(i=1;i<=n;i++)
cin>>a[i];
quicksort(1,n);
cout<<"The sorted list is"<<"\n";
for(i=1;i<=n;i++)
{
 cout<<a[i]<<"\t";
}
getch();
}

void quicksort(int p,int q)
{
int j;
if(p<q)
{
j=part(a,p,q+1);
quicksort(p,j-1);
quicksort(j+1,q);
}
}

int part(int *a,int m,int p)
{
int v,i,j,t,t1;
v=a[m];
i=m;
j=p;
do
{
   do{
    i=i+1; }  while(a[i]<v) ;
   do{
    j=j-1;} while(a[j]>v);
 if(i<j)
  {  t=a[i];
     a[i]=a[j];
     a[j]=t;
    }
 } while(i<j);
t1=a[m];
a[m]=a[j];
a[j]=t1;
return j;
}


