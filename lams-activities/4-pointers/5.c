#include <stdio.h>
int b=2;
int fun(int *a);
int main()
{
   int a=2,res=2;
   res += fun(&a);
   printf("%d\n",res);
   return 0;
}
int fun(int *a)
{
   b+=*a;
   return b;   
}