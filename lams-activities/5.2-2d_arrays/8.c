#include <stdio.h>
#define N 4
void fun(int a[][N], int b[]);
int main()
{
   int x[][N] = { {1,2,3},{4},{5,6,7,8},{9,10}},y[N],i;
   fun(x,y);
   for (i=0;i<N;i++) printf("%d ",y[i]);
   printf("\n");
   return 0;
}
void fun(int a[][N], int b[])
{
   int i;
   for (i=0;i<N;i++) b[i]=a[i][i];
}