#include <stdio.h>
#include <string.h>
int main()
{
   int i=0,n=0;
   char s[80], *p;
   p=s;
   strcpy(p,"It is a book.");
   for ( ; *p!='\0'; p++)
      if (*p==' ') i=0;
      else if (i==0) { n++; i=1; }
   printf("%d\n",n);
   return 0;
}