#include <stdio.h>
int main()
{
    int s=1,k=0;
    switch(s)
    {
        case 1: k+=1; break;
        case 2: k+=2; break;
        default: k+=3;
    }
    printf("%d\n",k);
    return 0;
}