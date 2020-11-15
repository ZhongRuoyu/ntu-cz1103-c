#include <stdio.h>
int main()
{
   int i=90,j=3;
   int *p;
   p=&i;
   *p=2;
   (*p)++;
   printf("%d ",*p);  
   (*p)--;
   printf("%d\n",*p);
   return 0;
}