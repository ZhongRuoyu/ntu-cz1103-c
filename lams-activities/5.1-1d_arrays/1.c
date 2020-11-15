#include <stdio.h>
int main()
{
   int i,a[10];
   for (i=9;i>=0;i--) a[i]=10-i;
   printf("%d %d %d",a[3],a[6],a[9]);
   return 0;
}