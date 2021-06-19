#include<iostream.h>
#include<conio.h>
#include<alloc.h>
#include<math.h>
int binsrch(int *a,int n,int x);
void main()
{
clrscr();
int i,n,*a,m,x;
a=(int *)malloc(sizeof(int)*n);
cout<<"Enter number of elements in the list"<<"\n";
cin>>n;
cout<<"Enter sorted list (in ascending order)"<<"\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the item to be searched"<<"\n";
cin>>x;
clrscr();
m=binsrch(a,n,x);
if(m!=-1)
cout<<"Item is present in the list at "<<m<<" position"<<"\n";
else
cout<<"Item is not present in the list";
getch();
}
int binsrch(int *a,int n,int x)
{
int low=0,high=n-1;
int mid=floor((low+high)/2);
while(low<=high)
{
mid=floor((low+high)/2);
if(x<a[mid])
high=mid-1;
else if(x>a[mid])
low=mid+1;
else
return mid;
}
return -1;
}