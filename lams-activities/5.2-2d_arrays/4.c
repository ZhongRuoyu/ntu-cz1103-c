#include <stdio.h>
int main()
{
   int a[3][3],*p,i;
   p = &a[0][0];
   for (i=0;i<9;i++) p[i]=i+1;
   printf("%d\n", a[1][2]);
   return 0;
}