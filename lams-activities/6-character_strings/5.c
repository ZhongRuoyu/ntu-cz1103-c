#include <stdio.h>
int fun(char *s,char *t);
int main()
{
   char a[80]="acdef";
   char b[80]="abcd";
   char *p,*q;
   p=a; q=b;
   printf("%d\n",fun(p,q));
   return 0;
}
int fun(char *s,char *t)
{
   for ( ; *s==*t; t++, s++)
      if (*s=='\0') return 0;
   return (*s-*t);
}