#include<iostream.h>
#include<conio.h>

class array
{
 public:
   array(int a[5][5])
   {
     cout<<"The Array Is As Follows \n";
     for(int i=0;i<5;i++)
     {
       for(int j=0;j<5;j++)
       cout<<a[i][j]<<" ";
       cout<<endl;
     }
   }
};
void main()
{
 clrscr();
 int a[5][5],z=1;
 for(int x=0;x<5;x++)
  for(int y=0;y<5;y++,z++)
   a[x][y]=z;

 array a1(a);
 getch();
}