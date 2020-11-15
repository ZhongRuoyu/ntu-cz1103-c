#include <stdio.h>
double fun(int,int,int);
int main()
{
   int a=4,b=6,c=7;
   double d;
   d=fun(a,b,c);
   printf("%lf\n",d);
   return 0;
}
double fun(int a, int b, int c)
{
   double s;
   s=a%b*c;
   return s;
}