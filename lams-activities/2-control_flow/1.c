#include <stdio.h>
int main()
{
    int k,a=1,b=2;
    k=(a++==b)?2:3;
    printf("%d\n",k);
    return 0;
}