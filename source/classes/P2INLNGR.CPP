//p1 check greater or small  by inline
#include<iostream.h>
#include<conio.h>
inline int check(int i,int j)
{
 if(i > j)
 return i;
 else if(i<j)
 return j;
 else if(i==j)
 return 1;
}
void main()
{
 clrscr();
 int n,m;
 int ch,c;
 do
    {
     cout<<"\nEnter any 2 no.\n";
     cin>>n>>m;
     c=check(n,m);
     if(c==n||c==m)
     cout<<"\nThe greater no is "<< c;
     else if(c==1)
     cout<<"\nThe two no are equal ";
     cout<<"\ndo you want to check more(y/n):-";
     ch=getch();
     }while(ch == 'y' || ch == 'Y');
}