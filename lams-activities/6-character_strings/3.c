#include <stdio.h>
int main()
{
   char a[]="language",b[]="program";
   char *ptr1=a, *ptr2=b;
   int k;
   for (k=0; k<7; k++)
      if (*(ptr1+k) == *(ptr2+k))
         printf("%c",*(ptr1+k));
   return 0;
}