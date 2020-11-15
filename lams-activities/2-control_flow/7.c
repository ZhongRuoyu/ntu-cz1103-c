#include <stdio.h>
int main()
{
    int i=10,j=0;
    do { j=j+1; i--; } while (i>2);
    printf("%d",j);
    return 0;
}