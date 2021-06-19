#include<iostream.h>
#include<string.h>
#include<conio.h>
class string
{
 char str[50];
public:
 void get(char a[])
 {
 strcpy(str,a);
 }
 string operator +(string s)
 {
  string temp;
  strcpy(temp.str,str);
  strcat( temp.str,s.str);
  return (temp);
 }
 void show()
 {
  cout<<str;
 }
};
void main()
{
 string s1,s2,s3;
  clrscr();
 //cout<<"\n enter 2 strings";
 s1.get("\aHappy diwali");
 s2.get("  All the best");
 s3=s1+s2;
 s3.show();
 getch();
}

