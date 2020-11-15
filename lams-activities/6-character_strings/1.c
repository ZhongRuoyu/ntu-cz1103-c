#include <stdio.h>
int main()
{
    char *format="%s,a=%d,b=%d\n";
    int a=1,b=10;
    a+=b;
    printf(format,"a+=b",a,b);
    return 0;
}