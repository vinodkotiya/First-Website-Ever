#include <iostream.h>
int abc(char *s)
{
 if (s[0] == '\0' )
   return 0;
 abc(s+1);
 abc(s+1);
 cout<<s[0];
 return 1;
}
void main()
{
 abc("123");
}