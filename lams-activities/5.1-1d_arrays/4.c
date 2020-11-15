#include <stdio.h>
int main()
{
   int x[]={1,2,3};
   int s,i,*p;
   s=1; p=x;
   for (i=0; i<3; i++)
      s*=*(p+i);
   printf("%d\n",s);
   return 0;
}