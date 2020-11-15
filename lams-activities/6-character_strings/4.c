#include <stdio.h>
int fun(char a[],char b[]);
int main()
{
   char str1[80]="qwerty";
   char str2[80]="abcd";
   printf("%d\n",fun(str1,str2));
   return 0;
}
int fun(char a[],char b[])
{
   int num=0, n=0;
   while (a[num]!='\0') num++;
   while (b[n])
   {
      a[num]=b[n];
      num++;
      n++;
   }
   return num;
}