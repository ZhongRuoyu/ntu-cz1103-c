#include <stdio.h>
void fun(char *a, char *b);
int main()
{
   char c1='A',c2='a',*p1,*p2;
   p1=&c1; p2=&c2; fun(p1,p2);
   printf("%c%c\n",c1,c2);
   return 0;
}
void fun(char *a, char *b)
{ 
   a=b;
   (*a)++; 
}