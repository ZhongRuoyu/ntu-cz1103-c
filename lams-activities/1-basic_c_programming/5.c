#include <stdio.h>
int main()
{
    int m=12,n=34;
    printf("%d%d",m++,++n);
    printf("%d%d\n",n++,++m);
    return 0;
}