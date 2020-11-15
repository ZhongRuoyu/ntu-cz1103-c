#include <stdio.h>
int main()
{
   char a[]="123456789",*p;
   int i=0;
   p=a;
   while (*p)
   {
      if (i%2==0) *p='*';
      p++; i++;
   }
   printf("%s\n",a);
   return 0;
}