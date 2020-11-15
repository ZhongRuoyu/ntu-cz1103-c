#include <stdio.h>
char *f(char *p1, char *p2);
int main()
{
   char a[20]="abcde";
   char b[20]="12345";
   f(a,b);
   printf("%s\n",a);
   return 0;
}
char *f(char *p1, char *p2)
{
   char *p=p1;
   while (*p1) p1++;
   while (*p2) { *p1=*p2; p1++; p2++; }
   *p1='\0';
   return (p);
}