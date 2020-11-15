#include <stdio.h>
int fun1();
int fun2();
void fun3(int,int);
int main()
{
   fun3(fun1(),fun2());
   return 0;
}
int fun1()
{
   int k=20;
   return k;
}
int fun2()
{
   int a=15;
   return a;
}
void fun3(int a, int b)
{
   int k;
   k=(a-b)*(a+b);
   printf("%d\n",k);
}