#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
void mergesort(int low,int high);
void merge(int low,int mid,int high);
int n,*a,*b;
void main()
{
clrscr();
int i;
a=(int *) malloc(sizeof(int)*n);
b=(int *) malloc(sizeof(int)*n);
cout<<"Enter the number of elements in the list"<<endl;
cin>>n;
cout<<"Enter the list to be sorted"<<endl;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
int low=1,high=n;
mergesort(low,high);
  for(i=1;i<=n;i++)
{
cout<<a[i]<<" ";
}
getch();
}
void mergesort(int low,int high)
{
if(low<high)
 {
  int mid=floor((high+low)/2);
  mergesort(low,mid);
  mergesort(mid+1,high);
  merge(low,mid,high);
  }

 }
void merge(int low,int mid,int high)
{
int k,h=low,i=low,j=mid+1;
 while((h<=mid) && (j<=high))
 {
  if(a[h]<=a[j])
   {
     b[i]=a[h];
     i=i+1;
     h=h+1;
     }
    else
    {
     b[i]=a[j];
     i=i+1;
     j=j+1;
     }
    // i=i+1;
    }
   if(h<mid)
    {
     for(k=h;k<=mid;k++)
      {
       b[k]=a[h];
       h=h+1;
       }
      }
     if(j<high)
      {
       for(k=j;k<=high;k++)
	{
	 b[k]=a[j];
	 j=j+1;
	 }
	}
      }
/*if(h>mid)
{
for(k=j;k<=high;k++)
{
b[i]=a[k];
i=i+1;
}
}
else
{
for(k=h;k<=mid;k++)
{
b[i]=a[k];
i=i+1;
}
}
for(k=low;k<=high;k++)
{
a[k]=b[k];
}
}     */
