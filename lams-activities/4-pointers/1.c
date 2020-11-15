#include <stdio.h>
int main()
{
   int a=5,b=10,c=15,s;
   int *px,*py,*pz,*ps;
   px=&a; py=&b; pz=&c;
   ps=&s;
   *ps=*px;
   if (*ps<*py) *ps=*py;
   if (*ps<*pz) *ps=*pz;
   printf("%d\n",s);
   return 0;
}