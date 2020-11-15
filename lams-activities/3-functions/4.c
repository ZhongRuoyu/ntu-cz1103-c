#include <stdio.h>
void fun(int x, int y);
int main()
{
   int a,b;
   a=5; b=10;
   fun(a,b);
   printf("%d %d\n",a,b);
   return 0;
}
void fun(int x,int y)
{
   int temp;
   temp=x; x=y; y=temp;
}