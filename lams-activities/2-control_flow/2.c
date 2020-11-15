#include<stdio.h>
int main()
{
    int x=10, y=20;
    if(!(!x) && x)
        printf("%d",x);
    else
        printf("%d",y);
    return 0;
}