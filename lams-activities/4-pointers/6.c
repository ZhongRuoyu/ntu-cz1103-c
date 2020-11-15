#include <stdio.h>
void fun(int *px,int *py);
int main()
{
   int a,b;
   a=5; b=10;
   fun(&a,&b);
   printf("%d %d\n",a,b);
   return 0;
}
void fun(int *px,int *py)
{
   int temp;
   temp=*px; *px=*py; *py=temp;
}