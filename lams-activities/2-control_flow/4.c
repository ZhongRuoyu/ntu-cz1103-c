#include <stdio.h>
int main()
{
    int x=1,a=0,b=0;
    switch (x)
    {
        case 0: b++;
        case 1: a++;
        case 2: a++; b++;
    }
    printf("%d,%d\n",a,b);
    return 0;
}