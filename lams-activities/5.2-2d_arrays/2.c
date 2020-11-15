#include <stdio.h>
int main()
{
   int a[3][3]={ 1,3,6,7,9,11,14,15,17 };
   int s=0,i,j;
   for (i=0;i<3;i++)
      for (j=0;j<3;j++)
         if (i==j) s=s+a[i][j];      
   printf("%d\n",s);
   return 0;
}    