#include <stdio.h>
int main()
{
   int a[] = { 1,2,3,4,5,6 };
   int *p;
   p = a;
   printf("%d ", *p);
   printf("%d ", *(++p));
   printf("%d ", *++p);
   printf("%d ", *(p--));   
   p += 3;
   printf("%d %d\n", *p, *(a+3));
   return 0;
}