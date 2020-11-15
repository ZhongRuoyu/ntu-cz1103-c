#include <stdio.h>
int main()
{
   int i,n[4]={1};
   for (i=1;i<=3;i++)
   {
      n[i]=n[i-1]*2+1;
      printf("%d ",n[i]);
   }
   return 0;
}