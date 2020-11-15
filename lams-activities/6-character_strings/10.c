#include <stdio.h>
#include <string.h>
#define N 6
int main()
{
   char str[N][80]={ "Basic","Fortran","Prolog","Java","C++","Python" };
   char *sp;
   int i;
   sp=str;
   for (i=0; i<N; i++)
   {
      if (strlen(sp)<strlen(str[i]))
         sp=str[i];
   }          
   printf("%d %s\n",strlen(sp),sp);
   return 0;
}