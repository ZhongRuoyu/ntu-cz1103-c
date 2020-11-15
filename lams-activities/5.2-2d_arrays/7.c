#include <stdio.h>
int main()
{
   int a[2][3] = { {1,2,3}, {4,5,6} };
   int m, *ptr;
   ptr=&a[0][0];
   m = (*ptr)*(*(ptr+2))*(*(ptr+4));
   printf("%d\n", m);
   return 0;
}