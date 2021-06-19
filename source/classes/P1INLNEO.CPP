//p1 check even or odd  by inline
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

char p;
char creators();
inline void check(int i)
{
 if(p!='j')
	exit(0);
 if(i%2 == 0)
	 cout<<"No. "<<i<<" is even";
 else
 cout<<"No. "<<i<<" is odd";
}
void main()
{
 clrscr();
 int n;
 int ch;
 p = creators();
 do
	{
	 cout<<"\nEnter any no.\n";
	 cin>>n;
	 check(n);
	 cout<<"\ndo you want to check more(y/n):-";
	 ch=getch();
	}while(ch == 'y' || ch == 'Y');
}

char creators()
{
 cout<<"****************************************************************************";
 char n1[7] = {"Vinod,"},n2[10] = {"Digvijay,"},n3[8] = {"Sameer,"},n4[9] = {"Peeyush,"},n5[8] = {"Vishwas"};
 cout<<"\nCreated by "<<n1<<n2<<n3<<n4<<n5;
	cout<<"\n****************************************************************************\n";
 return n2[5];
}