#include <stdio.h>
int main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10},*p=&a[3],*q=p+2;
   printf("%d\n",*p+*q);
   return 0;
}