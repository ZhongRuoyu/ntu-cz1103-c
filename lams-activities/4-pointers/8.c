#include <stdio.h>
void fun(int *n);
int main()
{
   int a=100;
   fun(&a);
   printf("\n");  
   return 0;
}
void fun(int *n)
{
   while ( (*n)-- );
   printf("%d", ++(*n));
}