#include <stdio.h>
int abc(int u,int v);
int main()
{
   int a=24, b=16, c;
   c=abc(a,b);
   printf("%d\n",c);
   return 0;
}
int abc(int u, int v)
{
   int w;
   while (v)
   { w=u%v; u=v; v=w; }
   return u;
}