#include <stdio.h>
int main()
{
    struct emplx { int x; int y; } num[2] = { 1,3,2,7 };
    printf("%d\n", num[0].y/num[0].x*num[1].x);
    return 0;
}