#include<iostream.h>
#include<conio.h>
#include<alloc.h>
#include<math.h>
int binsrch(int *a,int low,int high,int x);
void main()
{
clrscr();
int n,*a;
int i,m,x,low=1,high=n;
a=(int *)malloc(sizeof(int)*n);
cout<<"Enter number of elements in the list"<<"\n";
cin>>n;
cout<<"Enter sorted list (in ascending order)"<<"\n";
for(i=1;i<=n;i++)
{
cin>>a[i];
}
cout<<"Enter the item to be searched"<<"\n";
cin>>x;
clrscr();
m=binsrch(a,low,high,x);
if(m!=0)
cout<<"Item is present in the list at "<<m<<" position"<<"\n";
else
cout<<"Item is not present in the list";
getch();
}
int binsrch(int *a,int low,int high,int x)
{ int n,pos;
 low=1,high=n;
if(low==high)
{
if(x==a[low])
  return low;
else
  return 0;
  }
else
{
int mid=floor((low+high)/2);
if(x==a[mid])
 return mid;
else if(x<a[mid])
 pos=binsrch(a,mid+1,high,x);
else
 pos=binsrch(a,low,mid-1,x);
 }
 return pos;
}








