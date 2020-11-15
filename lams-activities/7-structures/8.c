#include <stdio.h>
struct st
{
    int x,y;
} data[2]={1,10,2,20};
int main()
{
    struct st *p=data;
    printf("%d,",p->y);
    printf("%d\n",(++p)->x);   
    return 0;
}