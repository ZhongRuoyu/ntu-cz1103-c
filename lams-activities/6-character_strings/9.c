#include <stdio.h>
int main()
{
   char *str[] = { "Pascal","C language","Python","Cobol" };
   char **p;
   int k;
   p=str;
   for (k=0; k<4; k++)
      printf("%s ",*(p++));
   return 0;
}