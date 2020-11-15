#include <stdio.h>
void fun(int b[]);
int main()
{
   int a[4],i;
   fun(a);
   for (i=0;i<4;i++)
      printf("%d ",a[i]);
   return 0;
}
void fun(int b[])
{
   int j;
   for ( j=0; j<4; j++ )
      b[j] = j;
}