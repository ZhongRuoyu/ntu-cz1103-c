#include <stdio.h>
#define MAX 10
int a[MAX],i;
void sub1();
void sub2();
void sub3(int a[]);
int main()
{
   printf("\n"); sub1(); sub2(); sub3(a);
   return 0;
}
void sub1()
{
   for (i=0;i<MAX;i++) a[i]=i+1;
}
void sub2()
{
   int a[MAX],i,max;
   max=5;
   for (i=0;i<max;i++) a[i]=i;
}
void sub3(int a[])
{
   int i;
   for (i=0;i<MAX;i++) printf("%d ",a[i]);
   printf("\n");
}