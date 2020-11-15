#include <stdio.h>
int fun(int x, int y);
int main()
{
   int a=4,b=5,c=6;
   printf("%d\n",fun(2*a,fun(b,c)));
   return 0;
}
int fun(int x, int y)
{
   if (x==y) return (x);
   else return ((x+y)/2);
}