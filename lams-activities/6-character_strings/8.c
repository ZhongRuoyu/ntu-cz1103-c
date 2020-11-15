#include <stdio.h>
#include <string.h>
int main()
{
   char *s1="AbDeG";
   char *s2="AbdEg";
   s1+=2; s2+=2;
   printf("%d\n",strcmp(s1,s2));
   return 0;
}