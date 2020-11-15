#include <stdio.h>
int main()
{
   int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
   int *p,i;
   for (p=a,i=0; i<12; p++,i++)
   {
      if (i%4 == 0) printf("\n");
      printf("%d ", *p);
   }
   return 0;
}