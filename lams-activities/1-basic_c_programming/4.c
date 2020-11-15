#include <stdio.h>
int main()
{
    int a;
    a=1+2*5-3;
    printf("%d,",a);
    a=3+4%5-6;
    printf("%d,",a);
    a=3*4%-6/5;
    printf("%d,",a);
    a=(5+3)%4/2;
    printf("%d\n",a);
    return 0;
}