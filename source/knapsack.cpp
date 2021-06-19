#include<iostream.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
int i,j,n,m,u;
float *p,*w,*a,*x,*k,temp,t1,t2;
p=(float *)malloc(sizeof(float)*(n+4));
w=(float *)malloc(sizeof(float)*(n+4));
x=(float *)malloc(sizeof(float)*(n+4));
a=(float *)malloc(sizeof(float)*(n+4));
k=(float *)malloc(sizeof(float)*(n+4));
cout<<"Enter number of items"<<endl;
cin>>n;
cout<<"Enter profit assosiated with each item"<<endl;
for(i=1;i<=n;i++)
cin>>p[i];
cout<<"Enter weights"<<endl;
for(i=1;i<=n;i++)
cin>>w[i];
cout<<"Enter capacity of the knapsack"<<endl;
cin>>m;
clrscr();
for(i=1;i<=n;i++)
{
a[i]=p[i]/w[i];
}
for(i=1;i<=n-1;i++)
   {
   for(j=i+1;j<=n;j++)
     {
     if(a[i]<a[j])
       {
       temp=a[i];a[i]=a[j];a[j]=temp;
       t1=w[i];w[i]=w[j];w[j]=t1;
       t2=p[i];p[i]=p[j];p[j]=t2;
       }
     }
   }
for(i=1;i<=n;i++)
  x[i]=0;
u=m;
for(i=1;i<=n;i++)
{
if(w[i]>u)
 x[i]=u/w[i];
 else if(w[i]<u)
 {
x[i]=1;
u=u-w[i];
}
}
cout<<"Weight"<<"\t"<<"\t"<<"Profit"<<"\t"<<"\t" <<"P/F "<<"\t"<<"\t"<<"proportion"<<"\n"<<"\n";
for(i=1;i<=n;i++)
{
  k[i]=p[i]*x[i];
   cout<<w[i]<<"\t"<<"\t";
   cout<<p[i]<<"\t"<<"\t";
   cout<<a[i]<<"\t"<<"\t";
   cout<<x[i]<<"\t"<<"\t";
   cout<<"\n";
}
cout<<"\n"<<"\n"<<"Net profit:- ";
float t=0;
for(i=1;i<=n-1;i++)
{
t=k[i]+t;
}
cout<<t;
getch();
}