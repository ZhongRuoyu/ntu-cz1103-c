#include <stdio.h>
int main()
{
   int i,j,a[2][3]={ {2,4,6}, {8,10,12} };
   for (i=0;i<3;i++)
   {
      for (j=0;j<2;j++)
         printf("%d ", a[j][i]);      
      printf("\n");
   }
   return 0;
}