#include <stdio.h>
int main()
{
   int *p1,*p2,*p,a=5,b=9;
   p1=&a;
   p2=&b;
   if (a<b)
   { p=p1; p1=p2; p2=p; }
   printf("%d,%d\n",*p1,*p2);
   return 0;
}