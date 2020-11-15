#include <stdio.h>
int try();
int main()
{
   int i,x;
   for (i=0;i<=2;i++)
      x=try();
   printf("%d\n",x);
   return 0;
}
int try()
{
   static int x=3;
   x++;
   return (x);
}