#include <stdio.h>
int main()
{
    int i,j,x=0;
    for (i=0; i<2; i++)
    {
        x++;
        for (j=0; j<=3; j++)
        {
            if (j%3==1) continue;
            x++;
        }
        x++;
    }
    printf("%d",x);
    return 0;
}