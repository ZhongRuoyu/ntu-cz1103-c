#include<stdio.h>
int main()
{
   int a,b,k=4,m=6,*p1=&k,*p2=&m;
   a=*p1;
   b=(*p1)/(*p2)+7;
   printf("%d,", a);
   printf("%d\n", b);
   return 0;
}